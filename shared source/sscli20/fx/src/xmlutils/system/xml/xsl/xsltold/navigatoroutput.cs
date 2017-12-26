//------------------------------------------------------------------------------
// <copyright file="NavigatorOutput.cs" company="Microsoft">
//     
//      Copyright (c) 2006 Microsoft Corporation.  All rights reserved.
//     
//      The use and distribution terms for this software are contained in the file
//      named license.txt, which can be found in the root of this distribution.
//      By using this software in any fashion, you are agreeing to be bound by the
//      terms of this license.
//     
//      You must not remove this notice, or any other, from this software.
//     
// </copyright>                                                                
//------------------------------------------------------------------------------

namespace System.Xml.Xsl.XsltOld {
    using Res = System.Xml.Utils.Res;
    using System;
    using System.Diagnostics; 
    using System.Xml;
    using System.Xml.XPath;
    using MS.Internal.Xml.Cache;

    internal class NavigatorOutput : RecordOutput {
        private XPathDocument doc;
        private int documentIndex;        
        private XmlRawWriter wr;
        
        internal XPathNavigator Navigator {
            get { return ((IXPathNavigable)doc).CreateNavigator(); }
        }

        internal NavigatorOutput(string baseUri) {
            doc = new XPathDocument();
            this.wr = doc.LoadFromWriter(XPathDocument.LoadFlags.AtomizeNames, baseUri);
        }

        public Processor.OutputResult RecordDone(RecordBuilder record) {
            Debug.Assert(record != null);

            BuilderInfo mainNode = record.MainNode;
            documentIndex++;
            switch(mainNode.NodeType) {
                case XmlNodeType.Element: {                    
                    wr.WriteStartElement( mainNode.Prefix, mainNode.LocalName, mainNode.NamespaceURI );
                    for (int attrib = 0; attrib < record.AttributeCount; attrib ++) {
                        documentIndex++;
                        Debug.Assert(record.AttributeList[attrib] is BuilderInfo);
                        BuilderInfo attrInfo = (BuilderInfo) record.AttributeList[attrib];
                        if (attrInfo.NamespaceURI == Keywords.s_XmlnsNamespace) {
                            if( attrInfo.Prefix.Length == 0 )
                                wr.WriteNamespaceDeclaration(string.Empty, attrInfo.Value );
                            else
                                wr.WriteNamespaceDeclaration( attrInfo.LocalName, attrInfo.Value );                            
                        }
                        else {
                            wr.WriteAttributeString( attrInfo.Prefix, attrInfo.LocalName, attrInfo.NamespaceURI, attrInfo.Value );
                        }
                    }

                    wr.StartElementContent();

                    if (mainNode.IsEmptyTag)
                        wr.WriteEndElement( mainNode.Prefix, mainNode.LocalName, mainNode.NamespaceURI );
                    break;
                }

                case XmlNodeType.Text:
                    wr.WriteString( mainNode.Value );
                    break;
                case XmlNodeType.Whitespace:
                    break;
                case XmlNodeType.SignificantWhitespace:
                    wr.WriteString( mainNode.Value );
                    break;

                case XmlNodeType.ProcessingInstruction:
                    wr.WriteProcessingInstruction( mainNode.LocalName, mainNode.Value );
                    break;
                case XmlNodeType.Comment:
                    wr.WriteComment( mainNode.Value );
                    break;

                case XmlNodeType.Document:
                    break;

                case XmlNodeType.EndElement:
                    wr.WriteEndElement( mainNode.Prefix, mainNode.LocalName, mainNode.NamespaceURI );
                    break;

                default:
                    Debug.Fail("Invalid NodeType on output: " + mainNode.NodeType);
                    break;
            }
            record.Reset();
            return Processor.OutputResult.Continue;
        }

        public void TheEnd() {
            wr.Close();
        }
    }
}

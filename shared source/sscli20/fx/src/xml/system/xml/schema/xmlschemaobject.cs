//------------------------------------------------------------------------------
// <copyright file="XmlSchemaObject.cs" company="Microsoft">
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
// <owner current="true" primary="true">priyal</owner>                                                                 
//------------------------------------------------------------------------------

namespace System.Xml.Schema {

    using System.Diagnostics;
    using System.Xml.Serialization;
    using System.Security.Permissions;
    
    /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject"]/*' />
    /// <devdoc>
    ///    <para>[To be supplied.]</para>
    /// </devdoc>
    [PermissionSetAttribute(SecurityAction.InheritanceDemand, Name = "FullTrust")]
    public abstract class XmlSchemaObject {
        int lineNum = 0;
        int linePos = 0;
        string sourceUri;
        XmlSerializerNamespaces namespaces;
        XmlSchemaObject parent;
        
        //internal
        bool isProcessing; //Indicates whether this object is currently being processed

        /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject.LineNum"]/*' />
        /// <devdoc>
        ///    <para>[To be supplied.]</para>
        /// </devdoc>
        [XmlIgnore]
        public int LineNumber {
            get { return lineNum;}
            set { lineNum = value;}
        }

        /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject.LinePos"]/*' />
        /// <devdoc>
        ///    <para>[To be supplied.]</para>
        /// </devdoc>
        [XmlIgnore]
        public int LinePosition {
            get { return linePos;}
            set { linePos = value;}
        }

        /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject.SourceUri"]/*' />
        /// <devdoc>
        ///    <para>[To be supplied.]</para>
        /// </devdoc>
        [XmlIgnore]
        public string SourceUri {
            get { return sourceUri;}
            set { sourceUri = value;}
        }

        /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject.Parent"]/*' />
        [XmlIgnore]
        public XmlSchemaObject Parent {
            get { return parent;}
            set { parent = value;}
        }

        /// <include file='doc\XmlSchemaObject.uex' path='docs/doc[@for="XmlSchemaObject.Namespaces"]/*' />
        [XmlNamespaceDeclarations]
        public XmlSerializerNamespaces Namespaces {
            get {
                if (namespaces == null)
                    namespaces = new XmlSerializerNamespaces();
                return namespaces;
            }
            set { namespaces = value; }
        }

        internal virtual void OnAdd(XmlSchemaObjectCollection container, object item) {}
        internal virtual void OnRemove(XmlSchemaObjectCollection container, object item) {}
        internal virtual void OnClear(XmlSchemaObjectCollection container) {}

        [XmlIgnore]
        internal virtual string IdAttribute {
            get { Debug.Assert(false); return null; }
            set { Debug.Assert(false); }
        }
        
        internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes) {}
        internal virtual void AddAnnotation(XmlSchemaAnnotation annotation) {}

        [XmlIgnore]
        internal virtual string NameAttribute {
            get { Debug.Assert(false); return null; }
            set { Debug.Assert(false); }
        }
        
        [XmlIgnore]
        internal bool IsProcessing {
            get {
                return isProcessing;
            }
            set {
                isProcessing = value;
            }
        }

        internal virtual XmlSchemaObject Clone() {
            return (XmlSchemaObject)MemberwiseClone();
        }
    }
}

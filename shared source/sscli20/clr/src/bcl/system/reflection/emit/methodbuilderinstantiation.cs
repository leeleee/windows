// ==++==
// 
//   
//    Copyright (c) 2006 Microsoft Corporation.  All rights reserved.
//   
//    The use and distribution terms for this software are contained in the file
//    named license.txt, which can be found in the root of this distribution.
//    By using this software in any fashion, you are agreeing to be bound by the
//    terms of this license.
//   
//    You must not remove this notice, or any other, from this software.
//   
// 
// ==--==

using System;
using System.Reflection;
using System.Reflection.Emit;
using System.Collections;
using System.Globalization;

namespace System.Reflection.Emit
{
    internal sealed class MethodBuilderInstantiation : MethodInfo
    {
        #region Static Members
        internal static MethodInfo MakeGenericMethod(MethodInfo method, Type[] inst)
        {
            if (!method.IsGenericMethodDefinition)
                throw new InvalidOperationException();

            return new MethodBuilderInstantiation(method, inst);
        }

        #endregion

        #region Private Data Mebers
        internal MethodInfo m_method;
        private Type[] m_inst;
        #endregion

        #region Constructor
        internal MethodBuilderInstantiation(MethodInfo method, Type[] inst)
        {
            m_method = method;
            m_inst = inst;
        }
        #endregion
        
        internal override Type[] GetParameterTypes()
        {
            return m_method.GetParameterTypes();
        }

        #region MemberBase
        public override MemberTypes MemberType { get { return m_method.MemberType;  } }
        public override String Name { get { return m_method.Name; } }
        public override Type DeclaringType { get { return m_method.DeclaringType;  } }
        public override Type ReflectedType { get { return m_method.ReflectedType; } }
        public override Object[] GetCustomAttributes(bool inherit) { return m_method.GetCustomAttributes(inherit); } 
        public override Object[] GetCustomAttributes(Type attributeType, bool inherit) { return m_method.GetCustomAttributes(attributeType, inherit); }
        public override bool IsDefined(Type attributeType, bool inherit) { return m_method.IsDefined(attributeType, inherit); }
        internal override int MetadataTokenInternal 
        { 
            get 
            { 
                throw new NotSupportedException();
            } 
        }
        public override Module Module { get { return m_method.Module; } }
        public new Type GetType() { return base.GetType(); }
        #endregion

        #region MethodBase Members
        public override ParameterInfo[] GetParameters() { throw new NotSupportedException(); }        
        public override MethodImplAttributes GetMethodImplementationFlags() { return m_method.GetMethodImplementationFlags(); }
        public override RuntimeMethodHandle MethodHandle { get { throw new NotSupportedException(Environment.GetResourceString("NotSupported_DynamicModule")); } }
        public override MethodAttributes Attributes { get { return m_method.Attributes; } }
        public override Object Invoke(Object obj, BindingFlags invokeAttr, Binder binder, Object[] parameters, CultureInfo culture)
        {
            throw new NotSupportedException();
        }
        public override CallingConventions CallingConvention { get { return m_method.CallingConvention; } }
        public override Type[] GetGenericArguments() { return m_inst; }
        public override MethodInfo GetGenericMethodDefinition() { return m_method; }
        public override bool IsGenericMethodDefinition { get { return false; } }
        public override bool ContainsGenericParameters
        {
            get
            {
                for (int i = 0; i < m_inst.Length; i++)
                {
                    if (m_inst[i].ContainsGenericParameters)
                        return true;
                }

                if (DeclaringType != null && DeclaringType.ContainsGenericParameters)
                    return true;

                return false;
            }
        }

        public override MethodInfo MakeGenericMethod(params Type[] arguments)
        {
           throw new InvalidOperationException(Environment.GetResourceString("Arg_NotGenericMethodDefinition"));
        }

        public override bool IsGenericMethod { get { return true; } }
       
        #endregion

        #region Public Abstract\Virtual Members
        internal override Type GetReturnType() { return m_method.GetReturnType(); }
        public override ParameterInfo ReturnParameter { get { throw new NotSupportedException(); } }
        public override ICustomAttributeProvider ReturnTypeCustomAttributes { get { throw new NotSupportedException(); } }
        public override MethodInfo GetBaseDefinition() { throw new NotSupportedException(); }
        #endregion
    }
}






























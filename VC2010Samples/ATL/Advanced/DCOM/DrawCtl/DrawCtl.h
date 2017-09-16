

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for DrawCtl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DrawCtl_h__
#define __DrawCtl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDrawCtl_FWD_DEFINED__
#define __IDrawCtl_FWD_DEFINED__
typedef interface IDrawCtl IDrawCtl;

#endif 	/* __IDrawCtl_FWD_DEFINED__ */


#ifndef __CDrawCtl_FWD_DEFINED__
#define __CDrawCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDrawCtl CDrawCtl;
#else
typedef struct CDrawCtl CDrawCtl;
#endif /* __cplusplus */

#endif 	/* __CDrawCtl_FWD_DEFINED__ */


#ifndef __IDrawServ_FWD_DEFINED__
#define __IDrawServ_FWD_DEFINED__
typedef interface IDrawServ IDrawServ;

#endif 	/* __IDrawServ_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDrawCtl_INTERFACE_DEFINED__
#define __IDrawCtl_INTERFACE_DEFINED__

/* interface IDrawCtl */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDrawCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48DDCC1E-1FE0-11D0-B91B-000000000000")
    IDrawCtl : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR pMachineName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDrawCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDrawCtl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDrawCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDrawCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDrawCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDrawCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDrawCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDrawCtl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IDrawCtl * This,
            /* [in] */ BSTR pMachineName);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IDrawCtl * This);
        
        END_INTERFACE
    } IDrawCtlVtbl;

    interface IDrawCtl
    {
        CONST_VTBL struct IDrawCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDrawCtl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDrawCtl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDrawCtl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDrawCtl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDrawCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDrawCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDrawCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDrawCtl_Connect(This,pMachineName)	\
    ( (This)->lpVtbl -> Connect(This,pMachineName) ) 

#define IDrawCtl_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDrawCtl_INTERFACE_DEFINED__ */



#ifndef __DRAWCTLLib_LIBRARY_DEFINED__
#define __DRAWCTLLib_LIBRARY_DEFINED__

/* library DRAWCTLLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DRAWCTLLib;

EXTERN_C const CLSID CLSID_CDrawCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("48DDCC1D-1FE0-11D0-B91B-000000000000")
CDrawCtl;
#endif

#ifndef __IDrawServ_INTERFACE_DEFINED__
#define __IDrawServ_INTERFACE_DEFINED__

/* interface IDrawServ */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDrawServ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("330E9E75-DF48-11CF-8E2C-00A0C90DC94B")
    IDrawServ : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ long x1,
            /* [in] */ long y1,
            /* [in] */ long x2,
            /* [in] */ long y2,
            /* [in] */ unsigned long col) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDrawServVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDrawServ * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDrawServ * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDrawServ * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDrawServ * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDrawServ * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDrawServ * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDrawServ * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IDrawServ * This,
            /* [in] */ long x1,
            /* [in] */ long y1,
            /* [in] */ long x2,
            /* [in] */ long y2,
            /* [in] */ unsigned long col);
        
        END_INTERFACE
    } IDrawServVtbl;

    interface IDrawServ
    {
        CONST_VTBL struct IDrawServVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDrawServ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDrawServ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDrawServ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDrawServ_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDrawServ_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDrawServ_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDrawServ_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDrawServ_Draw(This,x1,y1,x2,y2,col)	\
    ( (This)->lpVtbl -> Draw(This,x1,y1,x2,y2,col) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDrawServ_INTERFACE_DEFINED__ */

#endif /* __DRAWCTLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



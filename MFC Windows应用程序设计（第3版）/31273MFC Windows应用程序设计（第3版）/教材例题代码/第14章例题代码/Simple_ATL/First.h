// First.h : Declaration of the CFirst

#ifndef __FIRST_H_
#define __FIRST_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFirst
class ATL_NO_VTABLE CFirst : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFirst, &CLSID_First>,
	public IDispatchImpl<IFirst, &IID_IFirst, &LIBID_SIMPLE_ATLLib>
{
public:
	CFirst()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FIRST)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFirst)
	COM_INTERFACE_ENTRY(IFirst)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IFirst
public:
	STDMETHOD(AddNumbers)(/*[in]*/ long Num1, /*[in]*/ long Num2, /*[out]*/ long *ReturnVal);
};

#endif //__FIRST_H_

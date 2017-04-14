// ControlCtl.cpp : Implementation of the CControlCtrl ActiveX Control class.

#include "stdafx.h"
#include "Control.h"
#include "ControlCtl.h"
#include "ControlPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CControlCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CControlCtrl, COleControl)
	//{{AFX_MSG_MAP(CControlCtrl)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_BN_CLICKED(IDC_BUTTON,OnButtonClicked)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CControlCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CControlCtrl)
	DISP_PROPERTY_EX(CControlCtrl, "InputString", GetInputString, SetInputString, VT_BSTR)
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CControlCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CControlCtrl, COleControl)
	//{{AFX_EVENT_MAP(CControlCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CControlCtrl, 1)
	PROPPAGEID(CControlPropPage::guid)
END_PROPPAGEIDS(CControlCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CControlCtrl, "CONTROL.ControlCtrl.1",
	0xdd03940c, 0xd761, 0x4ff5, 0x81, 0xa5, 0xd0, 0xbd, 0x64, 0xcd, 0xef, 0x20)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CControlCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DControl =
		{ 0x37ff5418, 0x7565, 0x46ae, { 0xa2, 0x4c, 0x5c, 0x51, 0x34, 0x6c, 0xb0, 0x14 } };
const IID BASED_CODE IID_DControlEvents =
		{ 0x5afbc2ca, 0xb05a, 0x4478, { 0xad, 0x1c, 0x12, 0x7c, 0x38, 0xcd, 0x8, 0xe4 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwControlOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CControlCtrl, IDS_CONTROL, _dwControlOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::CControlCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CControlCtrl

BOOL CControlCtrl::CControlCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_CONTROL,
			IDB_CONTROL,
			afxRegApartmentThreading,
			_dwControlOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::CControlCtrl - Constructor

CControlCtrl::CControlCtrl()
{
	InitializeIIDs(&IID_DControl, &IID_DControlEvents);

	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::~CControlCtrl - Destructor

CControlCtrl::~CControlCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::OnDraw - Drawing function

void CControlCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds,
				CBrush::FromHandle((HBRUSH)
	GetStockObject(WHITE_BRUSH)));
	pdc->TextOut(10,40,"请输入相关信息");
	pdc->TextOut(10,100,m_string);
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::DoPropExchange - Persistence support

void CControlCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::OnResetState - Reset control to default state

void CControlCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl::AboutBox - Display an "About" box to the user

void CControlCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_CONTROL);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CControlCtrl message handlers

int CControlCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	m_edit.Create(WS_CHILD|WS_BORDER|WS_VISIBLE|
				ES_AUTOHSCROLL,CRect(20,70,120,100),
				this,IDC_EDIT);
	m_button.Create("确认",WS_CHILD|WS_BORDER|
				WS_VISIBLE|BS_PUSHBUTTON,
				CRect(130,70,230,100),this,IDC_BUTTON);
	
	return 0;
}

BSTR CControlCtrl::GetInputString() 
{
	CString strResult;
	// TODO: Add your property handler here
	strResult=m_string;			//返回属性值
	return strResult.AllocSysString();
}

void CControlCtrl::SetInputString(LPCTSTR lpszNewValue) 
{
	// TODO: Add your property handler here
	m_string=lpszNewValue;           //设置属性值
	SetModifiedFlag();
}

void CControlCtrl::OnButtonClicked()
{
	char str[21];
	m_edit.GetWindowText(str,20);
	SetInputString(str);
	InvalidateRect(NULL);
}

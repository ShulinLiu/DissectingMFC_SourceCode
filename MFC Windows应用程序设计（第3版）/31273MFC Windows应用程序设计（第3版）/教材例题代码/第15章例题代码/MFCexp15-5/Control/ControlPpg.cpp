// ControlPpg.cpp : Implementation of the CControlPropPage property page class.

#include "stdafx.h"
#include "Control.h"
#include "ControlPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CControlPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CControlPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CControlPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CControlPropPage, "CONTROL.ControlPropPage.1",
	0x61fdd5f3, 0xaf35, 0x499b, 0xb6, 0x4f, 0xc, 0x3, 0x42, 0x8, 0xb2, 0xce)


/////////////////////////////////////////////////////////////////////////////
// CControlPropPage::CControlPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CControlPropPage

BOOL CControlPropPage::CControlPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_CONTROL_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CControlPropPage::CControlPropPage - Constructor

CControlPropPage::CControlPropPage() :
	COlePropertyPage(IDD, IDS_CONTROL_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CControlPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CControlPropPage::DoDataExchange - Moves data between page and properties

void CControlPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CControlPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CControlPropPage message handlers

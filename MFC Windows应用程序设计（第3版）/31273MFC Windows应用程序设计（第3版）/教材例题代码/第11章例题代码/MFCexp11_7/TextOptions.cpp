// TextOptions.cpp : implementation file
//

#include "stdafx.h"
#include "MFCexp11_7.h"
#include "TextOptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextOptions property page

IMPLEMENT_DYNCREATE(CTextOptions, CPropertyPage)

CTextOptions::CTextOptions() : CPropertyPage(CTextOptions::IDD)
{
	//{{AFX_DATA_INIT(CTextOptions)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CTextOptions::~CTextOptions()
{
}

void CTextOptions::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTextOptions)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTextOptions, CPropertyPage)
	//{{AFX_MSG_MAP(CTextOptions)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextOptions message handlers

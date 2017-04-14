// BitmapOptions.cpp : implementation file
//

#include "stdafx.h"
#include "MFCexp11_7.h"
#include "BitmapOptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBitmapOptions property page

IMPLEMENT_DYNCREATE(CBitmapOptions, CPropertyPage)

CBitmapOptions::CBitmapOptions() : CPropertyPage(CBitmapOptions::IDD)
{
	//{{AFX_DATA_INIT(CBitmapOptions)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CBitmapOptions::~CBitmapOptions()
{
}

void CBitmapOptions::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBitmapOptions)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBitmapOptions, CPropertyPage)
	//{{AFX_MSG_MAP(CBitmapOptions)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBitmapOptions message handlers

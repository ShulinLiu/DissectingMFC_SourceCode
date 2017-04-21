// Control2.cpp : implementation file
//

#include "stdafx.h"
#include "datastructvirsual.h"
#include "Control2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CControl2

IMPLEMENT_DYNCREATE(CControl2, CFormView)

CControl2::CControl2()
	: CFormView(CControl2::IDD)
{
	//{{AFX_DATA_INIT(CControl2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CControl2::~CControl2()
{
}

void CControl2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CControl2)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CControl2, CFormView)
	//{{AFX_MSG_MAP(CControl2)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CControl2 diagnostics

#ifdef _DEBUG
void CControl2::AssertValid() const
{
	CFormView::AssertValid();
}

void CControl2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CControl2 message handlers

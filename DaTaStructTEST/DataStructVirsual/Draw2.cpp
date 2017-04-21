// Draw2.cpp : implementation file
//

#include "stdafx.h"
#include "datastructvirsual.h"
#include "Draw2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw2

IMPLEMENT_DYNCREATE(CDraw2, CFormView)

CDraw2::CDraw2()
	: CFormView(CDraw2::IDD)
{
	//{{AFX_DATA_INIT(CDraw2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CDraw2::~CDraw2()
{
}

void CDraw2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDraw2)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDraw2, CFormView)
	//{{AFX_MSG_MAP(CDraw2)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw2 diagnostics

#ifdef _DEBUG
void CDraw2::AssertValid() const
{
	CFormView::AssertValid();
}

void CDraw2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDraw2 message handlers

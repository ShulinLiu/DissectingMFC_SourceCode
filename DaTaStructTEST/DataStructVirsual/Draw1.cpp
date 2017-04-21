// Draw1.cpp : implementation file
//

#include "stdafx.h"
#include "DataStructVirsual.h"
#include "Draw1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw1

IMPLEMENT_DYNCREATE(CDraw1, CFormView)

CDraw1::CDraw1()
	: CFormView(CDraw1::IDD)
{
	//{{AFX_DATA_INIT(CDraw1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CDraw1::~CDraw1()
{
}

void CDraw1::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDraw1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDraw1, CFormView)
	//{{AFX_MSG_MAP(CDraw1)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw1 diagnostics

#ifdef _DEBUG
void CDraw1::AssertValid() const
{
	CFormView::AssertValid();
}

void CDraw1::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDraw1 message handlers

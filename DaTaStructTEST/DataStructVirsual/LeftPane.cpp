// LeftPane.cpp : implementation file
//

#include "stdafx.h"
#include "DataStructVirsual.h"
#include "LeftPane.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLeftPane

IMPLEMENT_DYNCREATE(CLeftPane, CFormView)

CLeftPane::CLeftPane()
	: CFormView(CLeftPane::IDD)
{
	//{{AFX_DATA_INIT(CLeftPane)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CLeftPane::~CLeftPane()
{
}

void CLeftPane::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLeftPane)
	DDX_Control(pDX, IDC_LEFTPANE_TREE, m_LeftTree);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLeftPane, CFormView)
	//{{AFX_MSG_MAP(CLeftPane)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLeftPane diagnostics

#ifdef _DEBUG
void CLeftPane::AssertValid() const
{
	CFormView::AssertValid();
}

void CLeftPane::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLeftPane message handlers

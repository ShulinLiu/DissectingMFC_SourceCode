// MFCexp13_3testView.cpp : implementation of the CMFCexp13_3testView class
//

#include "stdafx.h"
#include "MFCexp13_3test.h"

#include "MFCexp13_3testDoc.h"
#include "MFCexp13_3testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testView

IMPLEMENT_DYNCREATE(CMFCexp13_3testView, CView)

BEGIN_MESSAGE_MAP(CMFCexp13_3testView, CView)
	//{{AFX_MSG_MAP(CMFCexp13_3testView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testView construction/destruction

CMFCexp13_3testView::CMFCexp13_3testView()
{
	// TODO: add construction code here

}

CMFCexp13_3testView::~CMFCexp13_3testView()
{
}

BOOL CMFCexp13_3testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testView drawing

void CMFCexp13_3testView::OnDraw(CDC* pDC)
{
	CMFCexp13_3testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testView diagnostics

#ifdef _DEBUG
void CMFCexp13_3testView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp13_3testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp13_3testDoc* CMFCexp13_3testView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp13_3testDoc)));
	return (CMFCexp13_3testDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testView message handlers

void CMFCexp13_3testView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	ShowMsg();	
	CView::OnLButtonDown(nFlags, point);
}

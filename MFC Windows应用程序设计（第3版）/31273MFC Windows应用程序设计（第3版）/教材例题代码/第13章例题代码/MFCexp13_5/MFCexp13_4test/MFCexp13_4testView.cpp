// MFCexp13_4testView.cpp : implementation of the CMFCexp13_4testView class
//

#include "stdafx.h"
#include "MFCexp13_4test.h"

#include "MFCexp13_4testDoc.h"
#include "MFCexp13_4testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include"MyDllDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testView

IMPLEMENT_DYNCREATE(CMFCexp13_4testView, CView)

BEGIN_MESSAGE_MAP(CMFCexp13_4testView, CView)
	//{{AFX_MSG_MAP(CMFCexp13_4testView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testView construction/destruction

CMFCexp13_4testView::CMFCexp13_4testView()
{
	// TODO: add construction code here

}

CMFCexp13_4testView::~CMFCexp13_4testView()
{
}

BOOL CMFCexp13_4testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testView drawing

void CMFCexp13_4testView::OnDraw(CDC* pDC)
{
	CMFCexp13_4testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testView diagnostics

#ifdef _DEBUG
void CMFCexp13_4testView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp13_4testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp13_4testDoc* CMFCexp13_4testView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp13_4testDoc)));
	return (CMFCexp13_4testDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testView message handlers

void CMFCexp13_4testView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMyDllDlg myDllDlg;
	myDllDlg.DoModal();
	CView::OnLButtonDown(nFlags, point);
}

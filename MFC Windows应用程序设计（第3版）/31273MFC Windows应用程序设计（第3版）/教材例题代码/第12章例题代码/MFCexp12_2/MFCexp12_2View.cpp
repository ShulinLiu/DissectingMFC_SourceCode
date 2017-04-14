// MFCexp12_2View.cpp : implementation of the CMFCexp12_2View class
//

#include "stdafx.h"
#include "MFCexp12_2.h"

#include "MFCexp12_2Doc.h"
#include "MFCexp12_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include"MyThread.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_2View

IMPLEMENT_DYNCREATE(CMFCexp12_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_2View construction/destruction

CMFCexp12_2View::CMFCexp12_2View()
{
	// TODO: add construction code here

}

CMFCexp12_2View::~CMFCexp12_2View()
{
}

BOOL CMFCexp12_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_2View drawing

void CMFCexp12_2View::OnDraw(CDC* pDC)
{
	CMFCexp12_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_2View diagnostics

#ifdef _DEBUG
void CMFCexp12_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_2Doc* CMFCexp12_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_2Doc)));
	return (CMFCexp12_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_2View message handlers

void CMFCexp12_2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread(RUNTIME_CLASS(CMyThread));	
	CView::OnLButtonDown(nFlags, point);
}

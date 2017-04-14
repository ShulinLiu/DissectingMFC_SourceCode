// MFCexp7_2View.cpp : implementation of the CMFCexp7_2View class
//

#include "stdafx.h"
#include "MFCexp7_2.h"

#include "MFCexp7_2Doc.h"
#include "MFCexp7_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_2View

IMPLEMENT_DYNCREATE(CMFCexp7_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_2View)
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_2View construction/destruction

CMFCexp7_2View::CMFCexp7_2View()
{
	// TODO: add construction code here

}

CMFCexp7_2View::~CMFCexp7_2View()
{
}

BOOL CMFCexp7_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_2View drawing

void CMFCexp7_2View::OnDraw(CDC* pDC)
{
	CMFCexp7_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CPoint point(30,30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_Point);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_2View diagnostics

#ifdef _DEBUG
void CMFCexp7_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_2Doc* CMFCexp7_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_2Doc)));
	return (CMFCexp7_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_2View message handlers

void CMFCexp7_2View::OnMouseMove(UINT nFlags, CPoint point) 
{
	CMFCexp7_2Doc*pDoc=GetDocument();
	pDoc->m_Point=point;
	InvalidateRect(NULL,FALSE);	
	CView::OnMouseMove(nFlags, point);
}

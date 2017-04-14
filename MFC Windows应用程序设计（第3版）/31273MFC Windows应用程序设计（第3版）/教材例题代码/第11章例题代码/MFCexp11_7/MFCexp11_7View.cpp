// MFCexp11_7View.cpp : implementation of the CMFCexp11_7View class
//

#include "stdafx.h"
#include "MFCexp11_7.h"

#include "MFCexp11_7Doc.h"
#include "MFCexp11_7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7View

IMPLEMENT_DYNCREATE(CMFCexp11_7View, CView)

BEGIN_MESSAGE_MAP(CMFCexp11_7View, CView)
	//{{AFX_MSG_MAP(CMFCexp11_7View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7View construction/destruction

CMFCexp11_7View::CMFCexp11_7View()
{
	// TODO: add construction code here

}

CMFCexp11_7View::~CMFCexp11_7View()
{
}

BOOL CMFCexp11_7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7View drawing

void CMFCexp11_7View::OnDraw(CDC* pDC)
{
	CMFCexp11_7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7View diagnostics

#ifdef _DEBUG
void CMFCexp11_7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp11_7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp11_7Doc* CMFCexp11_7View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp11_7Doc)));
	return (CMFCexp11_7Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7View message handlers

void CMFCexp11_7View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CProperty pPrt("My Property Sheet");
	int result=pPrt.DoModal();
	CView::OnLButtonDown(nFlags, point);
}

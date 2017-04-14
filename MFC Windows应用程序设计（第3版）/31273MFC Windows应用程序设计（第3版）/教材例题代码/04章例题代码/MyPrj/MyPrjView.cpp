// MyPrjView.cpp : implementation of the CMyPrjView class
//

#include "stdafx.h"
#include "MyPrj.h"

#include "MyPrjDoc.h"
#include "MyPrjView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyPrjView

IMPLEMENT_DYNCREATE(CMyPrjView, CView)

BEGIN_MESSAGE_MAP(CMyPrjView, CView)
	//{{AFX_MSG_MAP(CMyPrjView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyPrjView construction/destruction

CMyPrjView::CMyPrjView()
{
	// TODO: add construction code here

}

CMyPrjView::~CMyPrjView()
{
}

BOOL CMyPrjView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyPrjView drawing

void CMyPrjView::OnDraw(CDC* pDC)
{
	CMyPrjDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(10,10,pDoc->m_pText);
}

/////////////////////////////////////////////////////////////////////////////
// CMyPrjView diagnostics

#ifdef _DEBUG
void CMyPrjView::AssertValid() const
{
	CView::AssertValid();
}

void CMyPrjView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyPrjDoc* CMyPrjView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyPrjDoc)));
	return (CMyPrjDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyPrjView message handlers

void CMyPrjView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMyPrjDoc*pDoc=GetDocument();
	pDoc->m_pText="HeLLo C++World!";
	InvalidateRect(NULL);
	CView::OnLButtonDown(nFlags, point);
}

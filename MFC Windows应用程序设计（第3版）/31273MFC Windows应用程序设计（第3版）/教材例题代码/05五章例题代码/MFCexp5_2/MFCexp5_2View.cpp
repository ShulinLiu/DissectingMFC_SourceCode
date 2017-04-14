// MFCexp5_2View.cpp : implementation of the CMFCexp5_2View class
//

#include "stdafx.h"
#include "MFCexp5_2.h"

#include "MFCexp5_2Doc.h"
#include "MFCexp5_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2View

IMPLEMENT_DYNCREATE(CMFCexp5_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp5_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp5_2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2View construction/destruction

CMFCexp5_2View::CMFCexp5_2View()
{
	// TODO: add construction code here
	m_Rectag.SetSize(256,256);
}

CMFCexp5_2View::~CMFCexp5_2View()
{
}

BOOL CMFCexp5_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2View drawing

void CMFCexp5_2View::OnDraw(CDC* pDC)
{
	CMFCexp5_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	for(int i=0;i<m_Rectag.GetSize();i++)
		pDC->Rectangle(m_Rectag[i]);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2View diagnostics

#ifdef _DEBUG
void CMFCexp5_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp5_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp5_2Doc* CMFCexp5_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp5_2Doc)));
	return (CMFCexp5_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2View message handlers

void CMFCexp5_2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	int r=rand()%50+5;
	CRect Ret(point.x-r,point.y-r,point.x+r,point.y+r);
	m_Rectag.Add(Ret);
	InvalidateRect(Ret,FALSE);//´¥·¢OnDraw()º¯Êý
	
	CView::OnLButtonDown(nFlags, point);
}

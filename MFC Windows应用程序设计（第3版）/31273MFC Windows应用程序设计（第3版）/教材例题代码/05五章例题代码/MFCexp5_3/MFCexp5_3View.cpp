// MFCexp5_3View.cpp : implementation of the CMFCexp5_3View class
//

#include "stdafx.h"
#include "MFCexp5_3.h"

#include "MFCexp5_3Doc.h"
#include "MFCexp5_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_3View

IMPLEMENT_DYNCREATE(CMFCexp5_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp5_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp5_3View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_3View construction/destruction

CMFCexp5_3View::CMFCexp5_3View()
{
	// TODO: add construction code here

}

CMFCexp5_3View::~CMFCexp5_3View()
{
}

BOOL CMFCexp5_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_3View drawing

void CMFCexp5_3View::OnDraw(CDC* pDC)
{
	CMFCexp5_3Doc* pDoc = GetDocument();//获取文档指针
	ASSERT_VALID(pDoc);
	for(int i=0;i<pDoc->m_Rectag.GetSize();i++)
		pDC->Rectangle(pDoc->m_Rectag[i]);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_3View diagnostics

#ifdef _DEBUG
void CMFCexp5_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp5_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp5_3Doc* CMFCexp5_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp5_3Doc)));
	return (CMFCexp5_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_3View message handlers

void CMFCexp5_3View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CMFCexp5_3Doc*pDoc=GetDocument();//获取文档指针
	int r=rand()%50+5;
	CRect Ret(point.x-r,point.y-r,point.x+r,point.y+r);
	pDoc->m_Rectag.Add(Ret);//向文档中数组添加元素
	InvalidateRect(Ret,FALSE);//触发OnDraw()函数		
	CView::OnLButtonDown(nFlags, point);
}

// MFCexp6_2View.cpp : implementation of the CMFCexp6_2View class
//

#include "stdafx.h"
#include "MFCexp6_2.h"

#include "MFCexp6_2Doc.h"
#include "MFCexp6_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2View

IMPLEMENT_DYNCREATE(CMFCexp6_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp6_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp6_2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2View construction/destruction

CMFCexp6_2View::CMFCexp6_2View()
{
	// TODO: add construction code here

}

CMFCexp6_2View::~CMFCexp6_2View()
{
}

BOOL CMFCexp6_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2View drawing

void CMFCexp6_2View::OnDraw(CDC* pDC)
{
	CMFCexp6_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	for(int i=0;i<pDoc->m_Rectag.GetSize();i++)
		pDC->Rectangle(pDoc->m_Rectag[i]);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2View diagnostics

#ifdef _DEBUG
void CMFCexp6_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp6_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp6_2Doc* CMFCexp6_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp6_2Doc)));
	return (CMFCexp6_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2View message handlers

void CMFCexp6_2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CMFCexp6_2Doc*pDoc=GetDocument();//获取文档指针
	int r=rand()%50+5;
	CRect Ret(point.x-r,point.y-r,point.x+r,point.y+r);
	pDoc->m_Rectag.Add(Ret);//向文档中数组添加元素
	pDoc->UpdateAllViews(NULL);//使用了更新所有视图的函数
	CView::OnLButtonDown(nFlags, point);
}

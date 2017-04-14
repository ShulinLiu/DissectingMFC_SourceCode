// MFCexp6_3View.cpp : implementation of the CMFCexp6_3View class
//

#include "stdafx.h"
#include "MFCexp6_3.h"

#include "MFCexp6_3Doc.h"
#include "MFCexp6_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3View

IMPLEMENT_DYNCREATE(CMFCexp6_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp6_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp6_3View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3View construction/destruction

CMFCexp6_3View::CMFCexp6_3View()
{
	// TODO: add construction code here
	m_ViewDrRect=new CDrawRect;
}

CMFCexp6_3View::~CMFCexp6_3View()
{
}

BOOL CMFCexp6_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3View drawing

void CMFCexp6_3View::OnDraw(CDC* pDC)
{
	CMFCexp6_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	for(int i=0;i<pDoc->m_Rectag.GetSize();i++)
		pDC->Ellipse(pDoc->m_Rectag[i]);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3View diagnostics

#ifdef _DEBUG
void CMFCexp6_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp6_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp6_3Doc* CMFCexp6_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp6_3Doc)));
	return (CMFCexp6_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3View message handlers

void CMFCexp6_3View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CMFCexp6_3Doc*pDoc=GetDocument();//获取文档指针
	int r=rand()%50+5;
	CRect Ret(point.x-r,point.y-r,point.x+r,point.y+r);
	pDoc->m_Rectag.Add(Ret);//向文档中数组添加元素
	m_ViewDrRect->m_DrawRect=Ret;//将矩形参数赋予重绘区类成员
	InvalidateRect(Ret,FALSE);//触发OnDraw()函数
//传递无效区类对象
	pDoc->UpdateAllViews(this,0L,m_ViewDrRect);	
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp6_3View::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	// TODO: Add your specialized code here and/or call the base class
	CDrawRect*pDrawRect=(CDrawRect*)pHint;
	InvalidateRect(pDrawRect->m_DrawRect,FALSE); 	
}

void CMFCexp6_3View::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	
	CView::CalcWindowRect(lpClientRect, nAdjustType);
}

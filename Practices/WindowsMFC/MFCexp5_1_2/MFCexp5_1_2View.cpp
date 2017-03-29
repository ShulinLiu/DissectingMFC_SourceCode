// MFCexp5_1_2View.cpp : implementation of the CMFCexp5_1_2View class
//

#include "stdafx.h"
#include "MFCexp5_1_2.h"

#include "MFCexp5_1_2Doc.h"
#include "MFCexp5_1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View

IMPLEMENT_DYNCREATE(CMFCexp5_1_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp5_1_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp5_1_2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View construction/destruction

CMFCexp5_1_2View::CMFCexp5_1_2View()
{
	// TODO: add construction code here
	m_ViewDrRect=new CDrawRect;
}

CMFCexp5_1_2View::~CMFCexp5_1_2View()
{
}

BOOL CMFCexp5_1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View drawing

void CMFCexp5_1_2View::OnDraw(CDC* pDC)
{
	CMFCexp5_1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	for(int i=0;i<pDoc->m_Rectag.GetSize();i++)
		pDC->Ellipse(pDoc->m_Rectag[i]);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View printing

BOOL CMFCexp5_1_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp5_1_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp5_1_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View diagnostics

#ifdef _DEBUG
void CMFCexp5_1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp5_1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp5_1_2Doc* CMFCexp5_1_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp5_1_2Doc)));
	return (CMFCexp5_1_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_2View message handlers

void CMFCexp5_1_2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMFCexp5_1_2Doc*pDoc=GetDocument();//获取文档指针
	int r=rand()%50+5;
	CRect Ret(point.x-r,point.y-r,point.x+r,point.y+r);
	pDoc->m_Rectag.Add(Ret);//向文档中数组添加元素
	m_ViewDrRect->m_DrawRect=Ret;//将矩形参数赋予重绘区类成员
	InvalidateRect(Ret,FALSE);//触发OnDraw()函数
//传递无效区类对象
	pDoc->UpdateAllViews(this,0L,m_ViewDrRect);	

	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp5_1_2View::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	// TODO: Add your specialized code here and/or call the base class
	CDrawRect*pDrawRect=(CDrawRect*)pHint;
	InvalidateRect(pDrawRect->m_DrawRect,FALSE); 	
}


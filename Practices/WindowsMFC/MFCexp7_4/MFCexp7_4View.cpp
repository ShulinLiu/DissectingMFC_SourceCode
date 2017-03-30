// MFCexp7_4View.cpp : implementation of the CMFCexp7_4View class
//

#include "stdafx.h"
#include "MFCexp7_4.h"

#include "MFCexp7_4Doc.h"
#include "MFCexp7_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View

IMPLEMENT_DYNCREATE(CMFCexp7_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_4View)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View construction/destruction

CMFCexp7_4View::CMFCexp7_4View()
{
	// TODO: add construction code here

}

CMFCexp7_4View::~CMFCexp7_4View()
{
}

BOOL CMFCexp7_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View drawing

void CMFCexp7_4View::OnDraw(CDC* pDC)
{
	CMFCexp7_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View printing

BOOL CMFCexp7_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp7_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp7_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View diagnostics

#ifdef _DEBUG
void CMFCexp7_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_4Doc* CMFCexp7_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_4Doc)));
	return (CMFCexp7_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4View message handlers

void CMFCexp7_4View::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	char str[50];
	CClientDC dc(this);
	dc.TextOut(20, 20, "WM_MOUSEMOVE");
	wsprintf(str, "X: %d    Y: %d   ", point.x, point.y);
	dc.TextOut(200, 20, str);	
	CView::OnMouseMove(nFlags, point);
}

void CMFCexp7_4View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetCapture();	//捕获鼠标消息	
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp7_4View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	ReleaseCapture( );	//释放鼠标捕获
	CView::OnLButtonUp(nFlags, point);
}

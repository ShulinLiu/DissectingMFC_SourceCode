// MFCexp9_6View.cpp : implementation of the CMFCexp9_6View class
//

#include "stdafx.h"
#include "MFCexp9_6.h"

#include "MFCexp9_6Doc.h"
#include "MFCexp9_6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View

IMPLEMENT_DYNCREATE(CMFCexp9_6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_6View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_6View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View construction/destruction

CMFCexp9_6View::CMFCexp9_6View()
{
	// TODO: add construction code here

}

CMFCexp9_6View::~CMFCexp9_6View()
{
}

BOOL CMFCexp9_6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View drawing

void CMFCexp9_6View::OnDraw(CDC* pDC)
{
	CMFCexp9_6Doc* pDoc = GetDocument();
	pDoc->DrawLetter(pDC);
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View printing

BOOL CMFCexp9_6View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_6View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_6View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View diagnostics

#ifdef _DEBUG
void CMFCexp9_6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_6Doc* CMFCexp9_6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_6Doc)));
	return (CMFCexp9_6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6View message handlers

void CMFCexp9_6View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//m_X=point.x;m_Y=point.y;
	CMFCexp9_6Doc*pDoc=GetDocument();
	pDoc->NewLetter(point.x,point.y);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp9_6View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

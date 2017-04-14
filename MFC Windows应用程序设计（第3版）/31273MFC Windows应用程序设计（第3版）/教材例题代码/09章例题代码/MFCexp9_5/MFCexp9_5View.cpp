// MFCexp9_5View.cpp : implementation of the CMFCexp9_5View class
//

#include "stdafx.h"
#include "MFCexp9_5.h"

#include "MFCexp9_5Doc.h"
#include "MFCexp9_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View

IMPLEMENT_DYNCREATE(CMFCexp9_5View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_5View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_5View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View construction/destruction

CMFCexp9_5View::CMFCexp9_5View()
{
	// TODO: add construction code here

}

CMFCexp9_5View::~CMFCexp9_5View()
{
}

BOOL CMFCexp9_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View drawing

void CMFCexp9_5View::OnDraw(CDC* pDC)
{
	CMFCexp9_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(30,6,pDoc->m_lLetter);
	pDC->TextOut(30,26,pDoc->m_Letters.GetLetter( ));

}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View printing

BOOL CMFCexp9_5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View diagnostics

#ifdef _DEBUG
void CMFCexp9_5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_5Doc* CMFCexp9_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_5Doc)));
	return (CMFCexp9_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5View message handlers

void CMFCexp9_5View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMFCexp9_5Doc*pDoc=GetDocument( );
	pDoc->m_lLetter='M'; 
	Invalidate( );
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp9_5View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CMFCexp9_5View::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMFCexp9_5Doc*pDoc=GetDocument( );
	pDoc->m_Letters.SetLetter('m'); 
	Invalidate( );	
	CView::OnRButtonDown(nFlags, point);
}




































// MFCexp8_1View.cpp : implementation of the CMFCexp8_1View class
//

#include "stdafx.h"
#include "MFCexp8_1.h"

#include "MFCexp8_1Doc.h"
#include "MFCexp8_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View

IMPLEMENT_DYNCREATE(CMFCexp8_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp8_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp8_1View)
	ON_COMMAND(ID_FILE_PRT, OnFilePrt)
	ON_COMMAND(ID_RE, OnRe)
	ON_COMMAND(ID_ZOOM, OnZoom)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View construction/destruction

CMFCexp8_1View::CMFCexp8_1View()
{
	// TODO: add construction code here

}

CMFCexp8_1View::~CMFCexp8_1View()
{
}

BOOL CMFCexp8_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View drawing

void CMFCexp8_1View::OnDraw(CDC* pDC)
{
	CMFCexp8_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(30,30,pDoc->m_str);
	pDC->Ellipse(pDoc->m_crlRect);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View printing

BOOL CMFCexp8_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp8_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp8_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View diagnostics

#ifdef _DEBUG
void CMFCexp8_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp8_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp8_1Doc* CMFCexp8_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp8_1Doc)));
	return (CMFCexp8_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_1View message handlers

void CMFCexp8_1View::OnFilePrt() 
{
	// TODO: Add your command handler code here
	CMFCexp8_1Doc*pDoc=GetDocument( );
	pDoc->m_str="添加了一个选项。";
	InvalidateRect(NULL,TRUE);

}

void CMFCexp8_1View::OnRe() 
{
	// TODO: Add your command handler code here
	CMFCexp8_1Doc*pDoc=GetDocument( );
	pDoc->m_crlRect.left=30;pDoc->m_crlRect.top=30;
	pDoc->m_crlRect.right=130;pDoc->m_crlRect.bottom=130;
	InvalidateRect(NULL,TRUE);	
}

void CMFCexp8_1View::OnZoom() 
{
	// TODO: Add your command handler code here
	CRect rect(0,0,100,100);
	CMFCexp8_1Doc*pDoc=GetDocument( );
	pDoc->m_crlRect+=rect;
	InvalidateRect(NULL,TRUE);
}

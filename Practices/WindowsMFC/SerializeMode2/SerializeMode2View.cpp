// SerializeMode2View.cpp : implementation of the CSerializeMode2View class
//

#include "stdafx.h"
#include "SerializeMode2.h"

#include "SerializeMode2Doc.h"
#include "SerializeMode2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View

IMPLEMENT_DYNCREATE(CSerializeMode2View, CView)

BEGIN_MESSAGE_MAP(CSerializeMode2View, CView)
	//{{AFX_MSG_MAP(CSerializeMode2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View construction/destruction

CSerializeMode2View::CSerializeMode2View()
{
	// TODO: add construction code here

}

CSerializeMode2View::~CSerializeMode2View()
{
}

BOOL CSerializeMode2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View drawing

void CSerializeMode2View::OnDraw(CDC* pDC)
{
	CSerializeMode2Doc* pDoc = GetDocument();
	pDoc->DrawLetter(pDC);
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View printing

BOOL CSerializeMode2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSerializeMode2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSerializeMode2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View diagnostics

#ifdef _DEBUG
void CSerializeMode2View::AssertValid() const
{
	CView::AssertValid();
}

void CSerializeMode2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSerializeMode2Doc* CSerializeMode2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSerializeMode2Doc)));
	return (CSerializeMode2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2View message handlers

void CSerializeMode2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	
	CSerializeMode2Doc* pDoc = GetDocument();
	pDoc->NewLetter(point.x,point.y);
	Invalidate();
	
	CView::OnLButtonDown(nFlags, point);
}

// xtView.cpp : implementation of the CXtView class
//

#include "stdafx.h"
#include "xt.h"

#include "xtDoc.h"
#include "xtView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXtView

IMPLEMENT_DYNCREATE(CXtView, CView)

BEGIN_MESSAGE_MAP(CXtView, CView)
	//{{AFX_MSG_MAP(CXtView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXtView construction/destruction

CXtView::CXtView()
{
	// TODO: add construction code here

}

CXtView::~CXtView()
{
}

BOOL CXtView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CXtView drawing

void CXtView::OnDraw(CDC* pDC)
{
	CXtDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CXtView printing

BOOL CXtView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CXtView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CXtView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CXtView diagnostics

#ifdef _DEBUG
void CXtView::AssertValid() const
{
	CView::AssertValid();
}

void CXtView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CXtDoc* CXtView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CXtDoc)));
	return (CXtDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CXtView message handlers

void CXtView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CFileFind finder; 
	BOOL bWorking = finder.FindFile("*.*"); 
	while (bWorking) 
	{ 
		bWorking = finder.FindNextFile(); 
		AfxMessageBox((LPCTSTR) finder.GetFileName());
	} 

	CView::OnLButtonDown(nFlags, point);
}

void CXtView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

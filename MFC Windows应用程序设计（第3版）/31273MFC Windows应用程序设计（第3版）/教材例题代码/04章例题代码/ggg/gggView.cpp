// gggView.cpp : implementation of the CGggView class
//

#include "stdafx.h"
#include "ggg.h"

#include "gggDoc.h"
#include "gggView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGggView

IMPLEMENT_DYNCREATE(CGggView, CView)

BEGIN_MESSAGE_MAP(CGggView, CView)
	//{{AFX_MSG_MAP(CGggView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGggView construction/destruction

CGggView::CGggView()
{
	// TODO: add construction code here

}

CGggView::~CGggView()
{
}

BOOL CGggView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGggView drawing

void CGggView::OnDraw(CDC* pDC)
{
	CGggDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CGggView printing

BOOL CGggView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGggView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGggView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGggView diagnostics

#ifdef _DEBUG
void CGggView::AssertValid() const
{
	CView::AssertValid();
}

void CGggView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGggDoc* CGggView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGggDoc)));
	return (CGggDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGggView message handlers

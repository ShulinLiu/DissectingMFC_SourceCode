// MFCexp7_3View.cpp : implementation of the CMFCexp7_3View class
//

#include "stdafx.h"
#include "MFCexp7_3.h"

#include "MFCexp7_3Doc.h"
#include "MFCexp7_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View

IMPLEMENT_DYNCREATE(CMFCexp7_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_3View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View construction/destruction

CMFCexp7_3View::CMFCexp7_3View()
{
	// TODO: add construction code here

}

CMFCexp7_3View::~CMFCexp7_3View()
{
}

BOOL CMFCexp7_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View drawing

void CMFCexp7_3View::OnDraw(CDC* pDC)
{
	CMFCexp7_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View printing

BOOL CMFCexp7_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp7_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp7_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View diagnostics

#ifdef _DEBUG
void CMFCexp7_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_3Doc* CMFCexp7_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_3Doc)));
	return (CMFCexp7_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3View message handlers

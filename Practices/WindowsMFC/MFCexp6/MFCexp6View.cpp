// MFCexp6View.cpp : implementation of the CMFCexp6View class
//

#include "stdafx.h"
#include "MFCexp6.h"

#include "MFCexp6Doc.h"
#include "MFCexp6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View

IMPLEMENT_DYNCREATE(CMFCexp6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp6View, CView)
	//{{AFX_MSG_MAP(CMFCexp6View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View construction/destruction

CMFCexp6View::CMFCexp6View()
{
	// TODO: add construction code here

}

CMFCexp6View::~CMFCexp6View()
{
}

BOOL CMFCexp6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View drawing

void CMFCexp6View::OnDraw(CDC* pDC)
{
	CMFCexp6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View printing

BOOL CMFCexp6View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp6View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp6View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View diagnostics

#ifdef _DEBUG
void CMFCexp6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp6Doc* CMFCexp6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp6Doc)));
	return (CMFCexp6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6View message handlers

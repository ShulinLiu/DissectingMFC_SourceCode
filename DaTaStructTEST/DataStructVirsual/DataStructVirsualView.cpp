// DataStructVirsualView.cpp : implementation of the CDataStructVirsualView class
//

#include "stdafx.h"
#include "DataStructVirsual.h"

#include "DataStructVirsualDoc.h"
#include "DataStructVirsualView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView

IMPLEMENT_DYNCREATE(CDataStructVirsualView, CView)

BEGIN_MESSAGE_MAP(CDataStructVirsualView, CView)
	//{{AFX_MSG_MAP(CDataStructVirsualView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView construction/destruction

CDataStructVirsualView::CDataStructVirsualView()
{
	// TODO: add construction code here

}

CDataStructVirsualView::~CDataStructVirsualView()
{
}

BOOL CDataStructVirsualView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView drawing

void CDataStructVirsualView::OnDraw(CDC* pDC)
{
	CDataStructVirsualDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView printing

BOOL CDataStructVirsualView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDataStructVirsualView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDataStructVirsualView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView diagnostics

#ifdef _DEBUG
void CDataStructVirsualView::AssertValid() const
{
	CView::AssertValid();
}

void CDataStructVirsualView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDataStructVirsualDoc* CDataStructVirsualView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDataStructVirsualDoc)));
	return (CDataStructVirsualDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualView message handlers

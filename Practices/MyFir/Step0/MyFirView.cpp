// MyFirView.cpp : implementation of the CMyFirView class
//

#include "stdafx.h"
#include "MyFir.h"

#include "MyFirDoc.h"
#include "MyFirView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyFirView

IMPLEMENT_DYNCREATE(CMyFirView, CView)

BEGIN_MESSAGE_MAP(CMyFirView, CView)
	//{{AFX_MSG_MAP(CMyFirView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyFirView construction/destruction

CMyFirView::CMyFirView()
{
	// TODO: add construction code here

}

CMyFirView::~CMyFirView()
{
}

BOOL CMyFirView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyFirView drawing

void CMyFirView::OnDraw(CDC* pDC)
{
	CMyFirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMyFirView printing

BOOL CMyFirView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyFirView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyFirView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyFirView diagnostics

#ifdef _DEBUG
void CMyFirView::AssertValid() const
{
	CView::AssertValid();
}

void CMyFirView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyFirDoc* CMyFirView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyFirDoc)));
	return (CMyFirDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyFirView message handlers

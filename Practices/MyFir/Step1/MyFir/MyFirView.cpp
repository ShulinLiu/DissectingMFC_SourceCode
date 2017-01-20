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

IMPLEMENT_DYNCREATE(CMyFirView, CEditView)

BEGIN_MESSAGE_MAP(CMyFirView, CEditView)
	//{{AFX_MSG_MAP(CMyFirView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
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

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
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
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CMyFirView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CMyFirView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CMyFirView diagnostics

#ifdef _DEBUG
void CMyFirView::AssertValid() const
{
	CEditView::AssertValid();
}

void CMyFirView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CMyFirDoc* CMyFirView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyFirDoc)));
	return (CMyFirDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyFirView message handlers

// MyVC1View.cpp : implementation of the CMyVC1View class
//

#include "stdafx.h"
#include "MyVC1.h"

#include "MyVC1Doc.h"
#include "MyVC1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View

IMPLEMENT_DYNCREATE(CMyVC1View, CView)

BEGIN_MESSAGE_MAP(CMyVC1View, CView)
	//{{AFX_MSG_MAP(CMyVC1View)
	ON_COMMAND(ID_WELCOME, OnWelcome)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View construction/destruction

CMyVC1View::CMyVC1View()
{
	// TODO: add construction code here

}

CMyVC1View::~CMyVC1View()
{
}

BOOL CMyVC1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View drawing

void CMyVC1View::OnDraw(CDC* pDC)
{
	CMyVC1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View printing

BOOL CMyVC1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyVC1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyVC1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View diagnostics

#ifdef _DEBUG
void CMyVC1View::AssertValid() const
{
	CView::AssertValid();
}

void CMyVC1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyVC1Doc* CMyVC1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyVC1Doc)));
	return (CMyVC1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View message handlers

void CMyVC1View::OnWelcome() 
{
	// TODO: Add your command handler code here
	MessageBox("Welcome to use VC++ program!");
}

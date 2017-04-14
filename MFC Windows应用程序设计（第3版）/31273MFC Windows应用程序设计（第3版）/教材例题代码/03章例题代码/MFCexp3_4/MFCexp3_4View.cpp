// MFCexp3_4View.cpp : implementation of the CMFCexp3_4View class
//

#include "stdafx.h"
#include "MFCexp3_4.h"

#include "MFCexp3_4Doc.h"
#include "MFCexp3_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View

IMPLEMENT_DYNCREATE(CMFCexp3_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp3_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp3_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View construction/destruction

CMFCexp3_4View::CMFCexp3_4View()
{
	// TODO: add construction code here

}

CMFCexp3_4View::~CMFCexp3_4View()
{
}

BOOL CMFCexp3_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View drawing

void CMFCexp3_4View::OnDraw(CDC* pDC)
{
	CMFCexp3_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(50,50,pDoc->m_Text,6);	//显示字符指针的数据
	pDC->TextOut(190,50,pDoc->GetTitle( ));	//显示文档标题

}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View printing

BOOL CMFCexp3_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp3_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp3_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View diagnostics

#ifdef _DEBUG
void CMFCexp3_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp3_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp3_4Doc* CMFCexp3_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp3_4Doc)));
	return (CMFCexp3_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4View message handlers

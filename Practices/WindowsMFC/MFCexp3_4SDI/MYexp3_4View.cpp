// MYexp3_4View.cpp : implementation of the CMYexp3_4View class
//

#include "stdafx.h"
#include "MYexp3_4.h"

#include "MYexp3_4Doc.h"
#include "MYexp3_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View

IMPLEMENT_DYNCREATE(CMYexp3_4View, CView)

BEGIN_MESSAGE_MAP(CMYexp3_4View, CView)
	//{{AFX_MSG_MAP(CMYexp3_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View construction/destruction

CMYexp3_4View::CMYexp3_4View()
{
	// TODO: add construction code here

}

CMYexp3_4View::~CMYexp3_4View()
{
}

BOOL CMYexp3_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View drawing

void CMYexp3_4View::OnDraw(CDC* pDC)
{
	CMYexp3_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
		pDC->TextOut(50,50,pDoc->m_Text,6);	//显示字符指针的数据
	pDC->TextOut(190,50,pDoc->GetTitle( ));	//显示文档标题
}

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View printing

BOOL CMYexp3_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMYexp3_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMYexp3_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View diagnostics

#ifdef _DEBUG
void CMYexp3_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMYexp3_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMYexp3_4Doc* CMYexp3_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMYexp3_4Doc)));
	return (CMYexp3_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4View message handlers

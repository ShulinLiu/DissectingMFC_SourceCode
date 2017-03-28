// MFCexp4_1View.cpp : implementation of the CMFCexp4_1View class
//

#include "stdafx.h"
#include "MFCexp4_1.h"

#include "MFCexp4_1Doc.h"
#include "MFCexp4_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View

IMPLEMENT_DYNCREATE(CMFCexp4_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_1View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View construction/destruction

CMFCexp4_1View::CMFCexp4_1View()
{
	// TODO: add construction code here

}

CMFCexp4_1View::~CMFCexp4_1View()
{
}

BOOL CMFCexp4_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View drawing

void CMFCexp4_1View::OnDraw(CDC* pDC)
{
	CMFCexp4_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	//CBrush
	pDC->TextOut(200,200," π”√ª≠À¢");
		int red=0,green=0,blue=0;
	int row=20;
	for(int s=0;s<6;s++)
	{
		int clr=RGB(red,green,blue);
		CBrush newBrush(clr);
		CBrush*oldBrush=pDC->SelectObject(&newBrush);
		pDC->Rectangle(20,row,200,row+20);
		pDC->SelectObject(oldBrush);
		red+=34;green+=16;blue+=4;
		row+=30;
	}
	int styles[]={	HS_BDIAGONAL,HS_CROSS,HS_DIAGCROSS,HS_FDIAGONAL,HS_HORIZONTAL,HS_VERTICAL};
	row=20;
	for( s=0;s<6;s++)
	{
		CBrush newBrush(styles[s],RGB(0,0,0));
		CBrush*oldBrush=pDC->SelectObject(&newBrush);
		pDC->Rectangle(220,row,400,row+20);
		pDC->SelectObject(oldBrush);
		row+=30;
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View printing

BOOL CMFCexp4_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp4_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp4_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View diagnostics

#ifdef _DEBUG
void CMFCexp4_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_1Doc* CMFCexp4_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_1Doc)));
	return (CMFCexp4_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1View message handlers

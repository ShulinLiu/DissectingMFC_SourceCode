// MFCexp4View.cpp : implementation of the CMFCexp4View class
//

#include "stdafx.h"
#include "MFCexp4.h"

#include "MFCexp4Doc.h"
#include "MFCexp4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View

IMPLEMENT_DYNCREATE(CMFCexp4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4View, CView)
	//{{AFX_MSG_MAP(CMFCexp4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View construction/destruction

CMFCexp4View::CMFCexp4View()
{
	// TODO: add construction code here

}

CMFCexp4View::~CMFCexp4View()
{
}

BOOL CMFCexp4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View drawing

void CMFCexp4View::OnDraw(CDC* pDC)
{
	CMFCexp4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	//Step1: to print out char*
	//pDC->TextOut(50,50,"输出字符串");


	//Step2: use CPen, paint different strokes
//	int red=0,green=0,blue=0;
//	int width=2;
//	int row=20;
//	for(int s=0;s<8;s++)
//	{
//		int color=RGB(red,green,blue);
//		CPen newPen(PS_SOLID,width,color);
//		CPen*oldPen=pDC->SelectObject(&newPen);
//		pDC->MoveTo(20,row);
//		pDC->LineTo(300,row);
//		pDC->SelectObject(oldPen);
//		red+=32;
//		green+=16;
//		blue+=8;
//		width+=2;
//		row+=30;
//	}

	//Step3: use CPen, paint different pen styles
	pDC->TextOut(200,200,"改变画笔风格");
	int style[]={PS_SOLID,PS_DASH,PS_DOT,PS_DASHDOT,PS_DASHDOTDOT};
	int row=20;
	for(int s=0;s<5;s++)
	{
		CPen newPen(style[s],1,RGB(0,0,0));
		CPen*oldPen=pDC->SelectObject(&newPen);
		pDC->MoveTo(20,row);
		pDC->LineTo(300,row);
		pDC->SelectObject(oldPen);
		row+=30;
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View printing

BOOL CMFCexp4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View diagnostics

#ifdef _DEBUG
void CMFCexp4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4Doc* CMFCexp4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4Doc)));
	return (CMFCexp4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4View message handlers

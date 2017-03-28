// MFCexp4_3View.cpp : implementation of the CMFCexp4_3View class
//

#include "stdafx.h"
#include "MFCexp4_3.h"

#include "MFCexp4_3Doc.h"
#include "MFCexp4_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View

IMPLEMENT_DYNCREATE(CMFCexp4_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_3View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View construction/destruction

CMFCexp4_3View::CMFCexp4_3View()
{
	// TODO: add construction code here

}

CMFCexp4_3View::~CMFCexp4_3View()
{
}

BOOL CMFCexp4_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View drawing

void CMFCexp4_3View::OnDraw(CDC* pDC)
{
	CMFCexp4_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	// TODO: add draw code for native data here

//	pDC->TextOut(30,30,"文本的颜色");
//	pDC->SetTextColor(RGB(255,0,0));
//	pDC->TextOut(130,30,"文本的颜色");
//	pDC->SetTextColor(RGB(255,255,255));
//	pDC->SetBkColor(RGB(0,0,255));
//	pDC->TextOut(230,30,"文本的颜色");

//		for(int s=0;s<5;s++)
//	{
//		pDC->SetTextCharacterExtra(s*4);
//		pDC->TextOut(20,20+s*20,"文本的间距");
//	}

	pDC->SetTextAlign(TA_LEFT);
	pDC->TextOut(220,20,"AAAAAAAAA");
	pDC->TextOut(220,40,"HHHHH");
	pDC->TextOut(220,60,"SSSSSSSSSSSSSSSS");
	//中间对齐
	pDC->SetTextAlign(TA_CENTER);
	pDC->TextOut(220,80,"AAAAAAAAA");
	pDC->TextOut(220,100,"HHHHH");
	pDC->TextOut(220,120,"SSSSSSSSSSSSSSSS");
	//右对齐
	pDC->SetTextAlign(TA_RIGHT);
	pDC->TextOut(220,140,"AAAAAAAAA");
	pDC->TextOut(220,160,"HHHHH");
	pDC->TextOut(220,180,"SSSSSSSSSSSSSSSS");

}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View printing

BOOL CMFCexp4_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp4_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp4_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View diagnostics

#ifdef _DEBUG
void CMFCexp4_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_3Doc* CMFCexp4_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_3Doc)));
	return (CMFCexp4_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_3View message handlers

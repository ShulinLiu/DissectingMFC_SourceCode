// MFCexp7_1View.cpp : implementation of the CMFCexp7_1View class
//

#include "stdafx.h"
#include "MFCexp7_1.h"

#include "MFCexp7_1Doc.h"
#include "MFCexp7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View

IMPLEMENT_DYNCREATE(CMFCexp7_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_1View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View construction/destruction

CMFCexp7_1View::CMFCexp7_1View()
{
	// TODO: add construction code here

}

CMFCexp7_1View::~CMFCexp7_1View()
{
}

BOOL CMFCexp7_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View drawing

void CMFCexp7_1View::OnDraw(CDC* pDC)
{
	CMFCexp7_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->Rectangle(pDoc->m_tagRec);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View printing

BOOL CMFCexp7_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp7_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp7_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View diagnostics

#ifdef _DEBUG
void CMFCexp7_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_1Doc* CMFCexp7_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_1Doc)));
	return (CMFCexp7_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1View message handlers

void CMFCexp7_1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMFCexp7_1Doc*pDoc=GetDocument();
	if(nFlags&MK_SHIFT)//鼠标左键按下的同时，Shift键是否按下
	{	pDoc->m_tagRec.left=30;
		pDoc->m_tagRec.top=30;
		pDoc->m_tagRec.right=350;
		pDoc->m_tagRec.bottom=300;
	}
	else
	{
		pDoc->m_tagRec.left=point.x;
		pDoc->m_tagRec.top=point.y;
		pDoc->m_tagRec.right=point.x+320;
		pDoc->m_tagRec.bottom=point.y+270;
	}
	InvalidateRect(NULL,TRUE);		
	CView::OnLButtonDown(nFlags, point);
}

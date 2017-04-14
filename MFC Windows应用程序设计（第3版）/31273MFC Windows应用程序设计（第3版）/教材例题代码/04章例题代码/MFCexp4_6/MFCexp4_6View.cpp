// MFCexp4_6View.cpp : implementation of the CMFCexp4_6View class
//

#include "stdafx.h"
#include "MFCexp4_6.h"

#include "MFCexp4_6Doc.h"
#include "MFCexp4_6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6View

IMPLEMENT_DYNCREATE(CMFCexp4_6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_6View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_6View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6View construction/destruction

CMFCexp4_6View::CMFCexp4_6View()
{
	// TODO: add construction code here

}

CMFCexp4_6View::~CMFCexp4_6View()
{
}

BOOL CMFCexp4_6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6View drawing

void CMFCexp4_6View::OnDraw(CDC* pDC)
{
	CMFCexp4_6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(30,30,"文本的颜色");
	pDC->SetTextColor(RGB(255,0,0));
	pDC->TextOut(130,30,"文本的颜色");
	pDC->SetTextColor(RGB(255,255,255));
	pDC->SetBkColor(RGB(0,0,255));
	pDC->TextOut(230,30,"文本的颜色");
}


/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6View diagnostics

#ifdef _DEBUG
void CMFCexp4_6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_6Doc* CMFCexp4_6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_6Doc)));
	return (CMFCexp4_6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6View message handlers

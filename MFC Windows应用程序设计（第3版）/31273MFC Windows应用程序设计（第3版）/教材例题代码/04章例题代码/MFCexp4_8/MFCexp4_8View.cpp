// MFCexp4_8View.cpp : implementation of the CMFCexp4_8View class
//

#include "stdafx.h"
#include "MFCexp4_8.h"

#include "MFCexp4_8Doc.h"
#include "MFCexp4_8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_8View

IMPLEMENT_DYNCREATE(CMFCexp4_8View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_8View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_8View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_8View construction/destruction

CMFCexp4_8View::CMFCexp4_8View()
{
	// TODO: add construction code here

}

CMFCexp4_8View::~CMFCexp4_8View()
{
}

BOOL CMFCexp4_8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_8View drawing

void CMFCexp4_8View::OnDraw(CDC* pDC)
{
	CMFCexp4_8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	//左对齐
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
// CMFCexp4_8View diagnostics

#ifdef _DEBUG
void CMFCexp4_8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_8Doc* CMFCexp4_8View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_8Doc)));
	return (CMFCexp4_8Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_8View message handlers

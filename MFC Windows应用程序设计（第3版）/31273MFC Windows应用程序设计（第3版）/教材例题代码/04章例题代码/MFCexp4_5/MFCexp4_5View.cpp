// MFCexp4_5View.cpp : implementation of the CMFCexp4_5View class
//

#include "stdafx.h"
#include "MFCexp4_5.h"

#include "MFCexp4_5Doc.h"
#include "MFCexp4_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5View

IMPLEMENT_DYNCREATE(CMFCexp4_5View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_5View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_5View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5View construction/destruction

CMFCexp4_5View::CMFCexp4_5View()
{
	// TODO: add construction code here

}

CMFCexp4_5View::~CMFCexp4_5View()
{
}

BOOL CMFCexp4_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5View drawing

void CMFCexp4_5View::OnDraw(CDC* pDC)
{
	CMFCexp4_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
		CRect rect(30,30,300,300);
		pDC->Rectangle(&rect);
}


/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5View diagnostics

#ifdef _DEBUG
void CMFCexp4_5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_5Doc* CMFCexp4_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_5Doc)));
	return (CMFCexp4_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5View message handlers

// MFCexp6_1View.cpp : implementation of the CMFCexp6_1View class
//

#include "stdafx.h"
#include "MFCexp6_1.h"

#include "MFCexp6_1Doc.h"
#include "MFCexp6_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1View

IMPLEMENT_DYNCREATE(CMFCexp6_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp6_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp6_1View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1View construction/destruction

CMFCexp6_1View::CMFCexp6_1View()
{
	// TODO: add construction code here

}

CMFCexp6_1View::~CMFCexp6_1View()
{
}

BOOL CMFCexp6_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1View drawing

void CMFCexp6_1View::OnDraw(CDC* pDC)
{
	CMFCexp6_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1View diagnostics

#ifdef _DEBUG
void CMFCexp6_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp6_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp6_1Doc* CMFCexp6_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp6_1Doc)));
	return (CMFCexp6_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1View message handlers

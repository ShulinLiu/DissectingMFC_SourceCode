// MFCexp10_1View.cpp : implementation of the CMFCexp10_1View class
//

#include "stdafx.h"
#include "MFCexp10_1.h"

#include "MFCexp10_1Doc.h"
#include "MFCexp10_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1View

IMPLEMENT_DYNCREATE(CMFCexp10_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp10_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp10_1View)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1View construction/destruction

CMFCexp10_1View::CMFCexp10_1View()
{
	// TODO: add construction code here

}

CMFCexp10_1View::~CMFCexp10_1View()
{
}

BOOL CMFCexp10_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1View drawing

void CMFCexp10_1View::OnDraw(CDC* pDC)
{
	CMFCexp10_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1View diagnostics

#ifdef _DEBUG
void CMFCexp10_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp10_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp10_1Doc* CMFCexp10_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp10_1Doc)));
	return (CMFCexp10_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1View message handlers

int CMFCexp10_1View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	m_Static1.Create("Static1",WS_CHILD|WS_VISIBLE|SS_CENTER,
					CRect(20,20,100,40),this,0);
	m_Static2.Create("Static2",WS_CHILD|WS_VISIBLE,
					CRect(20,60,100,80),this,0);
	m_Static3.Create("Static3",WS_CHILD|WS_VISIBLE|SS_RIGHT,
					CRect(20,100,100,120),this,0);
	m_Static4.Create("Static4",
				WS_CHILD|WS_VISIBLE|SS_CENTER|SS_SIMPLE,
				CRect(120,20,200,40),this,0);
	m_Static5.Create("Static5",WS_CHILD|WS_VISIBLE|SS_BLACKRECT,
				CRect(120,60,200,80),this,0);
	m_Static6.Create("Static6&S",WS_CHILD|WS_VISIBLE|SS_NOPREFIX ,
				CRect(120,100,200,120),this,0);
	return 0;	
}

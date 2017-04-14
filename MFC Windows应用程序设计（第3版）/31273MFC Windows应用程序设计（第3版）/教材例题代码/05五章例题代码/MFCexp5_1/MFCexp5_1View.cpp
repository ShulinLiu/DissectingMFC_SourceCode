// MFCexp5_1View.cpp : implementation of the CMFCexp5_1View class
//

#include "stdafx.h"
#include "MFCexp5_1.h"

#include "MFCexp5_1Doc.h"
#include "MFCexp5_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1View

IMPLEMENT_DYNCREATE(CMFCexp5_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp5_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp5_1View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1View construction/destruction

CMFCexp5_1View::CMFCexp5_1View()
{
	// TODO: add construction code here

}

CMFCexp5_1View::~CMFCexp5_1View()
{
}

BOOL CMFCexp5_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1View drawing

void CMFCexp5_1View::OnDraw(CDC* pDC)
{
	CMFCexp5_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1View diagnostics

#ifdef _DEBUG
void CMFCexp5_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp5_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp5_1Doc* CMFCexp5_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp5_1Doc)));
	return (CMFCexp5_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1View message handlers

void CMFCexp5_1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CString str1="This is an easy way to perform";
	CString str2="string concantenation!";
	CString str3=str1+"  "+str2;
	AfxMessageBox(str3,MB_OK|MB_ICONINFORMATION);
	
	CView::OnLButtonDown(nFlags, point);
}

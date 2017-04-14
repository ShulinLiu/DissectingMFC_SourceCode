// MFCexp11_1View.cpp : implementation of the CMFCexp11_1View class
//

#include "stdafx.h"
#include "MFCexp11_1.h"

#include "MFCexp11_1Doc.h"
#include "MFCexp11_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "MyDialog.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_1View

IMPLEMENT_DYNCREATE(CMFCexp11_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp11_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp11_1View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_1View construction/destruction

CMFCexp11_1View::CMFCexp11_1View()
{
	// TODO: add construction code here

}

CMFCexp11_1View::~CMFCexp11_1View()
{
}

BOOL CMFCexp11_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_1View drawing

void CMFCexp11_1View::OnDraw(CDC* pDC)
{
	CMFCexp11_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_1View diagnostics

#ifdef _DEBUG
void CMFCexp11_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp11_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp11_1Doc* CMFCexp11_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp11_1Doc)));
	return (CMFCexp11_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_1View message handlers

void CMFCexp11_1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CString m_info;
	MyDialog dlg;				//定义对话框对象
	dlg.DoModal( );				//显示并运行模态对话框
	CView::OnLButtonDown(nFlags, point);
}

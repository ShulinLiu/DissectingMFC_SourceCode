// MFCexp7_7View.cpp : implementation of the CMFCexp7_7View class
//

#include "stdafx.h"
#include "MFCexp7_7.h"

#include "MFCexp7_7Doc.h"
#include "MFCexp7_7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7View

IMPLEMENT_DYNCREATE(CMFCexp7_7View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_7View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_7View)
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
	ON_WM_KEYDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7View construction/destruction

CMFCexp7_7View::CMFCexp7_7View()
{
	// TODO: add construction code here

}

CMFCexp7_7View::~CMFCexp7_7View()
{
}

BOOL CMFCexp7_7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7View drawing

void CMFCexp7_7View::OnDraw(CDC* pDC)
{
	CMFCexp7_7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(20,20,pDoc-> m_pStr);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7View diagnostics

#ifdef _DEBUG
void CMFCexp7_7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_7Doc* CMFCexp7_7View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_7Doc)));
	return (CMFCexp7_7Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7View message handlers

void CMFCexp7_7View::OnSetFocus(CWnd* pOldWnd) 
{
	CView::OnSetFocus(pOldWnd);
	
	CMFCexp7_7Doc*pDoc=GetDocument();
	pDoc-> m_pStr ="获得了输入焦点。";
	InvalidateRect(NULL,TRUE);
	
}

void CMFCexp7_7View::OnKillFocus(CWnd* pNewWnd) 
{
	CView::OnKillFocus(pNewWnd);
	
	CMFCexp7_7Doc*pDoc=GetDocument();
	pDoc-> m_pStr ="失去了输入焦点。";
	InvalidateRect(NULL,TRUE);	
	
}

void CMFCexp7_7View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	MessageBeep(1);	//此函数可以使计算机发出"叮"的响声	
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

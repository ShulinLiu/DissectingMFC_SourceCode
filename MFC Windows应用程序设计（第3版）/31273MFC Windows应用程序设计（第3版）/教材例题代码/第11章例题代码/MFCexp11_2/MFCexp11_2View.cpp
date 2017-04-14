// MFCexp11_2View.cpp : implementation of the CMFCexp11_2View class
//

#include "stdafx.h"
#include "MFCexp11_2.h"

#include "MFCexp11_2Doc.h"
#include "MFCexp11_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include"MyDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_2View

IMPLEMENT_DYNCREATE(CMFCexp11_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp11_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp11_2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_2View construction/destruction

CMFCexp11_2View::CMFCexp11_2View()
{
	// TODO: add construction code here

}

CMFCexp11_2View::~CMFCexp11_2View()
{
}

BOOL CMFCexp11_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_2View drawing

void CMFCexp11_2View::OnDraw(CDC* pDC)
{
	CMFCexp11_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(10,10,m_outEdit1);
	pDC->TextOut(100,10,m_outEdit2);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_2View diagnostics

#ifdef _DEBUG
void CMFCexp11_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp11_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp11_2Doc* CMFCexp11_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp11_2Doc)));
	return (CMFCexp11_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_2View message handlers

void CMFCexp11_2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
		MyDlg dlg;
		int result=dlg.DoModal();
		if(result==IDOK)
		{
			m_outEdit1=dlg.m_Edit1;
			m_outEdit2=dlg.m_Edit2;
			Invalidate();
		}
	
	CView::OnLButtonDown(nFlags, point);
}

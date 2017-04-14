// MFCexp4_9View.cpp : implementation of the CMFCexp4_9View class
//

#include "stdafx.h"
#include "MFCexp4_9.h"

#include "MFCexp4_9Doc.h"
#include "MFCexp4_9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9View

IMPLEMENT_DYNCREATE(CMFCexp4_9View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_9View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_9View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9View construction/destruction

CMFCexp4_9View::CMFCexp4_9View()
{
	// TODO: add construction code here

}

CMFCexp4_9View::~CMFCexp4_9View()
{
}

BOOL CMFCexp4_9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9View drawing

void CMFCexp4_9View::OnDraw(CDC* pDC)
{
	CMFCexp4_9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9View diagnostics

#ifdef _DEBUG
void CMFCexp4_9View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_9Doc* CMFCexp4_9View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_9Doc)));
	return (CMFCexp4_9Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9View message handlers

void CMFCexp4_9View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CClientDC dc(this);		//定义一个CClientDC的对象dc
	CRect rc;					//定义一个描述矩形的对象rc
	GetClientRect(&rc);		//获得用户区的尺寸，并存入rc
	//以下是绘制菱形的代码
	dc.MoveTo(0,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,0);
	dc.LineTo(rc.right,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,rc.bottom);
	dc.LineTo(0,(rc.bottom+rc.top)/2);	
	CView::OnLButtonDown(nFlags, point);
}

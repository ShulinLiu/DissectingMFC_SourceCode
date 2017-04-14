// MFCexp11_6View.cpp : implementation of the CMFCexp11_6View class
//

#include "stdafx.h"
#include "MFCexp11_6.h"

#include "MFCexp11_6Doc.h"
#include "MFCexp11_6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6View

IMPLEMENT_DYNCREATE(CMFCexp11_6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp11_6View, CView)
	//{{AFX_MSG_MAP(CMFCexp11_6View)
	ON_WM_RBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6View construction/destruction

CMFCexp11_6View::CMFCexp11_6View()
{
	// TODO: add construction code here
	m_pNameDlg=new CNonMdlDlg;//定义对话框对象
}

CMFCexp11_6View::~CMFCexp11_6View()
{
}

BOOL CMFCexp11_6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6View drawing

void CMFCexp11_6View::OnDraw(CDC* pDC)
{
	CMFCexp11_6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(m_pX,m_pY,m_pNameDlg->m_iputEdit);//显示字符串
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6View diagnostics

#ifdef _DEBUG
void CMFCexp11_6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp11_6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp11_6Doc* CMFCexp11_6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp11_6Doc)));
	return (CMFCexp11_6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6View message handlers

void CMFCexp11_6View::OnRButtonDown(UINT nFlags, CPoint point) 
{
	if(m_pNameDlg->m_bActive)
		m_pNameDlg->SetActiveWindow( );	//激活对话框
	else
		m_pNameDlg->Create( );			//创建对话框
	CView::OnRButtonDown(nFlags, point);
}

void CMFCexp11_6View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	m_pX=point.x;
	m_pY=point.y;
	if(m_pNameDlg->m_bActive)
	{
		m_pNameDlg->UpdateData(TRUE);	//把控件的数据传递到变量中
		Invalidate( );
	}
	
	CView::OnLButtonDown(nFlags, point);
}

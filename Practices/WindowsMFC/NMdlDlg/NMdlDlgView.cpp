// NMdlDlgView.cpp : implementation of the CNMdlDlgView class
//

#include "stdafx.h"
#include "NMdlDlg.h"

#include "NMdlDlgDoc.h"
#include "NMdlDlgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView

IMPLEMENT_DYNCREATE(CNMdlDlgView, CView)

BEGIN_MESSAGE_MAP(CNMdlDlgView, CView)
	//{{AFX_MSG_MAP(CNMdlDlgView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView construction/destruction

CNMdlDlgView::CNMdlDlgView()
{
	// TODO: add construction code here
	m_pNameDlg=new CNonMdlDlg;//定义对话框对象
}

CNMdlDlgView::~CNMdlDlgView()
{
}

BOOL CNMdlDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView drawing

void CNMdlDlgView::OnDraw(CDC* pDC)
{
	CNMdlDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(m_pX,m_pY,m_pNameDlg->m_inputEdit);//显示字符串
}

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView printing

BOOL CNMdlDlgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CNMdlDlgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CNMdlDlgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView diagnostics

#ifdef _DEBUG
void CNMdlDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CNMdlDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNMdlDlgDoc* CNMdlDlgView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNMdlDlgDoc)));
	return (CNMdlDlgDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgView message handlers

void CNMdlDlgView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_pX=point.x;
	m_pY=point.y;
	if(m_pNameDlg->m_bActive)
	{
		m_pNameDlg->UpdateData(TRUE);	//把控件的数据传递到变量中
		Invalidate( );
	}
	
	CView::OnLButtonDown(nFlags, point);
}

void CNMdlDlgView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(m_pNameDlg->m_bActive)
		m_pNameDlg->SetActiveWindow( );	//激活对话框
	else
		m_pNameDlg->Create( );			//创建对话框
	
	CView::OnRButtonDown(nFlags, point);
}

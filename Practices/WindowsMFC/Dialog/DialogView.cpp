// DialogView.cpp : implementation of the CDialogView class
//

#include "stdafx.h"
#include "Dialog.h"

#include "DialogDoc.h"
#include "DialogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "MyDialog.h"
/////////////////////////////////////////////////////////////////////////////
// CDialogView

IMPLEMENT_DYNCREATE(CDialogView, CView)

BEGIN_MESSAGE_MAP(CDialogView, CView)
	//{{AFX_MSG_MAP(CDialogView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogView construction/destruction

CDialogView::CDialogView()
{
	// TODO: add construction code here

}

CDialogView::~CDialogView()
{
}

BOOL CDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView drawing

void CDialogView::OnDraw(CDC* pDC)
{
	CDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView printing

BOOL CDialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView diagnostics

#ifdef _DEBUG
void CDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDialogDoc* CDialogView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDialogDoc)));
	return (CDialogDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDialogView message handlers

void CDialogView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CString m_info;
	CMyDialog dlg;				//定义对话框对象
	dlg.DoModal( );				//显示并运行模态对话框
	
	CView::OnLButtonDown(nFlags, point);
}

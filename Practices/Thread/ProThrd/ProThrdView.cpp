// ProThrdView.cpp : implementation of the CProThrdView class
//

#include "stdafx.h"
#include "ProThrd.h"

#include "ProThrdDoc.h"
#include "ProThrdView.h"

#include "MyThread.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProThrdView

IMPLEMENT_DYNCREATE(CProThrdView, CView)

BEGIN_MESSAGE_MAP(CProThrdView, CView)
	//{{AFX_MSG_MAP(CProThrdView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProThrdView construction/destruction

CProThrdView::CProThrdView()
{
	// TODO: add construction code here

}

CProThrdView::~CProThrdView()
{
}

BOOL CProThrdView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CProThrdView drawing

void CProThrdView::OnDraw(CDC* pDC)
{
	CProThrdDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CProThrdView printing

BOOL CProThrdView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProThrdView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProThrdView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CProThrdView diagnostics

#ifdef _DEBUG
void CProThrdView::AssertValid() const
{
	CView::AssertValid();
}

void CProThrdView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProThrdDoc* CProThrdView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProThrdDoc)));
	return (CProThrdDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProThrdView message handlers

// 线程函数，全局或者静态函数
UINT MessageThread(LPVOID pParam)
{
    char* pMessage = (char*) pParam;
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread Message", MB_OK);
    return 0;
}

void CProThrdView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
    AfxBeginThread (MessageThread,//作为线程函数
					"Greetings from your thread!"  //向线程传递参数
					);		
	
	CView::OnLButtonDown(nFlags, point);
}

void CProThrdView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	AfxBeginThread(RUNTIME_CLASS(CMyThread));	
	CView::OnRButtonDown(nFlags, point);
}

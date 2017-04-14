// MFCexp12_5View.cpp : implementation of the CMFCexp12_5View class
//

#include "stdafx.h"
#include "MFCexp12_5.h"

#include "MFCexp12_5Doc.h"
#include "MFCexp12_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
CCriticalSection criticalSection;//定义临界段对象
/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5View

IMPLEMENT_DYNCREATE(CMFCexp12_5View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_5View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_5View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5View construction/destruction

CMFCexp12_5View::CMFCexp12_5View()
{
	// TODO: add construction code here

}

CMFCexp12_5View::~CMFCexp12_5View()
{
}

BOOL CMFCexp12_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5View drawing

void CMFCexp12_5View::OnDraw(CDC* pDC)
{
	CMFCexp12_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5View diagnostics

#ifdef _DEBUG
void CMFCexp12_5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_5Doc* CMFCexp12_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_5Doc)));
	return (CMFCexp12_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5View message handlers
UINT MessageThread1(LPVOID pParam)
{
	criticalSection.Lock( );
    char* pMessage ="Thread1 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	criticalSection.Unlock( );
    return 0;
}
UINT MessageThread2(LPVOID pParam)
{
	criticalSection.Lock( );
    char* pMessage ="Thread2 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	criticalSection.Unlock( );
    return 0;
}

void CMFCexp12_5View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread (MessageThread1,"Thread is started");
	AfxBeginThread (MessageThread2,"Thread is started");	
	CView::OnLButtonDown(nFlags, point);
}

// MFCexp12_7View.cpp : implementation of the CMFCexp12_7View class
//

#include "stdafx.h"
#include "MFCexp12_7.h"

#include "MFCexp12_7Doc.h"
#include "MFCexp12_7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
CSemaphore semaphorObj(2,3);
/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_7View

IMPLEMENT_DYNCREATE(CMFCexp12_7View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_7View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_7View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_7View construction/destruction

CMFCexp12_7View::CMFCexp12_7View()
{
	// TODO: add construction code here

}

CMFCexp12_7View::~CMFCexp12_7View()
{
}

BOOL CMFCexp12_7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_7View drawing

void CMFCexp12_7View::OnDraw(CDC* pDC)
{
	CMFCexp12_7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_7View diagnostics

#ifdef _DEBUG
void CMFCexp12_7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_7Doc* CMFCexp12_7View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_7Doc)));
	return (CMFCexp12_7Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_7View message handlers
UINT MessageThread1(LPVOID pParam)
{
	semaphorObj.Lock();
    char* pMessage ="Thread1 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	semaphorObj.Unlock( );
    return 0;
}
UINT MessageThread2(LPVOID pParam)
{
	semaphorObj.Lock( );
    char* pMessage ="Thread2 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	semaphorObj.Unlock( );
    return 0;
}
UINT MessageThread3(LPVOID pParam)
{
	semaphorObj.Lock( );
    char* pMessage ="Thread3 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	semaphorObj.Unlock( );
    return 0;
}
UINT MessageThread4(LPVOID pParam)
{
	semaphorObj.Lock( );
    char* pMessage ="Thread4 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	semaphorObj.Unlock( );
    return 0;
}

void CMFCexp12_7View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread (MessageThread1,"Thread is started");
	AfxBeginThread (MessageThread2,"Thread is started");
	AfxBeginThread (MessageThread3,"Thread is started");
	AfxBeginThread (MessageThread4,"Thread is started");
	
	CView::OnLButtonDown(nFlags, point);
}

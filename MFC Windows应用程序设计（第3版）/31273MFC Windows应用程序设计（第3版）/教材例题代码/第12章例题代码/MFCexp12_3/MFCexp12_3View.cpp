// MFCexp12_3View.cpp : implementation of the CMFCexp12_3View class
//

#include "stdafx.h"
#include "MFCexp12_3.h"

#include "MFCexp12_3Doc.h"
#include "MFCexp12_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
CEvent eventObj;

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_3View

IMPLEMENT_DYNCREATE(CMFCexp12_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_3View)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_3View construction/destruction

CMFCexp12_3View::CMFCexp12_3View()
{
	// TODO: add construction code here

}

CMFCexp12_3View::~CMFCexp12_3View()
{
}

BOOL CMFCexp12_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_3View drawing

void CMFCexp12_3View::OnDraw(CDC* pDC)
{
	CMFCexp12_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_3View diagnostics

#ifdef _DEBUG
void CMFCexp12_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_3Doc* CMFCexp12_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_3Doc)));
	return (CMFCexp12_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_3View message handlers
UINT MessageThread1(LPVOID pParam)
{
    char* pMessage ="Thread1 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);//显示一个信息框
	eventObj.Lock( );                      //使线程1处于等待状态
	pMessage="Thread1 is unblocked";
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread1 message", MB_OK);//显示线程1解锁后的信息框
	eventObj.Lock( );						//使线程1再次处于等待状态
	pMessage="Thread1 is unblocked again";
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread1 message", MB_OK); //显示线程1解锁后的信息框
    return 0;
}
UINT MessageThread2(LPVOID pParam)
{
    char* pMessage ="Thread2 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK); //显示一个信息框
	eventObj.Lock( );						//使线程2处于等待状态
	pMessage="Thread2 is unblocked";
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread2 message", MB_OK); //显示线程2解锁后的信息框
    return 0;
}

UINT MessageThread3(LPVOID pParam)
{
	eventObj.SetEvent( );					//把事件对象置为发信状态
	return 0;
}

void CMFCexp12_3View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread (MessageThread1,
						"Thread is started");//启动线程1
	AfxBeginThread (MessageThread2,
						"Thread is started");//启动线程2
	
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp12_3View::OnRButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread (MessageThread3,
						"Thread is unblocked");//启动线程3
	
	CView::OnRButtonDown(nFlags, point);
}

// MFCexp12_6View.cpp : implementation of the CMFCexp12_6View class
//

#include "stdafx.h"
#include "MFCexp12_6.h"

#include "MFCexp12_6Doc.h"
#include "MFCexp12_6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
CMutex mutexObj(FALSE, "mutex1");//定义互斥体对象
/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_6View

IMPLEMENT_DYNCREATE(CMFCexp12_6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_6View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_6View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_6View construction/destruction

CMFCexp12_6View::CMFCexp12_6View()
{
	// TODO: add construction code here

}

CMFCexp12_6View::~CMFCexp12_6View()
{
}

BOOL CMFCexp12_6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_6View drawing

void CMFCexp12_6View::OnDraw(CDC* pDC)
{
	CMFCexp12_6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_6View diagnostics

#ifdef _DEBUG
void CMFCexp12_6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_6Doc* CMFCexp12_6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_6Doc)));
	return (CMFCexp12_6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_6View message handlers
UINT MessageThread1(LPVOID pParam)
{
	mutexObj.Lock( );
    char* pMessage ="Thread1 is started";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread message", MB_OK);
	mutexObj.Unlock( );
    return 0;
}

void CMFCexp12_6View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	AfxBeginThread (MessageThread1,"Thread is started");		
	CView::OnLButtonDown(nFlags, point);
}

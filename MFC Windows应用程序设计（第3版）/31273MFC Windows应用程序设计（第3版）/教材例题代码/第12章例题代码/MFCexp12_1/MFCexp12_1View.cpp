// MFCexp12_1View.cpp : implementation of the CMFCexp12_1View class
//

#include "stdafx.h"
#include "MFCexp12_1.h"

#include "MFCexp12_1Doc.h"
#include "MFCexp12_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1View

IMPLEMENT_DYNCREATE(CMFCexp12_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp12_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp12_1View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1View construction/destruction

CMFCexp12_1View::CMFCexp12_1View()
{
	// TODO: add construction code here

}

CMFCexp12_1View::~CMFCexp12_1View()
{
}

BOOL CMFCexp12_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1View drawing

void CMFCexp12_1View::OnDraw(CDC* pDC)
{
	CMFCexp12_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1View diagnostics

#ifdef _DEBUG
void CMFCexp12_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp12_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp12_1Doc* CMFCexp12_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp12_1Doc)));
	return (CMFCexp12_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1View message handlers

//Ïß³Ìº¯Êý
UINT MessageThread(LPVOID pParam)
{
    char* pMessage = (char*) pParam;
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(pMainWnd->m_hWnd,
        pMessage, "Thread Message", MB_OK);
    return 0;
}
void CMFCexp12_1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
    AfxBeginThread (MessageThread,
					"Greetings from your thread!");		
	CView::OnLButtonDown(nFlags, point);
}


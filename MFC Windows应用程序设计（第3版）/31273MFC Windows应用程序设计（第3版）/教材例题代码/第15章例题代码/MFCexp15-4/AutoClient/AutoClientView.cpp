// AutoClientView.cpp : implementation of the CAutoClientView class
//

#include "stdafx.h"
#include "AutoClient.h"

#include "AutoClientDoc.h"
#include "AutoClientView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAutoClientView

IMPLEMENT_DYNCREATE(CAutoClientView, CView)

BEGIN_MESSAGE_MAP(CAutoClientView, CView)
	//{{AFX_MSG_MAP(CAutoClientView)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAutoClientView construction/destruction

CAutoClientView::CAutoClientView()
{
	// TODO: add construction code here

}

CAutoClientView::~CAutoClientView()
{
}

BOOL CAutoClientView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAutoClientView drawing

void CAutoClientView::OnDraw(CDC* pDC)
{
	CAutoClientDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CAutoClientView diagnostics

#ifdef _DEBUG
void CAutoClientView::AssertValid() const
{
	CView::AssertValid();
}

void CAutoClientView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAutoClientDoc* CAutoClientView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAutoClientDoc)));
	return (CAutoClientDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAutoClientView message handlers

int CAutoClientView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;	
	BOOL loaded=
	m_server.CreateDispatch("AutoServer.Document");
	if(!loaded)
		return -1;	
	return 0;
}

void CAutoClientView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	if(m_server.GetDiameter()>100)
		m_server.SetDiameter(30);
	m_server.DispSvWindow();	
	CView::OnLButtonDown(nFlags, point);
}

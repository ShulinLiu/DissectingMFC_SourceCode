// Splitter2.cpp : implementation file
//

#include "stdafx.h"
#include "datastructvirsual.h"
#include "Splitter2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "Draw2.h"
#include "Control2.h"
/////////////////////////////////////////////////////////////////////////////
// CSplitter2

IMPLEMENT_DYNCREATE(CSplitter2, CView)

CSplitter2::CSplitter2()
{
}

CSplitter2::~CSplitter2()
{
}


BEGIN_MESSAGE_MAP(CSplitter2, CView)
	//{{AFX_MSG_MAP(CSplitter2)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitter2 drawing

void CSplitter2::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CSplitter2 diagnostics

#ifdef _DEBUG
void CSplitter2::AssertValid() const
{
	CView::AssertValid();
}

void CSplitter2::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSplitter2 message handlers

int CSplitter2::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CRect rect;
	GetClientRect(rect);
	m_wndSplitter2.CreateStatic(this,2,1);
	CCreateContext *pContext = (CCreateContext*)
								lpCreateStruct->lpCreateParams;
	m_wndSplitter2.CreateView(0,0,RUNTIME_CLASS(CDraw2),CSize(rect.Width(),rect.Height()/2),pContext);
	m_wndSplitter2.CreateView(0,0,RUNTIME_CLASS(CControl2),CSize(rect.Width(),rect.Height()/2),pContext);

	return 0;
}

void CSplitter2::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	m_wndSplitter2.MoveWindow(0,0,cx,cy);
	m_wndSplitter2.SetRowInfo(0,cx-(cy/3),0);
	m_wndSplitter2.SetRowInfo(1,cy/3,20);
	m_wndSplitter2.RecalcLayout();

	
}

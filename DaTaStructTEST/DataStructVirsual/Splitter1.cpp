// Splitter1.cpp : implementation file
//

#include "stdafx.h"
#include "datastructvirsual.h"
#include "Splitter1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#include "Draw1.h"
#include "Control1.h"
/////////////////////////////////////////////////////////////////////////////
// CSplitter1

IMPLEMENT_DYNCREATE(CSplitter1, CView)

CSplitter1::CSplitter1()
{
}

CSplitter1::~CSplitter1()
{
}


BEGIN_MESSAGE_MAP(CSplitter1, CView)
	//{{AFX_MSG_MAP(CSplitter1)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitter1 drawing

void CSplitter1::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CSplitter1 diagnostics

#ifdef _DEBUG
void CSplitter1::AssertValid() const
{
	CView::AssertValid();
}

void CSplitter1::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSplitter1 message handlers

int CSplitter1::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CRect rect;
	GetClientRect(&rect);
	m_wndSplitter1.CreateStatic(this,2,1);
	CCreateContext *pContext = (CCreateContext*)
								lpCreateStruct->lpCreateParams;
	m_wndSplitter1.CreateView(0,0,RUNTIME_CLASS(CDraw1),CSize(rect.Width(),rect.Height()/2),pContext);
	m_wndSplitter1.CreateView(1,0,RUNTIME_CLASS(CControl1),CSize(rect.Width(),rect.Height()/2),pContext);
	return 0;
}

void CSplitter1::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	m_wndSplitter1.MoveWindow(0,0,cx,cy);
	m_wndSplitter1.SetRowInfo(0,cx-(cy/3),0);
	m_wndSplitter1.SetRowInfo(1,cy/3,20);
	m_wndSplitter1.RecalcLayout();
}

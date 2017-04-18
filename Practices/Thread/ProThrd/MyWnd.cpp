// MyWnd.cpp : implementation file
//

#include "stdafx.h"
#include "ProThrd.h"
#include "MyWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyWnd

IMPLEMENT_DYNCREATE(CMyWnd, CFrameWnd)

CMyWnd::CMyWnd()
{
}

CMyWnd::~CMyWnd()
{
}


BEGIN_MESSAGE_MAP(CMyWnd, CFrameWnd)
	//{{AFX_MSG_MAP(CMyWnd)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyWnd message handlers

void CMyWnd::OnLButtonDown(UINT nFlags, CPoint point) 
{
	char* pMessage = "This is a UI thread";
    CWnd* pMainWnd = AfxGetMainWnd( );
    ::MessageBox(NULL,pMessage, "Thread Message", MB_OK);	
	
	CFrameWnd::OnLButtonDown(nFlags, point);
}

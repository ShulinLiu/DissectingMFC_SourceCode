// MFCexp4_10View.cpp : implementation of the CMFCexp4_10View class
//

#include "stdafx.h"
#include "MFCexp4_10.h"

#include "MFCexp4_10Doc.h"
#include "MFCexp4_10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10View

IMPLEMENT_DYNCREATE(CMFCexp4_10View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_10View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_10View)
	ON_WM_CREATE()
	ON_WM_CANCELMODE()
	ON_WM_CAPTURECHANGED()
	ON_WM_LBUTTONDOWN()
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10View construction/destruction

CMFCexp4_10View::CMFCexp4_10View()
{
	// TODO: add construction code here

}

CMFCexp4_10View::~CMFCexp4_10View()
{
}

BOOL CMFCexp4_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10View drawing

void CMFCexp4_10View::OnDraw(CDC* pDC)
{
	CMFCexp4_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10View diagnostics

#ifdef _DEBUG
void CMFCexp4_10View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_10Doc* CMFCexp4_10View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_10Doc)));
	return (CMFCexp4_10Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10View message handlers

int CMFCexp4_10View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	CMetaFileDC metaFileDC;
	metaFileDC.Create();			//创建图元设备环境
	//以下是绘制图元文件的代码
	metaFileDC.Rectangle(20,20,400,200);
	metaFileDC.MoveTo(20,20);
	metaFileDC.LineTo(400,200);
	metaFileDC.MoveTo(400,20);
	metaFileDC.LineTo(20,200);
	m_hMetaFile=metaFileDC.Close();//将图元文件赋予数据成员
	return 0;
}

void CMFCexp4_10View::OnCancelMode() 
{
	CView::OnCancelMode();
	
}

void CMFCexp4_10View::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CView::OnCaptureChanged(pWnd);
}

void CMFCexp4_10View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CClientDC clientDC(this);
	clientDC.PlayMetaFile(m_hMetaFile);//显示图元文件	
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp4_10View::OnDestroy() 
{
	
	CView::OnDestroy();
	::DeleteMetaFile(m_hMetaFile);		//删除图元文件
	
}

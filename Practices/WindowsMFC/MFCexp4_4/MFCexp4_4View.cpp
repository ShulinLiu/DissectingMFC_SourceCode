// MFCexp4_4View.cpp : implementation of the CMFCexp4_4View class
//

#include "stdafx.h"
#include "MFCexp4_4.h"

#include "MFCexp4_4Doc.h"
#include "MFCexp4_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View

IMPLEMENT_DYNCREATE(CMFCexp4_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_4View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CREATE()
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View construction/destruction

CMFCexp4_4View::CMFCexp4_4View()
{
	// TODO: add construction code here

}

CMFCexp4_4View::~CMFCexp4_4View()
{
}

BOOL CMFCexp4_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View drawing

void CMFCexp4_4View::OnDraw(CDC* pDC)
{
	CMFCexp4_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View printing

BOOL CMFCexp4_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp4_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp4_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View diagnostics

#ifdef _DEBUG
void CMFCexp4_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_4Doc* CMFCexp4_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_4Doc)));
	return (CMFCexp4_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View message handlers

void CMFCexp4_4View::OnLButtonDown(UINT nFlags, CPoint point) 
{


//	CClientDC dc(this);		//定义一个CClientDC的对象dc
//	CRect rc;					//定义一个描述矩形的对象rc
//	GetClientRect(&rc);		//获得用户区的尺寸，并存入rc
//	//以下是绘制菱形的代码
//	dc.MoveTo(0,(rc.bottom+rc.top)/2);
//	dc.LineTo((rc.right+rc.left)/2,0);
//	dc.LineTo(rc.right,(rc.bottom+rc.top)/2);
//	dc.LineTo((rc.right+rc.left)/2,rc.bottom);
//	dc.LineTo(0,(rc.bottom+rc.top)/2);	
//	CView::OnLButtonDown(nFlags, point);

	CClientDC clientDC(this);
	clientDC.PlayMetaFile(m_hMetaFile);//显示图元文件	
	CView::OnLButtonDown(nFlags, point);

}

int CMFCexp4_4View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
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
	m_hMetaFile=metaFileDC.Close();//将图元文件赋予数据成员;
	
	return 0;
}

void CMFCexp4_4View::OnDestroy() 
{
	CView::OnDestroy();
	
	::DeleteMetaFile(m_hMetaFile);		//删除图元文件
	
}

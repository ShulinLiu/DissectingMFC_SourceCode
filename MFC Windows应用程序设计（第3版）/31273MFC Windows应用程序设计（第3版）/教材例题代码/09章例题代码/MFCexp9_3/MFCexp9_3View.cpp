// MFCexp9_3View.cpp : implementation of the CMFCexp9_3View class
//

#include "stdafx.h"
#include "MFCexp9_3.h"

#include "MFCexp9_3Doc.h"
#include "MFCexp9_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View

IMPLEMENT_DYNCREATE(CMFCexp9_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_3View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View construction/destruction

CMFCexp9_3View::CMFCexp9_3View()
{
	// TODO: add construction code here

}

CMFCexp9_3View::~CMFCexp9_3View()
{
}

BOOL CMFCexp9_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View drawing

void CMFCexp9_3View::OnDraw(CDC* pDC)
{
	CMFCexp9_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View printing

BOOL CMFCexp9_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View diagnostics

#ifdef _DEBUG
void CMFCexp9_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_3Doc* CMFCexp9_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_3Doc)));
	return (CMFCexp9_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_3View message handlers

void CMFCexp9_3View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CFile file;					//创建文件对象
	BITMAPINFOHEADER bmpinfo;	//定义BITMAPINFOHEADER结构变量
	try
	{
		file.Open("MyBmp.bmp",CFile::modeRead);//打开文件 
		file.Seek(sizeof(BITMAPFILEHEADER),CFile::begin);//移动文件指针
		file.Read(&bmpinfo,sizeof(BITMAPINFOHEADER ));//读取位图文件信息
		CString str;
		str.Format("位图文件的长是%d,高%d",bmpinfo.biWidth,bmpinfo.biHeight);
		MessageBox(str);			//用信息框输出文件信息 
		file.Close( );
	}
	catch(CFileException *e)
	{
		CString str;
		str.Format("读取数据失败的原因是:%d",e->m_cause);
		MessageBox("str");
		file.Abort( );
		e->Delete( );
	}

	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp9_3View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

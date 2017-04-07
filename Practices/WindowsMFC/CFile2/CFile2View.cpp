// CFile2View.cpp : implementation of the CCFile2View class
//

#include "stdafx.h"
#include "CFile2.h"

#include "CFile2Doc.h"
#include "CFile2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCFile2View

IMPLEMENT_DYNCREATE(CCFile2View, CView)

BEGIN_MESSAGE_MAP(CCFile2View, CView)
	//{{AFX_MSG_MAP(CCFile2View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCFile2View construction/destruction

CCFile2View::CCFile2View()
{
	// TODO: add construction code here

}

CCFile2View::~CCFile2View()
{
}

BOOL CCFile2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCFile2View drawing

void CCFile2View::OnDraw(CDC* pDC)
{
	CCFile2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCFile2View printing

BOOL CCFile2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCFile2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCFile2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCFile2View diagnostics

#ifdef _DEBUG
void CCFile2View::AssertValid() const
{
	CView::AssertValid();
}

void CCFile2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCFile2Doc* CCFile2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCFile2Doc)));
	return (CCFile2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCFile2View message handlers

void CCFile2View::OnLButtonDown(UINT nFlags, CPoint point) 
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

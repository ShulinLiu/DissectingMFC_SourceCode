// CFile1View.cpp : implementation of the CCFile1View class
//

#include "stdafx.h"
#include "CFile1.h"

#include "CFile1Doc.h"
#include "CFile1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCFile1View

IMPLEMENT_DYNCREATE(CCFile1View, CView)

BEGIN_MESSAGE_MAP(CCFile1View, CView)
	//{{AFX_MSG_MAP(CCFile1View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCFile1View construction/destruction

CCFile1View::CCFile1View()
{
	// TODO: add construction code here

}

CCFile1View::~CCFile1View()
{
}

BOOL CCFile1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCFile1View drawing

void CCFile1View::OnDraw(CDC* pDC)
{
	CCFile1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCFile1View printing

BOOL CCFile1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCFile1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCFile1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCFile1View diagnostics

#ifdef _DEBUG
void CCFile1View::AssertValid() const
{
	CView::AssertValid();
}

void CCFile1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCFile1Doc* CCFile1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCFile1Doc)));
	return (CCFile1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCFile1View message handlers

void CCFile1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	char* pFileName = "MyFile.txt";
	CFile file( pFileName, 			//文件名
				CFile::modeCreate | 	//创建文件
				CFile::modeWrite		//只写方式
				); 
	try
	{
		file.SeekToBegin( );				//置指针到文件头
		char Data[ ] = "  Hello! \n This is a file.";
		file.Write(Data,sizeof(Data));			//写入文件
		file.Flush( );
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

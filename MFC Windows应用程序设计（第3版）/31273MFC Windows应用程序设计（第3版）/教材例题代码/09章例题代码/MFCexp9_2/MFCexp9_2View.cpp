// MFCexp9_2View.cpp : implementation of the CMFCexp9_2View class
//

#include "stdafx.h"
#include "MFCexp9_2.h"

#include "MFCexp9_2Doc.h"
#include "MFCexp9_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View

IMPLEMENT_DYNCREATE(CMFCexp9_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_2View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View construction/destruction

CMFCexp9_2View::CMFCexp9_2View()
{
	// TODO: add construction code here

}

CMFCexp9_2View::~CMFCexp9_2View()
{
}

BOOL CMFCexp9_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View drawing

void CMFCexp9_2View::OnDraw(CDC* pDC)
{
	CMFCexp9_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View printing

BOOL CMFCexp9_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View diagnostics

#ifdef _DEBUG
void CMFCexp9_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_2Doc* CMFCexp9_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_2Doc)));
	return (CMFCexp9_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2View message handlers

void CMFCexp9_2View::OnLButtonDown(UINT nFlags, CPoint point) 
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
		char Data[ ] = "  Hello!\nThis is a file.";
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

void CMFCexp9_2View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

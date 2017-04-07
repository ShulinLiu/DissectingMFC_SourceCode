// CArchiveView.cpp : implementation of the CCArchiveView class
//

#include "stdafx.h"
#include "CArchive.h"

#include "CArchiveDoc.h"
#include "CArchiveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView

IMPLEMENT_DYNCREATE(CCArchiveView, CView)

BEGIN_MESSAGE_MAP(CCArchiveView, CView)
	//{{AFX_MSG_MAP(CCArchiveView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView construction/destruction

CCArchiveView::CCArchiveView()
{
	// TODO: add construction code here

}

CCArchiveView::~CCArchiveView()
{
}

BOOL CCArchiveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView drawing

void CCArchiveView::OnDraw(CDC* pDC)
{
	CCArchiveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView printing

BOOL CCArchiveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCArchiveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCArchiveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView diagnostics

#ifdef _DEBUG
void CCArchiveView::AssertValid() const
{
	CView::AssertValid();
}

void CCArchiveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCArchiveDoc* CCArchiveView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCArchiveDoc)));
	return (CCArchiveDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCArchiveView message handlers

void CCArchiveView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
		CFile*pFileName=new	CFile(
			"myfile.txt",				//文件名
			CFile::modeCreate | 		//创建文件
			CFile::modeWrite 			//只写方式 
			);

	CArchive SaveArchive(pFileName,	//定义CArchive类对象 
				CArchive::store | CArchive::bNoFlushOnDelete
				);

	SaveArchive<<'H'<<'e'<<'l'<<'l'<<'o'<<','<<'A'<<'c'<<'h'<<'i'<<'v'<<'e'<<'!';
	SaveArchive.Close( );
	pFileName->Close( );
	delete pFileName;

	CView::OnLButtonDown(nFlags, point);
}

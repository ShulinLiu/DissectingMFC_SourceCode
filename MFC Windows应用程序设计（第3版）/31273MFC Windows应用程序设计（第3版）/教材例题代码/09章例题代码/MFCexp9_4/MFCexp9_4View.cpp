// MFCexp9_4View.cpp : implementation of the CMFCexp9_4View class
//

#include "stdafx.h"
#include "MFCexp9_4.h"

#include "MFCexp9_4Doc.h"
#include "MFCexp9_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View

IMPLEMENT_DYNCREATE(CMFCexp9_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_4View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View construction/destruction

CMFCexp9_4View::CMFCexp9_4View()
{
	// TODO: add construction code here

}

CMFCexp9_4View::~CMFCexp9_4View()
{
}

BOOL CMFCexp9_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View drawing

void CMFCexp9_4View::OnDraw(CDC* pDC)
{
	CMFCexp9_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View printing

BOOL CMFCexp9_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View diagnostics

#ifdef _DEBUG
void CMFCexp9_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_4Doc* CMFCexp9_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_4Doc)));
	return (CMFCexp9_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4View message handlers

void CMFCexp9_4View::OnLButtonDown(UINT nFlags, CPoint point) 
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

void CMFCexp9_4View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

// MFCexp9_1View.cpp : implementation of the CMFCexp9_1View class
//

#include "stdafx.h"
#include "MFCexp9_1.h"

#include "MFCexp9_1Doc.h"
#include "MFCexp9_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View

IMPLEMENT_DYNCREATE(CMFCexp9_1View, CView)

BEGIN_MESSAGE_MAP(CMFCexp9_1View, CView)
	//{{AFX_MSG_MAP(CMFCexp9_1View)
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View construction/destruction

CMFCexp9_1View::CMFCexp9_1View()
{
	// TODO: add construction code here

}

CMFCexp9_1View::~CMFCexp9_1View()
{
}

BOOL CMFCexp9_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View drawing

void CMFCexp9_1View::OnDraw(CDC* pDC)
{
	CMFCexp9_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View printing

BOOL CMFCexp9_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCexp9_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCexp9_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View diagnostics

#ifdef _DEBUG
void CMFCexp9_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp9_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp9_1Doc* CMFCexp9_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp9_1Doc)));
	return (CMFCexp9_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1View message handlers

void CMFCexp9_1View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	char* pFileName = "test.txt";
	TRY
	{
		CFile file( pFileName, CFile::modeCreate | CFile::modeWrite );
	}
	CATCH( CFileException, e )
	{
		#ifdef _DEBUG
		afxDump << "File could not be opened " << e->m_cause << "\n";
		#endif
	}
	END_CATCH	
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp9_1View::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here

}

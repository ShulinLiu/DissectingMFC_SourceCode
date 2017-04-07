// SerializeModeView.cpp : implementation of the CSerializeModeView class
//

#include "stdafx.h"
#include "SerializeMode.h"

#include "SerializeModeDoc.h"
#include "SerializeModeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView

IMPLEMENT_DYNCREATE(CSerializeModeView, CView)

BEGIN_MESSAGE_MAP(CSerializeModeView, CView)
	//{{AFX_MSG_MAP(CSerializeModeView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView construction/destruction

CSerializeModeView::CSerializeModeView()
{
	// TODO: add construction code here

}

CSerializeModeView::~CSerializeModeView()
{
}

BOOL CSerializeModeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView drawing

void CSerializeModeView::OnDraw(CDC* pDC)
{
	CSerializeModeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(30,6,pDoc->m_lLetter);
	pDC->TextOut(30,26,pDoc->m_Letters.GetLetter( ));

}

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView printing

BOOL CSerializeModeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSerializeModeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSerializeModeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView diagnostics

#ifdef _DEBUG
void CSerializeModeView::AssertValid() const
{
	CView::AssertValid();
}

void CSerializeModeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSerializeModeDoc* CSerializeModeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSerializeModeDoc)));
	return (CSerializeModeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeView message handlers

void CSerializeModeView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CSerializeModeDoc *pDoc=GetDocument( );
	pDoc->m_lLetter='M'; 
	Invalidate( );
	CView::OnLButtonDown(nFlags, point);
}

void CSerializeModeView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CSerializeModeDoc *pDoc=GetDocument( );
	pDoc->m_Letters.SetLetter('m'); 
	Invalidate( );	
	CView::OnRButtonDown(nFlags, point);
}

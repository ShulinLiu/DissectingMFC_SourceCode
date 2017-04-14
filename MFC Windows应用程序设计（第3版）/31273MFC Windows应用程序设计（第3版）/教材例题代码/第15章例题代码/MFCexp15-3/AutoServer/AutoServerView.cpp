// AutoServerView.cpp : implementation of the CAutoServerView class
//

#include "stdafx.h"
#include "AutoServer.h"

#include "AutoServerDoc.h"
#include "AutoServerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAutoServerView

IMPLEMENT_DYNCREATE(CAutoServerView, CView)

BEGIN_MESSAGE_MAP(CAutoServerView, CView)
	//{{AFX_MSG_MAP(CAutoServerView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAutoServerView construction/destruction

CAutoServerView::CAutoServerView()
{
	// TODO: add construction code here

}

CAutoServerView::~CAutoServerView()
{
}

BOOL CAutoServerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAutoServerView drawing

void CAutoServerView::OnDraw(CDC* pDC)
{
	CAutoServerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->Ellipse(pDoc->m_xPos,pDoc->m_yPos,
		pDoc->m_diameter+pDoc->m_xPos,
		pDoc->m_diameter+pDoc->m_yPos);

}

/////////////////////////////////////////////////////////////////////////////
// CAutoServerView diagnostics

#ifdef _DEBUG
void CAutoServerView::AssertValid() const
{
	CView::AssertValid();
}

void CAutoServerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAutoServerDoc* CAutoServerView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAutoServerDoc)));
	return (CAutoServerDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAutoServerView message handlers

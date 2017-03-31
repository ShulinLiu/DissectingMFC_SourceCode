// MFCexp8_2View.cpp : implementation of the CMFCexp8_2View class
//

#include "stdafx.h"
#include "MFCexp8_2.h"

#include "MFCexp8_2Doc.h"
#include "MFCexp8_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2View

IMPLEMENT_DYNCREATE(CMFCexp8_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp8_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp8_2View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2View construction/destruction

CMFCexp8_2View::CMFCexp8_2View()
{
	// TODO: add construction code here

}

CMFCexp8_2View::~CMFCexp8_2View()
{
}

BOOL CMFCexp8_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2View drawing

void CMFCexp8_2View::OnDraw(CDC* pDC)
{
	CMFCexp8_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(pDoc->m_Bitmap);
	pDC->BitBlt(0,0,pDoc->m_nWidth,pDoc->m_nHeight,&MemDC,0,0,SRCCOPY);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2View diagnostics

#ifdef _DEBUG
void CMFCexp8_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp8_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp8_2Doc* CMFCexp8_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp8_2Doc)));
	return (CMFCexp8_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2View message handlers

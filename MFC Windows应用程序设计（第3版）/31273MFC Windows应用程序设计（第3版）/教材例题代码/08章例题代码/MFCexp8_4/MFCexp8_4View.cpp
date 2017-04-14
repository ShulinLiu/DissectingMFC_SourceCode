// MFCexp8_4View.cpp : implementation of the CMFCexp8_4View class
//

#include "stdafx.h"
#include "MFCexp8_4.h"

#include "MFCexp8_4Doc.h"
#include "MFCexp8_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4View

IMPLEMENT_DYNCREATE(CMFCexp8_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp8_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp8_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4View construction/destruction

CMFCexp8_4View::CMFCexp8_4View()
{
	// TODO: add construction code here

}

CMFCexp8_4View::~CMFCexp8_4View()
{
}

BOOL CMFCexp8_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4View drawing

void CMFCexp8_4View::OnDraw(CDC* pDC)
{
	CMFCexp8_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(pDoc->m_Bitmap);
	pDC->BitBlt(0,0,pDoc->m_nWidth,pDoc->m_nHeight,&MemDC,0,0,SRCCOPY);

}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4View diagnostics

#ifdef _DEBUG
void CMFCexp8_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp8_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp8_4Doc* CMFCexp8_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp8_4Doc)));
	return (CMFCexp8_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4View message handlers

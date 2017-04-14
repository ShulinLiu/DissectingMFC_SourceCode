// MFCexp4_7View.cpp : implementation of the CMFCexp4_7View class
//

#include "stdafx.h"
#include "MFCexp4_7.h"

#include "MFCexp4_7Doc.h"
#include "MFCexp4_7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_7View

IMPLEMENT_DYNCREATE(CMFCexp4_7View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_7View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_7View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_7View construction/destruction

CMFCexp4_7View::CMFCexp4_7View()
{
	// TODO: add construction code here

}

CMFCexp4_7View::~CMFCexp4_7View()
{
}

BOOL CMFCexp4_7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_7View drawing

void CMFCexp4_7View::OnDraw(CDC* pDC)
{
	CMFCexp4_7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	for(int s=0;s<5;s++)
	{
		pDC->SetTextCharacterExtra(s*4);
		pDC->TextOut(20,20+s*20,"文本字符的间距");
	}
}


/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_7View diagnostics

#ifdef _DEBUG
void CMFCexp4_7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_7Doc* CMFCexp4_7View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_7Doc)));
	return (CMFCexp4_7Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_7View message handlers

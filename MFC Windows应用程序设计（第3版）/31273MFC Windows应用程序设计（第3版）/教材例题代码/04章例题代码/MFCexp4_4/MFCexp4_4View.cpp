// MFCexp4_4View.cpp : implementation of the CMFCexp4_4View class
//

#include "stdafx.h"
#include "MFCexp4_4.h"

#include "MFCexp4_4Doc.h"
#include "MFCexp4_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View

IMPLEMENT_DYNCREATE(CMFCexp4_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp4_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp4_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View construction/destruction

CMFCexp4_4View::CMFCexp4_4View()
{
	// TODO: add construction code here

}

CMFCexp4_4View::~CMFCexp4_4View()
{
}

BOOL CMFCexp4_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View drawing

void CMFCexp4_4View::OnDraw(CDC* pDC)
{
	CMFCexp4_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	int red=0,green=0,blue=0;
	int row=20;
	for(int s=0;s<6;s++)
	{
		int clr=RGB(red,green,blue);
		CBrush newBrush(clr);
		CBrush*oldBrush=pDC->SelectObject(&newBrush);
		pDC->Rectangle(20,row,200,row+20);
		pDC->SelectObject(oldBrush);
		red+=34;green+=16;blue+=4;
		row+=30;
	}
	int styles[]={	HS_BDIAGONAL,HS_CROSS,HS_DIAGCROSS,HS_FDIAGONAL,HS_HORIZONTAL,HS_VERTICAL};
	row=20;
	for( s=0;s<6;s++)
	{
		CBrush newBrush(styles[s],RGB(0,0,0));
		CBrush*oldBrush=pDC->SelectObject(&newBrush);
		pDC->Rectangle(220,row,400,row+20);
		pDC->SelectObject(oldBrush);
		row+=30;
	}
}


/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View diagnostics

#ifdef _DEBUG
void CMFCexp4_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp4_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp4_4Doc* CMFCexp4_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp4_4Doc)));
	return (CMFCexp4_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4View message handlers

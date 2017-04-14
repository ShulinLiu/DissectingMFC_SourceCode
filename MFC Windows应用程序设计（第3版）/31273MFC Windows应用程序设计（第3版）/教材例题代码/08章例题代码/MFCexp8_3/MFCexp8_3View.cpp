// MFCexp8_3View.cpp : implementation of the CMFCexp8_3View class
//

#include "stdafx.h"
#include "MFCexp8_3.h"

#include "MFCexp8_3Doc.h"
#include "MFCexp8_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_3View

IMPLEMENT_DYNCREATE(CMFCexp8_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp8_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp8_3View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
			ON_COMMAND(ID_XUANX1,OnXuanx1)
    ON_UPDATE_COMMAND_UI(ID_XUANX1, OnUpdateXuanx1)
	ON_COMMAND(ID_XUANX2,OnXuanx2)
	ON_UPDATE_COMMAND_UI(ID_XUANX2, OnUpdateXuanx2)
	ON_COMMAND(ID_XUANX3,OnXuanx3)
	ON_UPDATE_COMMAND_UI(ID_XUANX3, OnUpdateXuanx3)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_3View construction/destruction

CMFCexp8_3View::CMFCexp8_3View()
{
	// TODO: add construction code here
	m_nOption1=0; m_nOption2=0; m_nOption3=0;
}

CMFCexp8_3View::~CMFCexp8_3View()
{
}

BOOL CMFCexp8_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_3View drawing

void CMFCexp8_3View::OnDraw(CDC* pDC)
{
	CMFCexp8_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_3View diagnostics

#ifdef _DEBUG
void CMFCexp8_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp8_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp8_3Doc* CMFCexp8_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp8_3Doc)));
	return (CMFCexp8_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_3View message handlers
void CMFCexp8_3View::OnXuanx1()
{
	m_nOption1=!m_nOption1;
}
void CMFCexp8_3View::OnUpdateXuanx1(CCmdUI*pCmdUI)
{
	pCmdUI->SetCheck(m_nOption1);
}
void CMFCexp8_3View::OnXuanx2()
{
	m_nOption2=!m_nOption2;
}
void CMFCexp8_3View::OnUpdateXuanx2(CCmdUI*pCmdUI)
{
	pCmdUI->SetCheck(m_nOption2);
}

void CMFCexp8_3View::OnXuanx3()
{
	m_nOption3=!m_nOption3;
}
void CMFCexp8_3View::OnUpdateXuanx3(CCmdUI*pCmdUI)
{
	pCmdUI->SetCheck(m_nOption3);
}

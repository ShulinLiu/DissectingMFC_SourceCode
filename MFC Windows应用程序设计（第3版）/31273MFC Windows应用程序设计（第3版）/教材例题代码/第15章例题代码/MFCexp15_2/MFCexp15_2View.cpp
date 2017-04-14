// MFCexp15_2View.cpp : implementation of the CMFCexp15_2View class
//

#include "stdafx.h"
#include "MFCexp15_2.h"

#include "MFCexp15_2Doc.h"
#include "MFCexp15_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2View

IMPLEMENT_DYNCREATE(CMFCexp15_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp15_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp15_2View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	ON_COMMAND(ID_CANCEL_EDIT_SRVR, OnCancelEditSrvr)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2View construction/destruction

CMFCexp15_2View::CMFCexp15_2View()
{
	// TODO: add construction code here

}

CMFCexp15_2View::~CMFCexp15_2View()
{
}

BOOL CMFCexp15_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2View drawing

void CMFCexp15_2View::OnDraw(CDC* pDC)
{
	CMFCexp15_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// OLE Server support

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the server (not the container) causes the deactivation.
void CMFCexp15_2View::OnCancelEditSrvr()
{
	GetDocument()->OnDeactivateUI(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2View diagnostics

#ifdef _DEBUG
void CMFCexp15_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp15_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp15_2Doc* CMFCexp15_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp15_2Doc)));
	return (CMFCexp15_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2View message handlers

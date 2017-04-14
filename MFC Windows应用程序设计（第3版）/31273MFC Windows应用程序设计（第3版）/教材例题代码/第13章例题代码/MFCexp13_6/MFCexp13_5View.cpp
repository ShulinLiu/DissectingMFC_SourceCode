// MFCexp13_5View.cpp : implementation of the CMFCexp13_5View class
//

#include "stdafx.h"
#include "MFCexp13_5.h"

#include "MFCexp13_5Doc.h"
#include "MFCexp13_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5View

IMPLEMENT_DYNCREATE(CMFCexp13_5View, CView)

BEGIN_MESSAGE_MAP(CMFCexp13_5View, CView)
	//{{AFX_MSG_MAP(CMFCexp13_5View)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5View construction/destruction

CMFCexp13_5View::CMFCexp13_5View()
{
	// TODO: add construction code here

}

CMFCexp13_5View::~CMFCexp13_5View()
{
}

BOOL CMFCexp13_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5View drawing

void CMFCexp13_5View::OnDraw(CDC* pDC)
{
	CMFCexp13_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5View diagnostics

#ifdef _DEBUG
void CMFCexp13_5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp13_5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp13_5Doc* CMFCexp13_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp13_5Doc)));
	return (CMFCexp13_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5View message handlers

void CMFCexp13_5View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	typedef void ( TESTDLL)();
	HINSTANCE hDllInst;
	hDllInst = ::LoadLibrary ("MFCexp13_3dll.dll");
	if(hDllInst==NULL)
	{
		AfxMessageBox("Fail");
	}
	TESTDLL* lpproc;
	lpproc = (TESTDLL*)GetProcAddress (hDllInst,"ShowMsg");
	if(lpproc!=(TESTDLL*)NULL)
		(*lpproc)( );
	FreeLibrary(hDllInst);
	
	CView::OnLButtonDown(nFlags, point);
}

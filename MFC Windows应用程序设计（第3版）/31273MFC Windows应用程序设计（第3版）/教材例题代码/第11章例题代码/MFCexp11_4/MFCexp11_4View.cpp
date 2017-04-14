// MFCexp11_4View.cpp : implementation of the CMFCexp11_4View class
//

#include "stdafx.h"
#include "MFCexp11_4.h"

#include "MFCexp11_4Doc.h"
#include "MFCexp11_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "afxdlgs.h"

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4View

IMPLEMENT_DYNCREATE(CMFCexp11_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp11_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp11_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4View construction/destruction

CMFCexp11_4View::CMFCexp11_4View()
{
	// TODO: add construction code here

}

CMFCexp11_4View::~CMFCexp11_4View()
{
}

BOOL CMFCexp11_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4View drawing

void CMFCexp11_4View::OnDraw(CDC* pDC)
{
	CMFCexp11_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4View diagnostics

#ifdef _DEBUG
void CMFCexp11_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp11_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp11_4Doc* CMFCexp11_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp11_4Doc)));
	return (CMFCexp11_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4View message handlers
void CMFCexp11_4View::OnLButtonDown(UINT nFlags, 
CPoint point) 
{
	char*filters="Word文档(*.doc)|*.doc|位图(*.bmp)|*.bmp|全部文件(*.*)|*.*";
	CFileDialog fileDlg(TRUE,NULL,"*.doc",NULL,filters);
	int result=fileDlg.DoModal();
	if(result=IDOK)
		m_openfileName=fileDlg.GetFileName();
	CView::OnLButtonDown(nFlags, point);
}

void CMFCexp11_4View::OnRButtonDown(UINT nFlags, 
CPoint point) 
{
	char*filters="Word文档(*.doc)|*.doc|位图(*.bmp)|*.bmp|全部文件(*.*)|*.*";
	CFileDialog fileDlg(FALSE,NULL,"*.doc",
OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,filters);
	int result=fileDlg.DoModal();
	if(result=IDOK)
		m_saveFileName = fileDlg.GetFileName();
	CView::OnRButtonDown(nFlags, point);
}

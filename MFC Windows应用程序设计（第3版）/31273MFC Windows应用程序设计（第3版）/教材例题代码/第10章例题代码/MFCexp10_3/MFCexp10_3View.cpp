// MFCexp10_3View.cpp : implementation of the CMFCexp10_3View class
//

#include "stdafx.h"
#include "MFCexp10_3.h"

#include "MFCexp10_3Doc.h"
#include "MFCexp10_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_3View

IMPLEMENT_DYNCREATE(CMFCexp10_3View, CView)

BEGIN_MESSAGE_MAP(CMFCexp10_3View, CView)
	//{{AFX_MSG_MAP(CMFCexp10_3View)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
	ON_EN_MAXTEXT(IDC_EDIT1,OnMaxText)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_3View construction/destruction

CMFCexp10_3View::CMFCexp10_3View()
{
	// TODO: add construction code here

}

CMFCexp10_3View::~CMFCexp10_3View()
{
}

BOOL CMFCexp10_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_3View drawing

void CMFCexp10_3View::OnDraw(CDC* pDC)
{
	CMFCexp10_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_3View diagnostics

#ifdef _DEBUG
void CMFCexp10_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp10_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp10_3Doc* CMFCexp10_3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp10_3Doc)));
	return (CMFCexp10_3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_3View message handlers
//Create消息响应函数
int CMFCexp10_3View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
			return -1;	
	m_Edit1.Create(WS_CHILD|WS_VISIBLE|WS_BORDER|ES_LEFT|
					ES_WANTRETURN|ES_MULTILINE,
					CRect(20,20,100,80),this,IDC_EDIT1);
	return 0;
}

//编辑控件的消息响应函数
void CMFCexp10_3View::OnMaxText()
{
	MessageBox("字符数超了！");
}


// MFCexp10_2View.cpp : implementation of the CMFCexp10_2View class
//

#include "stdafx.h"
#include "MFCexp10_2.h"

#include "MFCexp10_2Doc.h"
#include "MFCexp10_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_2View

IMPLEMENT_DYNCREATE(CMFCexp10_2View, CView)

BEGIN_MESSAGE_MAP(CMFCexp10_2View, CView)
	//{{AFX_MSG_MAP(CMFCexp10_2View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
		ON_WM_CREATE( )
		ON_BN_CLICKED(IDB_BUTTON1,OnButton1Clicked)
		ON_BN_CLICKED(IDB_BUTTON2,OnButton2Clicked)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_2View construction/destruction

CMFCexp10_2View::CMFCexp10_2View()
{
	// TODO: add construction code here

}

CMFCexp10_2View::~CMFCexp10_2View()
{
}

BOOL CMFCexp10_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_2View drawing

void CMFCexp10_2View::OnDraw(CDC* pDC)
{
	CMFCexp10_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_2View diagnostics

#ifdef _DEBUG
void CMFCexp10_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp10_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp10_2Doc* CMFCexp10_2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp10_2Doc)));
	return (CMFCexp10_2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_2View message handlers
int CMFCexp10_2View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
		if (CView::OnCreate(lpCreateStruct) == -1)
			return -1;
		m_Button1.Create("Button1",           	//普通按钮
			WS_CHILD|BS_PUSHBUTTON|WS_VISIBLE|WS_BORDER,
			CRect(20,20,100,60),this,IDB_BUTTON1);
		m_Button2.Create("Button2",				//复选框
			WS_CHILD|BS_CHECKBOX|WS_VISIBLE,
			CRect(120,20,200,60),this,IDB_BUTTON2);
		m_GroupBox.Create("Radio Buttons",		//成组框
			BS_GROUPBOX|WS_CHILD|WS_VISIBLE,
			CRect(20,80,200,220),this,0);
		m_radioButton1.Create("Radio1",			//单选钮1
			BS_AUTORADIOBUTTON|WS_CHILD|WS_VISIBLE|WS_GROUP,
			CRect(55,100,150,120),this,IDB_RADIOBUTTON1);
		m_radioButton2.Create("Radio2",			//单选钮2
			BS_AUTORADIOBUTTON|WS_CHILD|WS_VISIBLE,
			CRect(55,140,150,160),this,IDB_RADIOBUTTON2);
		m_radioButton3.Create("Radio3",			//单选钮3
			BS_AUTORADIOBUTTON|WS_CHILD|WS_VISIBLE,
			CRect(55,180,150,200),this,IDB_RADIOBUTTON3);
		return 0;
}
//普通按钮的消息响应函数
void CMFCexp10_2View::OnButton1Clicked( )
{
	MessageBox("This is a PushButton!");
}
//复选框的消息响应函数
void CMFCexp10_2View::OnButton2Clicked( )
{
	int checked=m_Button2.GetCheck( );
	if(checked==BST_CHECKED)
	{
		m_Button2.SetCheck(!checked);
		MessageBox("Button2 unchecked!");
	}
	else if(checked==BST_UNCHECKED)
	{
		m_Button2.SetCheck(!checked);
		MessageBox("Button2 checked!");
	}
}

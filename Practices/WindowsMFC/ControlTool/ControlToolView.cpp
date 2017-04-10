// ControlToolView.cpp : implementation of the CControlToolView class
//

#include "stdafx.h"
#include "ControlTool.h"

#include "ControlToolDoc.h"
#include "ControlToolView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CControlToolView

IMPLEMENT_DYNCREATE(CControlToolView, CView)

BEGIN_MESSAGE_MAP(CControlToolView, CView)
	//{{AFX_MSG_MAP(CControlToolView)
	ON_WM_CREATE()
	ON_BN_CLICKED(IDB_BUTTON1,OnButton1Clicked)
	ON_BN_CLICKED(IDB_BUTTON2,OnButton2Clicked)

	ON_EN_MAXTEXT(IDC_EDIT1,OnMaxText)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CControlToolView construction/destruction

CControlToolView::CControlToolView()
{
	// TODO: add construction code here

}

CControlToolView::~CControlToolView()
{
}

BOOL CControlToolView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CControlToolView drawing

void CControlToolView::OnDraw(CDC* pDC)
{
	CControlToolDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CControlToolView printing

BOOL CControlToolView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CControlToolView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CControlToolView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CControlToolView diagnostics

#ifdef _DEBUG
void CControlToolView::AssertValid() const
{
	CView::AssertValid();
}

void CControlToolView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CControlToolDoc* CControlToolView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CControlToolDoc)));
	return (CControlToolDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CControlToolView message handlers

int CControlToolView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
/*	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	m_Static1.Create("Static1",WS_CHILD|WS_VISIBLE|SS_CENTER,
					CRect(20,20,100,40),this,0);
	m_Static2.Create("Static2",WS_CHILD|WS_VISIBLE,
					CRect(20,60,100,80),this,0);
	m_Static3.Create("Static3",WS_CHILD|WS_VISIBLE|SS_RIGHT,
					CRect(20,100,100,120),this,0);
	m_Static4.Create("Static4",
				WS_CHILD|WS_VISIBLE|SS_CENTER|SS_SIMPLE,
				CRect(120,20,200,40),this,0);
	m_Static5.Create("Static5",WS_CHILD|WS_VISIBLE|SS_BLACKRECT,
				CRect(120,60,200,80),this,0);
	m_Static6.Create("Static6&S",WS_CHILD|WS_VISIBLE|SS_NOPREFIX ,
				CRect(120,100,200,120),this,0);
	return 0;	

  */
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

	m_Edit1.Create(WS_CHILD|WS_VISIBLE|WS_BORDER|ES_LEFT|
					ES_WANTRETURN|ES_MULTILINE,
					CRect(250,250,330,310),this,IDC_EDIT1);

		return 0;
}



void CControlToolView::OnButton1Clicked()
{
	MessageBox("This is a PushButton!");
}
void CControlToolView::OnButton2Clicked()
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


//编辑控件的消息响应函数
void CControlToolView::OnMaxText()
{
	MessageBox("字符数超了！");
}

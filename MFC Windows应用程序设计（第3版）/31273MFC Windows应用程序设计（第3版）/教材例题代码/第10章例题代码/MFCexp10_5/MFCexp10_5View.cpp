// MFCexp10_5View.cpp : implementation of the CMFCexp10_5View class
//

#include "stdafx.h"
#include "MFCexp10_5.h"

#include "MFCexp10_5Doc.h"
#include "MFCexp10_5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_5View

IMPLEMENT_DYNCREATE(CMFCexp10_5View, CView)

BEGIN_MESSAGE_MAP(CMFCexp10_5View, CView)
	//{{AFX_MSG_MAP(CMFCexp10_5View)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_BIGICON,OnBigIcon)
	ON_COMMAND(ID_SMLICON,OnSmlIcon)
	ON_COMMAND(ID_LIST,OnList)
	ON_COMMAND(ID_REPORT,OnReport)
	ON_NOTIFY(NM_DBLCLK, IDC_LISTVIEW, OnListViewDblClk)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_5View construction/destruction

CMFCexp10_5View::CMFCexp10_5View()
{
	// TODO: add construction code here

}

CMFCexp10_5View::~CMFCexp10_5View()
{
}

BOOL CMFCexp10_5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_5View drawing

void CMFCexp10_5View::OnDraw(CDC* pDC)
{
	CMFCexp10_5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_5View diagnostics

#ifdef _DEBUG
void CMFCexp10_5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp10_5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp10_5Doc* CMFCexp10_5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp10_5Doc)));
	return (CMFCexp10_5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_5View message handlers

int CMFCexp10_5View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	InitListView( );			//调用初始化列表视图控件的函数		
	return 0;
}
void CMFCexp10_5View::InitListView( )
{
	//创建图像列表控件
    m_lrgImageList.Create(32, 32, ILC_COLOR4, 1, 0);	//小图像列表
    m_smlImageList.Create(16, 16, ILC_COLOR4, 1, 0); //大图像列表
    HICON hIcon = ::LoadIcon (AfxGetResourceHandle( ),
        MAKEINTRESOURCE(IDI_ICON1));			//获得大图标句柄
    m_lrgImageList.Add(hIcon);						//将图标加入列表控件
    hIcon = ::LoadIcon (AfxGetResourceHandle( ),
        MAKEINTRESOURCE(IDI_ICON2));			//获得小图标句柄
    m_smlImageList.Add(hIcon);						//将图标加入列表控件
	// Create the List-view control.
    m_listView.Create(WS_VISIBLE | WS_CHILD | WS_BORDER |
        LVS_ICON | LVS_NOSORTHEADER,
        CRect(20, 40, 250, 220), this, IDC_LISTVIEW);	//创建列表视图控件
    m_listView.SetImageList(&m_smlImageList,		
		LVSIL_SMALL);         //设置列表视图控件选项的小图标
    m_listView.SetImageList(&m_lrgImageList,
		LVSIL_NORMAL);		//设置列表视图控件选项的大图标
	CreateListColumns( );				//调用函数创建列表视图控件的列
	AddListItems( );					//调用函数在列表视图中添加项目
}
void CMFCexp10_5View::CreateListColumns( )
{
    LV_COLUMN lvColumn;
    lvColumn.mask = LVCF_WIDTH | LVCF_TEXT |
		LVCF_FMT | LVCF_SUBITEM;
    lvColumn.fmt = LVCFMT_CENTER;
    lvColumn.cx = 75;
    lvColumn.iSubItem = 0;
    lvColumn.pszText = "Column 0";
    m_listView.InsertColumn(0, &lvColumn);//插入列0

    lvColumn.iSubItem = 1;
    lvColumn.pszText = "Column 1";
    m_listView.InsertColumn(1, &lvColumn); //插入列1

    lvColumn.iSubItem = 2;
    lvColumn.pszText = "Column 2";
    m_listView.InsertColumn(2, &lvColumn); //插入列2
}
void CMFCexp10_5View::AddListItems( )
{
    LV_ITEM lvItem;
    lvItem.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_STATE;
    lvItem.state = 0;      
    lvItem.stateMask = 0;  
    lvItem.iImage = 0;

    lvItem.iItem = 0;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 1";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(0, 1, "SubItem");
    m_listView.SetItemText(0, 2, "SubItem");

    lvItem.iItem = 1;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 2";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(1, 1, "SubItem");
    m_listView.SetItemText(1, 2, "SubItem");

    lvItem.iItem = 2;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 3";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(2, 1, "SubItem");
    m_listView.SetItemText(2, 2, "SubItem");

    lvItem.iItem = 3;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 4";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(3, 1, "SubItem");
    m_listView.SetItemText(3, 2, "SubItem");

    lvItem.iItem = 4;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 5";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(4, 1, "SubItem");
    m_listView.SetItemText(4, 2, "SubItem");

    lvItem.iItem = 5;
    lvItem.iSubItem = 0;
    lvItem.pszText = "Main Item 6";
    m_listView.InsertItem(&lvItem);
    m_listView.SetItemText(5, 1, "SubItem");
    m_listView.SetItemText(5, 2, "SubItem");
}
void CMFCexp10_5View::OnBigIcon( )
{
	SetWindowLong(m_listView.m_hWnd, GWL_STYLE,
    WS_VISIBLE | WS_CHILD | WS_BORDER | LVS_ICON);
}
void CMFCexp10_5View::OnSmlIcon( )
{
	SetWindowLong(m_listView.m_hWnd, GWL_STYLE,
    WS_CHILD | WS_VISIBLE | WS_BORDER | LVS_SMALLICON);
}
void CMFCexp10_5View::OnList( )
{
	SetWindowLong(m_listView.m_hWnd, GWL_STYLE,
    	WS_CHILD | WS_VISIBLE | WS_BORDER |	LVS_LIST);
}
void CMFCexp10_5View::OnReport( )
{
	SetWindowLong(m_listView.m_hWnd, GWL_STYLE,
	WS_CHILD | WS_VISIBLE | WS_BORDER | LVS_REPORT);
}
void CMFCexp10_5View::OnListViewDblClk
    (NMHDR* pNMHDR, LRESULT* pResult)
{
	int index =m_listView.GetNextItem(-1, LVNI_SELECTED);
	if (index != -1)
	{
	CString str = "NAME:\t" +m_listView.GetItemText(index, 0);
	str += "\nID:\t" +m_listView.GetItemText(index, 1);
	str += "\nAGE:\t"+ m_listView.GetItemText(index, 2);
	str += "\nGENDER: "+ m_listView.GetItemText(index, 3);
	MessageBox(str);
	}
}

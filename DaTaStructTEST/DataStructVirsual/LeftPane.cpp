// LeftPane.cpp : implementation file
//

#include "stdafx.h"
#include "DataStructVirsual.h"
#include "LeftPane.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLeftPane

IMPLEMENT_DYNCREATE(CLeftPane, CFormView)

CLeftPane::CLeftPane()
	: CFormView(CLeftPane::IDD)
{
	//{{AFX_DATA_INIT(CLeftPane)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CLeftPane::~CLeftPane()
{
}

void CLeftPane::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLeftPane)
	DDX_Control(pDX, IDC_LEFTPANE_TREE, m_LeftTree);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLeftPane, CFormView)
	//{{AFX_MSG_MAP(CLeftPane)
	ON_WM_SIZE()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLeftPane diagnostics

#ifdef _DEBUG
void CLeftPane::AssertValid() const
{
	CFormView::AssertValid();
}

void CLeftPane::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLeftPane message handlers

void CLeftPane::OnInitialUpdate() 
{
	CFormView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	CRect rect;
	GetClientRect(&rect);
	if (rect.right - rect.left > 0)
	{
		m_sRect.left = rect.left + 10;
		m_sRect.right = rect.right - 10;
	}
	else
	{
		m_sRect.left = rect.left;
		m_sRect.right = rect.right;
	}
	m_sRect.top = rect.top + 10;
	m_sRect.bottom = rect.bottom - 10;
	m_LeftTree.MoveWindow(m_sRect);

	//加节点
	m_LeftTree.MoveWindow(m_sRect);
	InitTree();
}

void CLeftPane::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class


	CFormView::CalcWindowRect(lpClientRect, nAdjustType);
}

void CLeftPane::OnSize(UINT nType, int cx, int cy) 
{
	CFormView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	if (::IsWindow(m_LeftTree.m_hWnd))
	{
		CRect rect;
		GetClientRect(&rect);
		
		if (rect.right - rect.left > 0)
		{
			m_sRect.left = rect.left + 10;
			m_sRect.right = rect.right - 10;
		}
		else
		{
			m_sRect.left = rect.left;
			m_sRect.right = rect.right;
		}
		m_sRect.top = rect.top + 10;
		m_sRect.bottom = rect.bottom - 10;
		m_LeftTree.MoveWindow(m_sRect);
	}
	
}

void CLeftPane::OnCancelMode() 
{
	CFormView::OnCancelMode();
	
	// TODO: Add your message handler code here

}

void CLeftPane::InitTree()
{
	LPSTR pszText;
	m_TreeImageList.Create(16,16,TRUE,6,1);
	HICON hIcon;
	hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDC_ICON));
	m_TreeImageList.Add(hIcon);
	hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDC_ICON));
	m_TreeImageList.Add(hIcon);
	hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDC_ICON));
	m_TreeImageList.Add(hIcon);
	hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDC_ICON));
	m_TreeImageList.Add(hIcon);
	hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDC_ICON));
	m_TreeImageList.Add(hIcon);
	m_LeftTree.SetImageList(&m_TreeImageList,TVSIL_NORMAL);
	///////////////////////在树视图控件添加信息///////////////////////////////
	m_LeftTree.DeleteAllItems();						//清空当前书控件所有节点
	m_Root = m_LeftTree.InsertItem("动态切换图") ;		//插入根节点
	TV_INSERTSTRUCT TCItem;

	TCItem.item.mask = TVIF_TEXT|TVIF_PARAM|TVIF_IMAGE|TVIF_SELECTEDIMAGE;
	TCItem.hInsertAfter = TVI_LAST;						//在最后项之后

	CString strTreeNodeName = "测试一";
	pszText = strTreeNodeName.LockBuffer();
	TCItem.hParent = m_Root;
	TCItem.item.pszText = pszText;
	TCItem.item.iImage = 1;
	TCItem.item.iSelectedImage = 2;
	HTREEITEM hCurrent = m_LeftTree.InsertItem(&TCItem);
	m_LeftTree.SetItemData(hCurrent,1);

	strTreeNodeName = "测试二";
	pszText = strTreeNodeName.LockBuffer();
	TCItem.hParent = m_Root;
	TCItem.item.pszText = pszText;
	TCItem.item.iImage = 1;
	TCItem.item.iSelectedImage = 2;
	hCurrent = m_LeftTree.InsertItem(&TCItem);
	m_LeftTree.SetItemData(hCurrent,2);

	strTreeNodeName = "测试三";
	pszText = strTreeNodeName.LockBuffer();
	TCItem.hParent = m_Root;
	TCItem.item.pszText = pszText;
	TCItem.item.iImage = 1;
	TCItem.item.iSelectedImage = 2;
	hCurrent = m_LeftTree.InsertItem(&TCItem);
	m_LeftTree.SetItemData(hCurrent,3);

	m_LeftTree.Expand(m_Root,TVE_EXPAND);			//展开根节点
}

//DEL void CLeftPane::OnSelchangedLeftpaneTree(NMHDR* pNMHDR, LRESULT* pResult) 
//DEL {
//DEL 	NM_TREEVIEW* pNMTreeView = (NM_TREEVIEW*)pNMHDR;
//DEL 	// TODO: Add your control notification handler code here
//DEL 	
//DEL 	int nIndex = -1;
//DEL 	UINT nView;
//DEL 	nIndex = m_LeftTree.GetItemData(m_LeftTree.GetSelectedItem());
//DEL 	switch(nIndex)
//DEL 	{
//DEL 	case 1:
//DEL 		nView = VIEW_SPLITTER1;
//DEL 		break;
//DEL 	case 2:
//DEL 		nView = VIEW_SPLITTER2;
//DEL 		break;
//DEL 	default:
//DEL 		break;
//DEL 	}
//DEL 	m_pRightFrame->SwitchToView(nView);
//DEL 	*pResult = 0;
//DEL }

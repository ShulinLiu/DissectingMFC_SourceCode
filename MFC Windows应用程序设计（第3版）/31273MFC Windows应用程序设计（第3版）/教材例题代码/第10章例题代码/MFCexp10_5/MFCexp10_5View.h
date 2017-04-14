// MFCexp10_5View.h : interface of the CMFCexp10_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_5VIEW_H__51BE7012_4BEC_43E9_BBFC_EB40E8ABDD76__INCLUDED_)
#define AFX_MFCEXP10_5VIEW_H__51BE7012_4BEC_43E9_BBFC_EB40E8ABDD76__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_5View : public CView
{
protected: // create from serialization only
	CMFCexp10_5View();
	DECLARE_DYNCREATE(CMFCexp10_5View)

// Attributes
public:
	CMFCexp10_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CImageList m_lrgImageList;		//声明小图标列表控件
	CImageList m_smlImageList;		//声明大图标列表控件
	void InitListView( );			//声明列表控件的初始化函数
	CListCtrl m_listView;			//声明列表视图控件
	void CreateListColumns( );		//声明向列表视图控件添加列的函数
	void AddListItems( );			//声明向列表视图控件添加项目的函数
	afx_msg void OnBigIcon( );		//菜单"大图标"选项的消息处理函数
	afx_msg void OnSmlIcon( );		//菜单"小图标"选项的消息处理函数
	afx_msg void OnList( );			//菜单"列表"选项的消息处理函数
	afx_msg void OnReport( );		//菜单"报告"选项的消息处理函数
	//双击列表控件中项目图标的消息处理函数
	afx_msg void OnListViewDblClk(NMHDR* pNMHDR, LRESULT* pResult);

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_5View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp10_5View.cpp
inline CMFCexp10_5Doc* CMFCexp10_5View::GetDocument()
   { return (CMFCexp10_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_5VIEW_H__51BE7012_4BEC_43E9_BBFC_EB40E8ABDD76__INCLUDED_)

// MFCexp10_3View.h : interface of the CMFCexp10_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_3VIEW_H__365536BE_1355_470B_ABAE_D48B6AE5A51D__INCLUDED_)
#define AFX_MFCEXP10_3VIEW_H__365536BE_1355_470B_ABAE_D48B6AE5A51D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_3View : public CView
{
protected: // create from serialization only
	CMFCexp10_3View();
	DECLARE_DYNCREATE(CMFCexp10_3View)
	CEdit m_Edit1;				//定义一个编辑控件
// Attributes
public:
	CMFCexp10_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_3View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	afx_msg void OnMaxText();		//定义编辑控件的消息响应函数
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp10_3View.cpp
inline CMFCexp10_3Doc* CMFCexp10_3View::GetDocument()
   { return (CMFCexp10_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_3VIEW_H__365536BE_1355_470B_ABAE_D48B6AE5A51D__INCLUDED_)

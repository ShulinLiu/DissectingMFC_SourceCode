// ControlToolView.h : interface of the CControlToolView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTROLTOOLVIEW_H__E9131936_34F1_47E8_ABC9_86EC0B523F45__INCLUDED_)
#define AFX_CONTROLTOOLVIEW_H__E9131936_34F1_47E8_ABC9_86EC0B523F45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CControlToolView : public CView
{
public:
	//CStatic Class
/*	CStatic m_Static1;
	CStatic m_Static2;
	CStatic m_Static3;
	CStatic m_Static4;
	CStatic m_Static5;
	CStatic m_Static6;
*/
	CButton m_Button1;
	CButton m_Button2;
	CButton m_GroupBox;
	CButton m_radioButton1;
	CButton m_radioButton2;
	CButton m_radioButton3;

	CEdit m_Edit1;				//定义一个编辑控件


protected: // create from serialization only
	CControlToolView();
	DECLARE_DYNCREATE(CControlToolView)

// Attributes
public:
	CControlToolDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlToolView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CControlToolView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	
	//{{AFX_MSG(CControlToolView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnButton1Clicked();
	afx_msg void OnButton2Clicked();

	afx_msg void OnMaxText();		//定义编辑控件的消息响应函数
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ControlToolView.cpp
inline CControlToolDoc* CControlToolView::GetDocument()
   { return (CControlToolDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLTOOLVIEW_H__E9131936_34F1_47E8_ABC9_86EC0B523F45__INCLUDED_)

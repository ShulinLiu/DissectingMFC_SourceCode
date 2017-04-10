// ControlTool2View.h : interface of the CControlTool2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTROLTOOL2VIEW_H__6D3A89BC_9ADD_463E_87D6_3E09548D115F__INCLUDED_)
#define AFX_CONTROLTOOL2VIEW_H__6D3A89BC_9ADD_463E_87D6_3E09548D115F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CControlTool2View : public CView
{
protected: // create from serialization only
	CControlTool2View();
	DECLARE_DYNCREATE(CControlTool2View)

		CFont m_spinEditFont;				//字体对象
		CSpinButtonCtrl m_spin;			//微调控件对象
		CEdit m_spinEdit;					//编辑框控件对象
		void InitSpinner( );					//微调器的初始化函数
		CProgressCtrl m_progBar1,m_progBar2;//进度条控件
		void InitProgressBar( );				//进度条控件的初始化函数

// Attributes
public:
	CControlTool2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlTool2View)
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
	virtual ~CControlTool2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	afx_msg void OnTimer(UINT nIDEvent);//定时器响应函数

// Generated message map functions
protected:
	//{{AFX_MSG(CControlTool2View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ControlTool2View.cpp
inline CControlTool2Doc* CControlTool2View::GetDocument()
   { return (CControlTool2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLTOOL2VIEW_H__6D3A89BC_9ADD_463E_87D6_3E09548D115F__INCLUDED_)

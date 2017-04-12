// AFXDlgView.h : interface of the CAFXDlgView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AFXDLGVIEW_H__E6D426F3_5A9A_4EC8_B5D6_97550E6CE4BD__INCLUDED_)
#define AFX_AFXDLGVIEW_H__E6D426F3_5A9A_4EC8_B5D6_97550E6CE4BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxdlgs.h"

class CAFXDlgView : public CView
{
protected: // create from serialization only
	CAFXDlgView();
	DECLARE_DYNCREATE(CAFXDlgView)

	LOGFONT m_logFont;		//定义一个LOGFONT类型的数据成员
	CFont* m_pFont;			//定义一个字体对象指针
	COLORREF m_fontColor;	//定义存放字体颜色的成员变量

// Attributes
public:
	CAFXDlgDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAFXDlgView)
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
	virtual ~CAFXDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	CString m_saveFileName;
	CString m_openfileName;
	//{{AFX_MSG(CAFXDlgView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AFXDlgView.cpp
inline CAFXDlgDoc* CAFXDlgView::GetDocument()
   { return (CAFXDlgDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AFXDLGVIEW_H__E6D426F3_5A9A_4EC8_B5D6_97550E6CE4BD__INCLUDED_)

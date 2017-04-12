// DialogView.h : interface of the CDialogView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DIALOGVIEW_H__83FDE474_4C02_421F_A191_54C527AD7003__INCLUDED_)
#define AFX_DIALOGVIEW_H__83FDE474_4C02_421F_A191_54C527AD7003__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDialogView : public CView
{
protected: // create from serialization only
	CDialogView();
	DECLARE_DYNCREATE(CDialogView)

// Attributes
public:
	CDialogDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogView)
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
	CString m_outEdit2;
	CString m_outEdit1;
	virtual ~CDialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDialogView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DialogView.cpp
inline CDialogDoc* CDialogView::GetDocument()
   { return (CDialogDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGVIEW_H__83FDE474_4C02_421F_A191_54C527AD7003__INCLUDED_)

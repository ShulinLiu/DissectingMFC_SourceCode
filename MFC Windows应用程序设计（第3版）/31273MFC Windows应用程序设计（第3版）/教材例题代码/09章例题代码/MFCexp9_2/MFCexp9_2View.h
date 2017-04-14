// MFCexp9_2View.h : interface of the CMFCexp9_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_2VIEW_H__E8AA4AAA_15D1_4C20_9A97_05514743F4E5__INCLUDED_)
#define AFX_MFCEXP9_2VIEW_H__E8AA4AAA_15D1_4C20_9A97_05514743F4E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_2View : public CView
{
protected: // create from serialization only
	CMFCexp9_2View();
	DECLARE_DYNCREATE(CMFCexp9_2View)

// Attributes
public:
	CMFCexp9_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_2View)
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
	virtual ~CMFCexp9_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_2View.cpp
inline CMFCexp9_2Doc* CMFCexp9_2View::GetDocument()
   { return (CMFCexp9_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_2VIEW_H__E8AA4AAA_15D1_4C20_9A97_05514743F4E5__INCLUDED_)

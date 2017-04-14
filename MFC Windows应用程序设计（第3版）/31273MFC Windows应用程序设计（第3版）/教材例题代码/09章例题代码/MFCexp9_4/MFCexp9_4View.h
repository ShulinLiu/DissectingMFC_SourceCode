// MFCexp9_4View.h : interface of the CMFCexp9_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_4VIEW_H__D2E96D80_29BC_4C76_B241_E33499BD9F00__INCLUDED_)
#define AFX_MFCEXP9_4VIEW_H__D2E96D80_29BC_4C76_B241_E33499BD9F00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_4View : public CView
{
protected: // create from serialization only
	CMFCexp9_4View();
	DECLARE_DYNCREATE(CMFCexp9_4View)

// Attributes
public:
	CMFCexp9_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_4View)
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
	virtual ~CMFCexp9_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_4View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_4View.cpp
inline CMFCexp9_4Doc* CMFCexp9_4View::GetDocument()
   { return (CMFCexp9_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_4VIEW_H__D2E96D80_29BC_4C76_B241_E33499BD9F00__INCLUDED_)

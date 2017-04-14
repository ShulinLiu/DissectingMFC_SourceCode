// MFCexp13_5View.h : interface of the CMFCexp13_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_5VIEW_H__46282BA5_4092_4194_B9A0_A92DCC8FDF11__INCLUDED_)
#define AFX_MFCEXP13_5VIEW_H__46282BA5_4092_4194_B9A0_A92DCC8FDF11__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp13_5View : public CView
{
protected: // create from serialization only
	CMFCexp13_5View();
	DECLARE_DYNCREATE(CMFCexp13_5View)

// Attributes
public:
	CMFCexp13_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_5View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp13_5View.cpp
inline CMFCexp13_5Doc* CMFCexp13_5View::GetDocument()
   { return (CMFCexp13_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_5VIEW_H__46282BA5_4092_4194_B9A0_A92DCC8FDF11__INCLUDED_)

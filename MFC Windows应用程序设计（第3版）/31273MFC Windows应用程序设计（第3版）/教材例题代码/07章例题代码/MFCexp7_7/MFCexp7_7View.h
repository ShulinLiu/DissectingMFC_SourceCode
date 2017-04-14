// MFCexp7_7View.h : interface of the CMFCexp7_7View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_7VIEW_H__17C6B0C0_ACEA_4150_8EB2_A659A6A726B7__INCLUDED_)
#define AFX_MFCEXP7_7VIEW_H__17C6B0C0_ACEA_4150_8EB2_A659A6A726B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_7View : public CView
{
protected: // create from serialization only
	CMFCexp7_7View();
	DECLARE_DYNCREATE(CMFCexp7_7View)

// Attributes
public:
	CMFCexp7_7Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_7View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_7View)
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_7View.cpp
inline CMFCexp7_7Doc* CMFCexp7_7View::GetDocument()
   { return (CMFCexp7_7Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_7VIEW_H__17C6B0C0_ACEA_4150_8EB2_A659A6A726B7__INCLUDED_)

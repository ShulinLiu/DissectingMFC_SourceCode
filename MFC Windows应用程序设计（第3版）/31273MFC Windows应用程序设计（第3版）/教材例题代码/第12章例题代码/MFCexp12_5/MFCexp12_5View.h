// MFCexp12_5View.h : interface of the CMFCexp12_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP12_5VIEW_H__A7475CC9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP12_5VIEW_H__A7475CC9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp12_5View : public CView
{
protected: // create from serialization only
	CMFCexp12_5View();
	DECLARE_DYNCREATE(CMFCexp12_5View)

// Attributes
public:
	CMFCexp12_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp12_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp12_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp12_5View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp12_5View.cpp
inline CMFCexp12_5Doc* CMFCexp12_5View::GetDocument()
   { return (CMFCexp12_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP12_5VIEW_H__A7475CC9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)

// MFCexp12_1View.h : interface of the CMFCexp12_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP12_1VIEW_H__A7475C8C_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP12_1VIEW_H__A7475C8C_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp12_1View : public CView
{
protected: // create from serialization only
	CMFCexp12_1View();
	DECLARE_DYNCREATE(CMFCexp12_1View)

// Attributes
public:
	CMFCexp12_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp12_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp12_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp12_1View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp12_1View.cpp
inline CMFCexp12_1Doc* CMFCexp12_1View::GetDocument()
   { return (CMFCexp12_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP12_1VIEW_H__A7475C8C_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)

// MFCexp12_3View.h : interface of the CMFCexp12_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP12_3VIEW_H__A7475CB6_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP12_3VIEW_H__A7475CB6_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCexp12_3View : public CView
{
protected: // create from serialization only
	CMFCexp12_3View();
	DECLARE_DYNCREATE(CMFCexp12_3View)

// Attributes
public:
	CMFCexp12_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp12_3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp12_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp12_3View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp12_3View.cpp
inline CMFCexp12_3Doc* CMFCexp12_3View::GetDocument()
   { return (CMFCexp12_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP12_3VIEW_H__A7475CB6_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)

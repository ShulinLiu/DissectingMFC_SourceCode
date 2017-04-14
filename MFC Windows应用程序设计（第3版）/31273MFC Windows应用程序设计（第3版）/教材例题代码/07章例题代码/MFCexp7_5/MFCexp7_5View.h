// MFCexp7_5View.h : interface of the CMFCexp7_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_5VIEW_H__3D1EC470_6A1B_4EE1_859F_81DE9A438327__INCLUDED_)
#define AFX_MFCEXP7_5VIEW_H__3D1EC470_6A1B_4EE1_859F_81DE9A438327__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_5View : public CView
{
protected: // create from serialization only
	CMFCexp7_5View();
	DECLARE_DYNCREATE(CMFCexp7_5View)

// Attributes
public:
	CMFCexp7_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_5View)
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_5View.cpp
inline CMFCexp7_5Doc* CMFCexp7_5View::GetDocument()
   { return (CMFCexp7_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_5VIEW_H__3D1EC470_6A1B_4EE1_859F_81DE9A438327__INCLUDED_)

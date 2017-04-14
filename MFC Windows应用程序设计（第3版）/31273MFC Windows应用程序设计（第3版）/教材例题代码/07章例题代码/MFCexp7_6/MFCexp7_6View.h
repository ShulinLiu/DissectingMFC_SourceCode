// MFCexp7_6View.h : interface of the CMFCexp7_6View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_6VIEW_H__FB07CCEB_E83D_4504_BE0B_EBE65FBC619A__INCLUDED_)
#define AFX_MFCEXP7_6VIEW_H__FB07CCEB_E83D_4504_BE0B_EBE65FBC619A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_6View : public CView
{
protected: // create from serialization only
	CMFCexp7_6View();
	DECLARE_DYNCREATE(CMFCexp7_6View)

// Attributes
public:
	CMFCexp7_6Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_6View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_6View)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_6View.cpp
inline CMFCexp7_6Doc* CMFCexp7_6View::GetDocument()
   { return (CMFCexp7_6Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_6VIEW_H__FB07CCEB_E83D_4504_BE0B_EBE65FBC619A__INCLUDED_)

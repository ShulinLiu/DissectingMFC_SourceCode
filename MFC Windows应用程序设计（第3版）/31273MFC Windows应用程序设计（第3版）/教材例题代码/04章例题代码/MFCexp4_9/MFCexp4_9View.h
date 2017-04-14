// MFCexp4_9View.h : interface of the CMFCexp4_9View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_9VIEW_H__DD0275D5_6444_4718_A0FD_EE182EFCFA41__INCLUDED_)
#define AFX_MFCEXP4_9VIEW_H__DD0275D5_6444_4718_A0FD_EE182EFCFA41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_9View : public CView
{
protected: // create from serialization only
	CMFCexp4_9View();
	DECLARE_DYNCREATE(CMFCexp4_9View)

// Attributes
public:
	CMFCexp4_9Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_9View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_9View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_9View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_9View.cpp
inline CMFCexp4_9Doc* CMFCexp4_9View::GetDocument()
   { return (CMFCexp4_9Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_9VIEW_H__DD0275D5_6444_4718_A0FD_EE182EFCFA41__INCLUDED_)

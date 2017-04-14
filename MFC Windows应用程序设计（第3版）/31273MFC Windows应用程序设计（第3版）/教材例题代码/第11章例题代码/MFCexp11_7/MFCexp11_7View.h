// MFCexp11_7View.h : interface of the CMFCexp11_7View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP11_7VIEW_H__DCD3D9DD_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_7VIEW_H__DCD3D9DD_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"Property.h"

class CMFCexp11_7View : public CView
{
protected: // create from serialization only
	CMFCexp11_7View();
	DECLARE_DYNCREATE(CMFCexp11_7View)

// Attributes
public:
	CMFCexp11_7Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_7View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp11_7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp11_7View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp11_7View.cpp
inline CMFCexp11_7Doc* CMFCexp11_7View::GetDocument()
   { return (CMFCexp11_7Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_7VIEW_H__DCD3D9DD_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

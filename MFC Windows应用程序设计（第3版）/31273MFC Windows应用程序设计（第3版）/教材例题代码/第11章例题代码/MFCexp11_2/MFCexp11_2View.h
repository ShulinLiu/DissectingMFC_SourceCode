// MFCexp11_2View.h : interface of the CMFCexp11_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP11_2VIEW_H__DCD3D96C_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_2VIEW_H__DCD3D96C_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp11_2View : public CView
{
protected: // create from serialization only
	CMFCexp11_2View();
	DECLARE_DYNCREATE(CMFCexp11_2View)
	CString m_outEdit2;
	CString m_outEdit1;

// Attributes
public:
	CMFCexp11_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp11_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp11_2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp11_2View.cpp
inline CMFCexp11_2Doc* CMFCexp11_2View::GetDocument()
   { return (CMFCexp11_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_2VIEW_H__DCD3D96C_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

// MFCexp10_6View.h : interface of the CMFCexp10_6View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_6VIEW_H__299E7485_EB2E_4F74_9C3F_E75F58491225__INCLUDED_)
#define AFX_MFCEXP10_6VIEW_H__299E7485_EB2E_4F74_9C3F_E75F58491225__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_6View : public CView
{
protected:
	CBrush m_WhiteBrush;

protected:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

public:
	CButton m_Button1;
	CButton m_Button2;
	CButton m_GroupBox;
	CButton m_radioButton1;
	CButton m_radioButton2;
	CButton m_radioButton3;

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnButton1Clicked( );
	afx_msg void OnButton2Clicked( );

protected: // create from serialization only
	CMFCexp10_6View();
	DECLARE_DYNCREATE(CMFCexp10_6View)

// Attributes
public:
	CMFCexp10_6Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_6View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_6View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp10_6View.cpp
inline CMFCexp10_6Doc* CMFCexp10_6View::GetDocument()
   { return (CMFCexp10_6Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_6VIEW_H__299E7485_EB2E_4F74_9C3F_E75F58491225__INCLUDED_)

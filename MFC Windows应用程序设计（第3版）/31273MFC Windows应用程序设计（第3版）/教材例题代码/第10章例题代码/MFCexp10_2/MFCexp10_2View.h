// MFCexp10_2View.h : interface of the CMFCexp10_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_2VIEW_H__BD57E288_369D_426C_B267_A9086191E764__INCLUDED_)
#define AFX_MFCEXP10_2VIEW_H__BD57E288_369D_426C_B267_A9086191E764__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_2View : public CView
{
public:
	CButton m_Button1;
	CButton m_Button2;
	CButton m_GroupBox;
	CButton m_radioButton1;
	CButton m_radioButton2;
	CButton m_radioButton3;

protected: // create from serialization only
	CMFCexp10_2View();
	DECLARE_DYNCREATE(CMFCexp10_2View)

// Attributes
public:
	CMFCexp10_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnButton1Clicked( );
	afx_msg void OnButton2Clicked( );

// Implementation
public:
	virtual ~CMFCexp10_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp10_2View.cpp
inline CMFCexp10_2Doc* CMFCexp10_2View::GetDocument()
   { return (CMFCexp10_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_2VIEW_H__BD57E288_369D_426C_B267_A9086191E764__INCLUDED_)

// MFCexp10_1View.h : interface of the CMFCexp10_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_1VIEW_H__EC2007F2_7880_4F36_8F3A_0BC4B34A0573__INCLUDED_)
#define AFX_MFCEXP10_1VIEW_H__EC2007F2_7880_4F36_8F3A_0BC4B34A0573__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_1View : public CView
{
public:
	CStatic m_Static1;
	CStatic m_Static2;
	CStatic m_Static3;
	CStatic m_Static4;
	CStatic m_Static5;
	CStatic m_Static6;
protected: // create from serialization only
	CMFCexp10_1View();
	DECLARE_DYNCREATE(CMFCexp10_1View)

// Attributes
public:
	CMFCexp10_1Doc* GetDocument();


// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_1View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp10_1View.cpp
inline CMFCexp10_1Doc* CMFCexp10_1View::GetDocument()
   { return (CMFCexp10_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_1VIEW_H__EC2007F2_7880_4F36_8F3A_0BC4B34A0573__INCLUDED_)

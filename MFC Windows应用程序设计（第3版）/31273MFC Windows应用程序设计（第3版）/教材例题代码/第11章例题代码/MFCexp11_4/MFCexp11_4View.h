// MFCexp11_4View.h : interface of the CMFCexp11_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP11_4VIEW_H__DCD3D9A1_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_4VIEW_H__DCD3D9A1_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCexp11_4View : public CView
{
protected: 
		CString m_openfileName,m_saveFileName;
		afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
		afx_msg void OnRButtonDown(UINT nFlags, CPoint point);

protected: // create from serialization only
	CMFCexp11_4View();
	DECLARE_DYNCREATE(CMFCexp11_4View)

// Attributes
public:
	CMFCexp11_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp11_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp11_4View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp11_4View.cpp
inline CMFCexp11_4Doc* CMFCexp11_4View::GetDocument()
   { return (CMFCexp11_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_4VIEW_H__DCD3D9A1_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

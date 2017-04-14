// MFCexp4_4View.h : interface of the CMFCexp4_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_4VIEW_H__F687C4F2_0065_400E_8014_E970C7BD8200__INCLUDED_)
#define AFX_MFCEXP4_4VIEW_H__F687C4F2_0065_400E_8014_E970C7BD8200__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_4View : public CView
{
protected: // create from serialization only
	CMFCexp4_4View();
	DECLARE_DYNCREATE(CMFCexp4_4View)

// Attributes
public:
	CMFCexp4_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_4View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_4View.cpp
inline CMFCexp4_4Doc* CMFCexp4_4View::GetDocument()
   { return (CMFCexp4_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_4VIEW_H__F687C4F2_0065_400E_8014_E970C7BD8200__INCLUDED_)

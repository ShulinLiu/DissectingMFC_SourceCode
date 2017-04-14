// AutoServerView.h : interface of the CAutoServerView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AUTOSERVERVIEW_H__422EDC5E_B06F_4DE8_A4B1_394FBA889C0B__INCLUDED_)
#define AFX_AUTOSERVERVIEW_H__422EDC5E_B06F_4DE8_A4B1_394FBA889C0B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAutoServerView : public CView
{
protected: // create from serialization only
	CAutoServerView();
	DECLARE_DYNCREATE(CAutoServerView)

// Attributes
public:
	CAutoServerDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoServerView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAutoServerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAutoServerView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	afx_msg void OnCancelEditSrvr();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AutoServerView.cpp
inline CAutoServerDoc* CAutoServerView::GetDocument()
   { return (CAutoServerDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOSERVERVIEW_H__422EDC5E_B06F_4DE8_A4B1_394FBA889C0B__INCLUDED_)

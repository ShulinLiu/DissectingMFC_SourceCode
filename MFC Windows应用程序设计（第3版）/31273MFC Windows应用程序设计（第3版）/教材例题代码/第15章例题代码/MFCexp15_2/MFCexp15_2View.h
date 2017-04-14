// MFCexp15_2View.h : interface of the CMFCexp15_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP15_2VIEW_H__459BB2CD_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP15_2VIEW_H__459BB2CD_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp15_2View : public CView
{
protected: // create from serialization only
	CMFCexp15_2View();
	DECLARE_DYNCREATE(CMFCexp15_2View)

// Attributes
public:
	CMFCexp15_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp15_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp15_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp15_2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	afx_msg void OnCancelEditSrvr();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp15_2View.cpp
inline CMFCexp15_2Doc* CMFCexp15_2View::GetDocument()
   { return (CMFCexp15_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP15_2VIEW_H__459BB2CD_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)

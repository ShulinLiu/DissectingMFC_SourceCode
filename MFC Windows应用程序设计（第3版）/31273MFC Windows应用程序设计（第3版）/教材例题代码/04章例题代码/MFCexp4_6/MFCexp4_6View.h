// MFCexp4_6View.h : interface of the CMFCexp4_6View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_6VIEW_H__61E2C776_1385_424E_B636_1934B0BB9B1B__INCLUDED_)
#define AFX_MFCEXP4_6VIEW_H__61E2C776_1385_424E_B636_1934B0BB9B1B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_6View : public CView
{
protected: // create from serialization only
	CMFCexp4_6View();
	DECLARE_DYNCREATE(CMFCexp4_6View)

// Attributes
public:
	CMFCexp4_6Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_6View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_6View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_6View.cpp
inline CMFCexp4_6Doc* CMFCexp4_6View::GetDocument()
   { return (CMFCexp4_6Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_6VIEW_H__61E2C776_1385_424E_B636_1934B0BB9B1B__INCLUDED_)

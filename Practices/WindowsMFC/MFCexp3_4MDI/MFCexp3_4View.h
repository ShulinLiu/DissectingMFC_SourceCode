// MFCexp3_4View.h : interface of the CMFCexp3_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP3_4VIEW_H__4A581F85_A841_468A_B329_6C45ADBEAD7A__INCLUDED_)
#define AFX_MFCEXP3_4VIEW_H__4A581F85_A841_468A_B329_6C45ADBEAD7A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp3_4View : public CView
{
protected: // create from serialization only
	CMFCexp3_4View();
	DECLARE_DYNCREATE(CMFCexp3_4View)

// Attributes
public:
	CMFCexp3_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp3_4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp3_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp3_4View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp3_4View.cpp
inline CMFCexp3_4Doc* CMFCexp3_4View::GetDocument()
   { return (CMFCexp3_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP3_4VIEW_H__4A581F85_A841_468A_B329_6C45ADBEAD7A__INCLUDED_)

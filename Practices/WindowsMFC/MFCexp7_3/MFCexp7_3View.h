// MFCexp7_3View.h : interface of the CMFCexp7_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_3VIEW_H__96518550_9531_4385_B44A_DDFEC76C65B7__INCLUDED_)
#define AFX_MFCEXP7_3VIEW_H__96518550_9531_4385_B44A_DDFEC76C65B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_3View : public CView
{
protected: // create from serialization only
	CMFCexp7_3View();
	DECLARE_DYNCREATE(CMFCexp7_3View)

// Attributes
public:
	CMFCexp7_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_3View)
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
	virtual ~CMFCexp7_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_3View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_3View.cpp
inline CMFCexp7_3Doc* CMFCexp7_3View::GetDocument()
   { return (CMFCexp7_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_3VIEW_H__96518550_9531_4385_B44A_DDFEC76C65B7__INCLUDED_)

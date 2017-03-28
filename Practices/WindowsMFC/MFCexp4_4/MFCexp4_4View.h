// MFCexp4_4View.h : interface of the CMFCexp4_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_4VIEW_H__1BCE139A_D410_44AC_9457_C14B52C824B6__INCLUDED_)
#define AFX_MFCEXP4_4VIEW_H__1BCE139A_D410_44AC_9457_C14B52C824B6__INCLUDED_

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
	HMETAFILE m_hMetaFile;		//声明一个图元文件的数据成员

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_4View)
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
	virtual ~CMFCexp4_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_4View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
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

#endif // !defined(AFX_MFCEXP4_4VIEW_H__1BCE139A_D410_44AC_9457_C14B52C824B6__INCLUDED_)

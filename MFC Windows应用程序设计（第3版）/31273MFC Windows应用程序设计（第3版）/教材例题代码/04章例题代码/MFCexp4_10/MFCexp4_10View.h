// MFCexp4_10View.h : interface of the CMFCexp4_10View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_10VIEW_H__B77D2E75_0EFC_4A05_98F8_6E81A1747FC5__INCLUDED_)
#define AFX_MFCEXP4_10VIEW_H__B77D2E75_0EFC_4A05_98F8_6E81A1747FC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_10View : public CView
{
protected: // create from serialization only
	CMFCexp4_10View();
	DECLARE_DYNCREATE(CMFCexp4_10View)

// Attributes
public:
	CMFCexp4_10Doc* GetDocument();
	HMETAFILE m_hMetaFile;		//声明一个图元文件的数据成员
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_10View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_10View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnCancelMode();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_10View.cpp
inline CMFCexp4_10Doc* CMFCexp4_10View::GetDocument()
   { return (CMFCexp4_10Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_10VIEW_H__B77D2E75_0EFC_4A05_98F8_6E81A1747FC5__INCLUDED_)

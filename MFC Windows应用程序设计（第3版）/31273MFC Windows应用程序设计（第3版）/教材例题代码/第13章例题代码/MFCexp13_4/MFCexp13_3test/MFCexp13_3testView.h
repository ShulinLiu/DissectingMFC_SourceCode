// MFCexp13_3testView.h : interface of the CMFCexp13_3testView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_3TESTVIEW_H__49361D95_0BA5_4AD2_9E58_ADD2DD1B36C8__INCLUDED_)
#define AFX_MFCEXP13_3TESTVIEW_H__49361D95_0BA5_4AD2_9E58_ADD2DD1B36C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

int ShowMsg();
class CMFCexp13_3testView : public CView
{
protected: // create from serialization only
	CMFCexp13_3testView();
	DECLARE_DYNCREATE(CMFCexp13_3testView)

// Attributes
public:
	CMFCexp13_3testDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_3testView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_3testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_3testView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp13_3testView.cpp
inline CMFCexp13_3testDoc* CMFCexp13_3testView::GetDocument()
   { return (CMFCexp13_3testDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_3TESTVIEW_H__49361D95_0BA5_4AD2_9E58_ADD2DD1B36C8__INCLUDED_)

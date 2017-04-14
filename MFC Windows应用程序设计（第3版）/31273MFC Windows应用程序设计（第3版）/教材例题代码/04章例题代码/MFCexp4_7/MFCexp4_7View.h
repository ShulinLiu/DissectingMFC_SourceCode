// MFCexp4_7View.h : interface of the CMFCexp4_7View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_7VIEW_H__B8FC6A65_13A1_4ADB_9AB4_E04550EEC54D__INCLUDED_)
#define AFX_MFCEXP4_7VIEW_H__B8FC6A65_13A1_4ADB_9AB4_E04550EEC54D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_7View : public CView
{
protected: // create from serialization only
	CMFCexp4_7View();
	DECLARE_DYNCREATE(CMFCexp4_7View)

// Attributes
public:
	CMFCexp4_7Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_7View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_7View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_7View.cpp
inline CMFCexp4_7Doc* CMFCexp4_7View::GetDocument()
   { return (CMFCexp4_7Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_7VIEW_H__B8FC6A65_13A1_4ADB_9AB4_E04550EEC54D__INCLUDED_)

#if !defined(AFX_DRAW2_H__5BBB23A4_D93F_4452_A8C4_F416822CB88A__INCLUDED_)
#define AFX_DRAW2_H__5BBB23A4_D93F_4452_A8C4_F416822CB88A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Draw2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDraw2 form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CDraw2 : public CFormView
{
protected:
	CDraw2();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CDraw2)

// Form Data
public:
	//{{AFX_DATA(CDraw2)
	enum { IDD = IDD_DRAW2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CDraw2();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CDraw2)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW2_H__5BBB23A4_D93F_4452_A8C4_F416822CB88A__INCLUDED_)

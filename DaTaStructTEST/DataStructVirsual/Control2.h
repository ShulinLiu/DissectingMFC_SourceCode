#if !defined(AFX_CONTROL2_H__8FF05BAD_AF1D_4F8F_AA5E_EAF41D627504__INCLUDED_)
#define AFX_CONTROL2_H__8FF05BAD_AF1D_4F8F_AA5E_EAF41D627504__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Control2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CControl2 form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CControl2 : public CFormView
{
protected:
	CControl2();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CControl2)

// Form Data
public:
	//{{AFX_DATA(CControl2)
	enum { IDD = IDD_CONTROL2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControl2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CControl2();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CControl2)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROL2_H__8FF05BAD_AF1D_4F8F_AA5E_EAF41D627504__INCLUDED_)

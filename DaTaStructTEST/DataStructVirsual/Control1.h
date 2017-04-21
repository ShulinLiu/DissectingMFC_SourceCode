#if !defined(AFX_CONTROL1_H__BC9FB4BE_8F42_4B21_B742_1EFF3400DEC5__INCLUDED_)
#define AFX_CONTROL1_H__BC9FB4BE_8F42_4B21_B742_1EFF3400DEC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Control1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CControl1 form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CControl1 : public CFormView
{
protected:
	CControl1();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CControl1)

// Form Data
public:
	//{{AFX_DATA(CControl1)
	enum { IDD = IDD_CONTROL1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControl1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CControl1();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CControl1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROL1_H__BC9FB4BE_8F42_4B21_B742_1EFF3400DEC5__INCLUDED_)

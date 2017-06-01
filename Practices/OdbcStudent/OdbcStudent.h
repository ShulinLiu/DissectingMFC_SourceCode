// OdbcStudent.h : main header file for the ODBCSTUDENT application
//

#if !defined(AFX_ODBCSTUDENT_H__0174D443_02B0_4AEE_B862_DA78891D5553__INCLUDED_)
#define AFX_ODBCSTUDENT_H__0174D443_02B0_4AEE_B862_DA78891D5553__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COdbcStudentApp:
// See OdbcStudent.cpp for the implementation of this class
//

class COdbcStudentApp : public CWinApp
{
public:
	COdbcStudentApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COdbcStudentApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COdbcStudentApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ODBCSTUDENT_H__0174D443_02B0_4AEE_B862_DA78891D5553__INCLUDED_)

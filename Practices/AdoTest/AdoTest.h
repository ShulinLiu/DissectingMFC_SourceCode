// AdoTest.h : main header file for the ADOTEST application
//

#if !defined(AFX_ADOTEST_H__DD9DE346_F173_490F_9CDE_2DDC867A699E__INCLUDED_)
#define AFX_ADOTEST_H__DD9DE346_F173_490F_9CDE_2DDC867A699E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAdoTestApp:
// See AdoTest.cpp for the implementation of this class
//

class CAdoTestApp : public CWinApp
{
public:
	CAdoTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdoTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAdoTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADOTEST_H__DD9DE346_F173_490F_9CDE_2DDC867A699E__INCLUDED_)

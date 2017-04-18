// ProThrd.h : main header file for the PROTHRD application
//

#if !defined(AFX_PROTHRD_H__BCBC4F4D_00C0_4342_8875_F6BBD1EF387A__INCLUDED_)
#define AFX_PROTHRD_H__BCBC4F4D_00C0_4342_8875_F6BBD1EF387A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CProThrdApp:
// See ProThrd.cpp for the implementation of this class
//

class CProThrdApp : public CWinApp
{
public:
	CProThrdApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProThrdApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CProThrdApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROTHRD_H__BCBC4F4D_00C0_4342_8875_F6BBD1EF387A__INCLUDED_)

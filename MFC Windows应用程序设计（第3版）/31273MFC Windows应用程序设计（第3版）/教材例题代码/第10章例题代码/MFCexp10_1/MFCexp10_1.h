// MFCexp10_1.h : main header file for the MFCEXP10_1 application
//

#if !defined(AFX_MFCEXP10_1_H__C99C6FD0_F17C_4EF0_BCE6_6837FBFD42A1__INCLUDED_)
#define AFX_MFCEXP10_1_H__C99C6FD0_F17C_4EF0_BCE6_6837FBFD42A1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_1App:
// See MFCexp10_1.cpp for the implementation of this class
//

class CMFCexp10_1App : public CWinApp
{
public:
	CMFCexp10_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp10_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_1_H__C99C6FD0_F17C_4EF0_BCE6_6837FBFD42A1__INCLUDED_)

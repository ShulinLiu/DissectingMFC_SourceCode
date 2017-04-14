// MFCexp6_2.h : main header file for the MFCEXP6_2 application
//

#if !defined(AFX_MFCEXP6_2_H__046C928A_698E_440E_85BB_98FD22AB1B68__INCLUDED_)
#define AFX_MFCEXP6_2_H__046C928A_698E_440E_85BB_98FD22AB1B68__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2App:
// See MFCexp6_2.cpp for the implementation of this class
//

class CMFCexp6_2App : public CWinApp
{
public:
	CMFCexp6_2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp6_2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_2_H__046C928A_698E_440E_85BB_98FD22AB1B68__INCLUDED_)

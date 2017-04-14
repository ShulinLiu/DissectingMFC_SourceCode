// MFCexp6_3.h : main header file for the MFCEXP6_3 application
//

#if !defined(AFX_MFCEXP6_3_H__A4E6BA30_9EAA_4A0D_9517_CC1A2CF537AF__INCLUDED_)
#define AFX_MFCEXP6_3_H__A4E6BA30_9EAA_4A0D_9517_CC1A2CF537AF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_3App:
// See MFCexp6_3.cpp for the implementation of this class
//

class CMFCexp6_3App : public CWinApp
{
public:
	CMFCexp6_3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp6_3App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_3_H__A4E6BA30_9EAA_4A0D_9517_CC1A2CF537AF__INCLUDED_)

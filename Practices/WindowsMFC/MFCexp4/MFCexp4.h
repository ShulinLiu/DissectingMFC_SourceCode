// MFCexp4.h : main header file for the MFCEXP4 application
//

#if !defined(AFX_MFCEXP4_H__B8AE538A_1590_4E0B_9AC7_7E3F2AA5623D__INCLUDED_)
#define AFX_MFCEXP4_H__B8AE538A_1590_4E0B_9AC7_7E3F2AA5623D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4App:
// See MFCexp4.cpp for the implementation of this class
//

class CMFCexp4App : public CWinApp
{
public:
	CMFCexp4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_H__B8AE538A_1590_4E0B_9AC7_7E3F2AA5623D__INCLUDED_)

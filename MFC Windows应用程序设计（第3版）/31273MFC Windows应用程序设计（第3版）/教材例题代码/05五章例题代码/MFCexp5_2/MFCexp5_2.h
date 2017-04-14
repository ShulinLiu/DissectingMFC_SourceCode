// MFCexp5_2.h : main header file for the MFCEXP5_2 application
//

#if !defined(AFX_MFCEXP5_2_H__2AE34BB0_A589_4C22_973D_03E26F409B08__INCLUDED_)
#define AFX_MFCEXP5_2_H__2AE34BB0_A589_4C22_973D_03E26F409B08__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_2App:
// See MFCexp5_2.cpp for the implementation of this class
//

class CMFCexp5_2App : public CWinApp
{
public:
	CMFCexp5_2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp5_2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_2_H__2AE34BB0_A589_4C22_973D_03E26F409B08__INCLUDED_)

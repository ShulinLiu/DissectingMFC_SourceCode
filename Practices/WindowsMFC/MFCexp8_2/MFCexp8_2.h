// MFCexp8_2.h : main header file for the MFCEXP8_2 application
//

#if !defined(AFX_MFCEXP8_2_H__A1EF0AC1_7251_462C_9E9D_E900A45FF8EE__INCLUDED_)
#define AFX_MFCEXP8_2_H__A1EF0AC1_7251_462C_9E9D_E900A45FF8EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2App:
// See MFCexp8_2.cpp for the implementation of this class
//

class CMFCexp8_2App : public CWinApp
{
public:
	CMFCexp8_2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp8_2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_2_H__A1EF0AC1_7251_462C_9E9D_E900A45FF8EE__INCLUDED_)

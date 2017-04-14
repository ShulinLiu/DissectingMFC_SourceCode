// MFCexp11_4.h : main header file for the MFCEXP11_4 application
//

#if !defined(AFX_MFCEXP11_4_H__DCD3D999_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_4_H__DCD3D999_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_4App:
// See MFCexp11_4.cpp for the implementation of this class
//

class CMFCexp11_4App : public CWinApp
{
public:
	CMFCexp11_4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp11_4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_4_H__DCD3D999_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

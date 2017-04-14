// MFCexp4_4.h : main header file for the MFCEXP4_4 application
//

#if !defined(AFX_MFCEXP4_4_H__544ACCD0_E8D6_4EDE_B603_7EA54B0BA7C4__INCLUDED_)
#define AFX_MFCEXP4_4_H__544ACCD0_E8D6_4EDE_B603_7EA54B0BA7C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_4App:
// See MFCexp4_4.cpp for the implementation of this class
//

class CMFCexp4_4App : public CWinApp
{
public:
	CMFCexp4_4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4_4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_4_H__544ACCD0_E8D6_4EDE_B603_7EA54B0BA7C4__INCLUDED_)

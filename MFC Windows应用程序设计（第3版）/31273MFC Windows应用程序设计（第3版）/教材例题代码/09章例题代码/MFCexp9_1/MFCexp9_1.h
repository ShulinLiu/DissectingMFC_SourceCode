// MFCexp9_1.h : main header file for the MFCEXP9_1 application
//

#if !defined(AFX_MFCEXP9_1_H__F5CC6447_2999_4372_8D03_0CE78D3681BB__INCLUDED_)
#define AFX_MFCEXP9_1_H__F5CC6447_2999_4372_8D03_0CE78D3681BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_1App:
// See MFCexp9_1.cpp for the implementation of this class
//

class CMFCexp9_1App : public CWinApp
{
public:
	CMFCexp9_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp9_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_1_H__F5CC6447_2999_4372_8D03_0CE78D3681BB__INCLUDED_)

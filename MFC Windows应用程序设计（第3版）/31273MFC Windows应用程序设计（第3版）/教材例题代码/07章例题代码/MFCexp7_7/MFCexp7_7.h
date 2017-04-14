// MFCexp7_7.h : main header file for the MFCEXP7_7 application
//

#if !defined(AFX_MFCEXP7_7_H__E761B9B9_007C_444E_ABCA_F6E94A08CC1E__INCLUDED_)
#define AFX_MFCEXP7_7_H__E761B9B9_007C_444E_ABCA_F6E94A08CC1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7App:
// See MFCexp7_7.cpp for the implementation of this class
//

class CMFCexp7_7App : public CWinApp
{
public:
	CMFCexp7_7App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_7App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp7_7App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_7_H__E761B9B9_007C_444E_ABCA_F6E94A08CC1E__INCLUDED_)

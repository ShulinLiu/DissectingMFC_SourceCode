// MFCexp7_6.h : main header file for the MFCEXP7_6 application
//

#if !defined(AFX_MFCEXP7_6_H__B8407DD4_FA22_4CF1_ADFB_6928AF49AFC7__INCLUDED_)
#define AFX_MFCEXP7_6_H__B8407DD4_FA22_4CF1_ADFB_6928AF49AFC7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6App:
// See MFCexp7_6.cpp for the implementation of this class
//

class CMFCexp7_6App : public CWinApp
{
public:
	CMFCexp7_6App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_6App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp7_6App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_6_H__B8407DD4_FA22_4CF1_ADFB_6928AF49AFC7__INCLUDED_)

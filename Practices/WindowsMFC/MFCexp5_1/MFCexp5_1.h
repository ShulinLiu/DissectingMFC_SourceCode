// MFCexp5_1.h : main header file for the MFCEXP5_1 application
//

#if !defined(AFX_MFCEXP5_1_H__D31AF7F7_1C65_4E20_89E0_1A0C2D7DB590__INCLUDED_)
#define AFX_MFCEXP5_1_H__D31AF7F7_1C65_4E20_89E0_1A0C2D7DB590__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1App:
// See MFCexp5_1.cpp for the implementation of this class
//

class CMFCexp5_1App : public CWinApp
{
public:
	CMFCexp5_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp5_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1_H__D31AF7F7_1C65_4E20_89E0_1A0C2D7DB590__INCLUDED_)

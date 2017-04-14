// MFCexp12_5.h : main header file for the MFCEXP12_5 application
//

#if !defined(AFX_MFCEXP12_5_H__A7475CC1_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP12_5_H__A7475CC1_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_5App:
// See MFCexp12_5.cpp for the implementation of this class
//

class CMFCexp12_5App : public CWinApp
{
public:
	CMFCexp12_5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp12_5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp12_5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP12_5_H__A7475CC1_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)

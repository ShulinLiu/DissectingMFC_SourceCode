// MFCexp4_5.h : main header file for the MFCEXP4_5 application
//

#if !defined(AFX_MFCEXP4_5_H__425A4E68_3292_41BC_8274_20F37FF505C9__INCLUDED_)
#define AFX_MFCEXP4_5_H__425A4E68_3292_41BC_8274_20F37FF505C9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_5App:
// See MFCexp4_5.cpp for the implementation of this class
//

class CMFCexp4_5App : public CWinApp
{
public:
	CMFCexp4_5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4_5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_5_H__425A4E68_3292_41BC_8274_20F37FF505C9__INCLUDED_)

// MFCexp5_1_1.h : main header file for the MFCEXP5_1_1 application
//

#if !defined(AFX_MFCEXP5_1_1_H__2FDBEA97_8CD8_4C10_95E9_C7EB3FAD2A62__INCLUDED_)
#define AFX_MFCEXP5_1_1_H__2FDBEA97_8CD8_4C10_95E9_C7EB3FAD2A62__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1_1App:
// See MFCexp5_1_1.cpp for the implementation of this class
//

class CMFCexp5_1_1App : public CWinApp
{
public:
	CMFCexp5_1_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp5_1_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1_1_H__2FDBEA97_8CD8_4C10_95E9_C7EB3FAD2A62__INCLUDED_)

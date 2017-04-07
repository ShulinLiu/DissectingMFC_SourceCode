// CFile1.h : main header file for the CFILE1 application
//

#if !defined(AFX_CFILE1_H__C8105752_A096_49BB_B659_4C1B0E140467__INCLUDED_)
#define AFX_CFILE1_H__C8105752_A096_49BB_B659_4C1B0E140467__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCFile1App:
// See CFile1.cpp for the implementation of this class
//

class CCFile1App : public CWinApp
{
public:
	CCFile1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCFile1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCFile1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CFILE1_H__C8105752_A096_49BB_B659_4C1B0E140467__INCLUDED_)

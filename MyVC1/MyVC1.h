// MyVC1.h : main header file for the MYVC1 application
//

#if !defined(AFX_MYVC1_H__2C1BC1F0_27C5_4F36_9968_C3F0C4181D07__INCLUDED_)
#define AFX_MYVC1_H__2C1BC1F0_27C5_4F36_9968_C3F0C4181D07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyVC1App:
// See MyVC1.cpp for the implementation of this class
//

class CMyVC1App : public CWinApp
{
public:
	CMyVC1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyVC1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyVC1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYVC1_H__2C1BC1F0_27C5_4F36_9968_C3F0C4181D07__INCLUDED_)

// SerializeMode.h : main header file for the SERIALIZEMODE application
//

#if !defined(AFX_SERIALIZEMODE_H__F0DAA508_B9CD_4265_A3B5_7A9993887F34__INCLUDED_)
#define AFX_SERIALIZEMODE_H__F0DAA508_B9CD_4265_A3B5_7A9993887F34__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeApp:
// See SerializeMode.cpp for the implementation of this class
//

class CSerializeModeApp : public CWinApp
{
public:
	CSerializeModeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeModeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSerializeModeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODE_H__F0DAA508_B9CD_4265_A3B5_7A9993887F34__INCLUDED_)

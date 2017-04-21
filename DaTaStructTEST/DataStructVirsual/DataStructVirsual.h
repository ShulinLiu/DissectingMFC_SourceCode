// DataStructVirsual.h : main header file for the DATASTRUCTVIRSUAL application
//

#if !defined(AFX_DATASTRUCTVIRSUAL_H__53AEADC4_D933_4045_914A_E8D9BD8691DC__INCLUDED_)
#define AFX_DATASTRUCTVIRSUAL_H__53AEADC4_D933_4045_914A_E8D9BD8691DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualApp:
// See DataStructVirsual.cpp for the implementation of this class
//

class CDataStructVirsualApp : public CWinApp
{
public:
	CDataStructVirsualApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDataStructVirsualApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDataStructVirsualApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATASTRUCTVIRSUAL_H__53AEADC4_D933_4045_914A_E8D9BD8691DC__INCLUDED_)

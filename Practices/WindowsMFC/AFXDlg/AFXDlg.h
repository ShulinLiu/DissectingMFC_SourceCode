// AFXDlg.h : main header file for the AFXDLG application
//

#if !defined(AFX_AFXDLG_H__B848D969_9103_4708_8816_E78966AE8FDD__INCLUDED_)
#define AFX_AFXDLG_H__B848D969_9103_4708_8816_E78966AE8FDD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgApp:
// See AFXDlg.cpp for the implementation of this class
//

class CAFXDlgApp : public CWinApp
{
public:
	CAFXDlgApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAFXDlgApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAFXDlgApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AFXDLG_H__B848D969_9103_4708_8816_E78966AE8FDD__INCLUDED_)

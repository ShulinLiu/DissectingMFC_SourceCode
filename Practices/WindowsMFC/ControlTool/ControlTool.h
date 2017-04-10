// ControlTool.h : main header file for the CONTROLTOOL application
//

#if !defined(AFX_CONTROLTOOL_H__97F3620B_052E_454F_AD04_3A433C4260D8__INCLUDED_)
#define AFX_CONTROLTOOL_H__97F3620B_052E_454F_AD04_3A433C4260D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CControlToolApp:
// See ControlTool.cpp for the implementation of this class
//

class CControlToolApp : public CWinApp
{
public:
	CControlToolApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlToolApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CControlToolApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLTOOL_H__97F3620B_052E_454F_AD04_3A433C4260D8__INCLUDED_)

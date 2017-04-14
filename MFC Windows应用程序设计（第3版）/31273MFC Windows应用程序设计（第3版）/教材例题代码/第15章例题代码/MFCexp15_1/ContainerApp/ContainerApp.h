// ContainerApp.h : main header file for the CONTAINERAPP application
//

#if !defined(AFX_CONTAINERAPP_H__04931A0F_6275_11D1_AB9F_50B153C10000__INCLUDED_)
#define AFX_CONTAINERAPP_H__04931A0F_6275_11D1_AB9F_50B153C10000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CContainerAppApp:
// See ContainerApp.cpp for the implementation of this class
//

class CContainerAppApp : public CWinApp
{
public:
	CContainerAppApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CContainerAppApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CContainerAppApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTAINERAPP_H__04931A0F_6275_11D1_AB9F_50B153C10000__INCLUDED_)

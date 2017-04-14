// AutoServer.h : main header file for the AUTOSERVER application
//

#if !defined(AFX_AUTOSERVER_H__D657BA8F_67E6_4B23_8B05_C0CA2952383B__INCLUDED_)
#define AFX_AUTOSERVER_H__D657BA8F_67E6_4B23_8B05_C0CA2952383B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAutoServerApp:
// See AutoServer.cpp for the implementation of this class
//

class CAutoServerApp : public CWinApp
{
public:
	CAutoServerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoServerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	//{{AFX_MSG(CAutoServerApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOSERVER_H__D657BA8F_67E6_4B23_8B05_C0CA2952383B__INCLUDED_)

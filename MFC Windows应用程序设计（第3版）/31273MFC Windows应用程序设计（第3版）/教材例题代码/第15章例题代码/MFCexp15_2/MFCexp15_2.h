// MFCexp15_2.h : main header file for the MFCEXP15_2 application
//

#if !defined(AFX_MFCEXP15_2_H__459BB2C5_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP15_2_H__459BB2C5_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2App:
// See MFCexp15_2.cpp for the implementation of this class
//

class CMFCexp15_2App : public CWinApp
{
public:
	CMFCexp15_2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp15_2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	//{{AFX_MSG(CMFCexp15_2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP15_2_H__459BB2C5_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)

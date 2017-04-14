#if !defined(AFX_CONTROLPPG_H__7B29E00F_00EF_4AB7_BC45_88439C34712F__INCLUDED_)
#define AFX_CONTROLPPG_H__7B29E00F_00EF_4AB7_BC45_88439C34712F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ControlPpg.h : Declaration of the CControlPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CControlPropPage : See ControlPpg.cpp.cpp for implementation.

class CControlPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CControlPropPage)
	DECLARE_OLECREATE_EX(CControlPropPage)

// Constructor
public:
	CControlPropPage();

// Dialog Data
	//{{AFX_DATA(CControlPropPage)
	enum { IDD = IDD_PROPPAGE_CONTROL };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CControlPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLPPG_H__7B29E00F_00EF_4AB7_BC45_88439C34712F__INCLUDED)

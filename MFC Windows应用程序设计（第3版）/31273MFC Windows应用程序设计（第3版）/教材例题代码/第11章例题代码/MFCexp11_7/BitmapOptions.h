#if !defined(AFX_BITMAPOPTIONS_H__DCD3D9E5_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_BITMAPOPTIONS_H__DCD3D9E5_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BitmapOptions.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBitmapOptions dialog

class CBitmapOptions : public CPropertyPage
{
	DECLARE_DYNCREATE(CBitmapOptions)

// Construction
public:
	CBitmapOptions();
	~CBitmapOptions();

// Dialog Data
	//{{AFX_DATA(CBitmapOptions)
	enum { IDD = IDD_DIALOG2 };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CBitmapOptions)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CBitmapOptions)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BITMAPOPTIONS_H__DCD3D9E5_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

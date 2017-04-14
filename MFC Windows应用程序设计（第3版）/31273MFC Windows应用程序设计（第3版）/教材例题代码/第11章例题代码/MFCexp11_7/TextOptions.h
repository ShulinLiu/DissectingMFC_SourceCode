#if !defined(AFX_TEXTOPTIONS_H__DCD3D9E4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_TEXTOPTIONS_H__DCD3D9E4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TextOptions.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTextOptions dialog

class CTextOptions : public CPropertyPage
{
	DECLARE_DYNCREATE(CTextOptions)

// Construction
public:
	CTextOptions();
	~CTextOptions();

// Dialog Data
	//{{AFX_DATA(CTextOptions)
	enum { IDD = IDD_DIALOG1 };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CTextOptions)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CTextOptions)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTOPTIONS_H__DCD3D9E4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)

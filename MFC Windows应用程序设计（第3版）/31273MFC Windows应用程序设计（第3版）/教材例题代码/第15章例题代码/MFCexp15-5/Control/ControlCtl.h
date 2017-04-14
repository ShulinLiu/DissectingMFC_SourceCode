#if !defined(AFX_CONTROLCTL_H__51927F9A_50F9_4A56_B071_B9BCE21C89E7__INCLUDED_)
#define AFX_CONTROLCTL_H__51927F9A_50F9_4A56_B071_B9BCE21C89E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ControlCtl.h : Declaration of the CControlCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CControlCtrl : See ControlCtl.cpp for implementation.

class CControlCtrl : public COleControl
{
	DECLARE_DYNCREATE(CControlCtrl)

// Constructor
public:
	CControlCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CControlCtrl();

	DECLARE_OLECREATE_EX(CControlCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CControlCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CControlCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CControlCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CControlCtrl)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CControlCtrl)
	afx_msg BSTR GetInputString();
	afx_msg void SetInputString(LPCTSTR lpszNewValue);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CControlCtrl)
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	afx_msg void OnButtonClicked();
	CString m_string;
	CEdit m_edit;
	CButton m_button;
	enum {
	//{{AFX_DISP_ID(CControlCtrl)
	dispidInputString = 1L,
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLCTL_H__51927F9A_50F9_4A56_B071_B9BCE21C89E7__INCLUDED)

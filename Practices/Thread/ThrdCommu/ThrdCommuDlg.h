// ThrdCommuDlg.h : header file
//

#if !defined(AFX_THRDCOMMUDLG_H__7C1163C0_9862_46FE_8DCC_70AF778E590D__INCLUDED_)
#define AFX_THRDCOMMUDLG_H__7C1163C0_9862_46FE_8DCC_70AF778E590D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CThrdCommuDlg dialog

class CThrdCommuDlg : public CDialog
{
// Construction
public:
	CThrdCommuDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CThrdCommuDlg)
	enum { IDD = IDD_THRDCOMMU_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThrdCommuDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CThrdCommuDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THRDCOMMUDLG_H__7C1163C0_9862_46FE_8DCC_70AF778E590D__INCLUDED_)

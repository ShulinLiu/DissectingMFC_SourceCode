// MFCexp12_9Dlg.h : header file
//

#if !defined(AFX_MFCEXP12_9DLG_H__A7475D0A_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP12_9DLG_H__A7475D0A_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
const WM_USRMSG=WM_USER+100;//定义用户消息
/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_9Dlg dialog

class CMFCexp12_9Dlg : public CDialog
{
// Construction
public:
	CMFCexp12_9Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCexp12_9Dlg)
	enum { IDD = IDD_MFCEXP12_9_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp12_9Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	afx_msg void OnThreadEnd(WPARAM wParam,LPARAM lParam);
	//{{AFX_MSG(CMFCexp12_9Dlg)
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

#endif // !defined(AFX_MFCEXP12_9DLG_H__A7475D0A_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)

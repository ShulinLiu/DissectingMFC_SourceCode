// tmsDlg.h : header file
//

#if !defined(AFX_TMSDLG_H__69760E15_FA93_11D7_9182_E31D909B8909__INCLUDED_)
#define AFX_TMSDLG_H__69760E15_FA93_11D7_9182_E31D909B8909__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "tmsSet.h"

/////////////////////////////////////////////////////////////////////////////
// CTmsDlg dialog

class CTmsDlg : public CDialog
{
// Construction
public:
	CTmsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTmsDlg)
	enum { IDD = IDD_TMS_DIALOG };
	CString	m_esno;
	CString	m_esex;
	CString	m_ename;
	CString	m_edname;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTmsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CDatabase m_db;
	CtmsSet m_rs;
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTmsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBUTTONtop();
	afx_msg void OnBUTTONbottom();
	afx_msg void OnBUTTONnext();
	afx_msg void OnBUTTONpre();
	virtual void OnOK();
	afx_msg void OnBUTTONadd();
	afx_msg void OnBUTTONdel();
	afx_msg void OnBUTTONedit();
	afx_msg void OnBUTTONrefresh();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TMSDLG_H__69760E15_FA93_11D7_9182_E31D909B8909__INCLUDED_)

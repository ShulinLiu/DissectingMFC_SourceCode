#if !defined(AFX_LEFTPANE_H__AB53807F_A20F_4862_86CF_AEC3BAB82B45__INCLUDED_)
#define AFX_LEFTPANE_H__AB53807F_A20F_4862_86CF_AEC3BAB82B45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LeftPane.h : header file
//
#include "RightFrame.h"
/////////////////////////////////////////////////////////////////////////////
// CLeftPane form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CLeftPane : public CFormView
{
protected:
	CLeftPane();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CLeftPane)

// Form Data
public:
	//{{AFX_DATA(CLeftPane)
	enum { IDD = IDD_LEFTPANE_FORMVIEW };
	CTreeCtrl	m_LeftTree;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:
	CRightFrame* m_pRightFrame;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLeftPane)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CLeftPane();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CLeftPane)
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void InitTree();
	HTREEITEM m_Root;
	CImageList m_TreeImageList;
	CRect m_sRect;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEFTPANE_H__AB53807F_A20F_4862_86CF_AEC3BAB82B45__INCLUDED_)

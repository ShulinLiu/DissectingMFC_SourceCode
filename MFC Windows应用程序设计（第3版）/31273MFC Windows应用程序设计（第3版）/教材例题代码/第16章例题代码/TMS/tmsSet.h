#if !defined(AFX_TMSSET_H__69760E1D_FA93_11D7_9182_E31D909B8909__INCLUDED_)
#define AFX_TMSSET_H__69760E1D_FA93_11D7_9182_E31D909B8909__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// tmsSet.h : header file
//
#include <afxdb.h>

/////////////////////////////////////////////////////////////////////////////
// CtmsSet recordset

class CtmsSet : public CRecordset
{
public:
	CtmsSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CtmsSet)

// Field/Param Data
	//{{AFX_FIELD(CtmsSet, CRecordset)
	CString	m_sname;
	CString	m_sno;
	CString	m_sex;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CtmsSet)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TMSSET_H__69760E1D_FA93_11D7_9182_E31D909B8909__INCLUDED_)

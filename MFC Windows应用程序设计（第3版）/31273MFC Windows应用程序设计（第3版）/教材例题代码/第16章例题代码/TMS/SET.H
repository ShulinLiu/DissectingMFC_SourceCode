#if !defined(AFX_SET_H__B88EC3A3_FB48_11D7_9182_F1DB3EAD8409__INCLUDED_)
#define AFX_SET_H__B88EC3A3_FB48_11D7_9182_F1DB3EAD8409__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// set.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cset recordset

class Cset : public CRecordset
{
public:
	Cset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Cset)

// Field/Param Data
	//{{AFX_FIELD(Cset, CRecordset)
	CString	m_sno;
	CString	m_sname;
	CString	m_ssex;
	CTime	m_sbirth;
	CString	m_dno;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cset)
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

#endif // !defined(AFX_SET_H__B88EC3A3_FB48_11D7_9182_F1DB3EAD8409__INCLUDED_)

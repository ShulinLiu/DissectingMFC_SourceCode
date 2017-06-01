#if !defined(AFX_STUINFOSET_H__B13720CF_7940_4E6A_B431_C87D588538F8__INCLUDED_)
#define AFX_STUINFOSET_H__B13720CF_7940_4E6A_B431_C87D588538F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StuInfoSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStuInfoSet recordset

class CStuInfoSet : public CRecordset
{
public:
	CStuInfoSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CStuInfoSet)

// Field/Param Data
	//{{AFX_FIELD(CStuInfoSet, CRecordset)
	CString	m_StudentID;
	CString	m_StuName;
	CString	m_StuSex;
	int		m_StuAge;
	CString	m_StuDept;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStuInfoSet)
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

#endif // !defined(AFX_STUINFOSET_H__B13720CF_7940_4E6A_B431_C87D588538F8__INCLUDED_)

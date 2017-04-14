// set.cpp : implementation file
//

#include "stdafx.h"
#include "tms.h"
#include "set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cset

IMPLEMENT_DYNAMIC(Cset, CRecordset)

Cset::Cset(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(Cset)
	m_sno = _T("");
	m_sname = _T("");
	m_ssex = _T("");
	m_dno = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString Cset::GetDefaultConnect()
{
	return _T("ODBC;DSN=tms");
}

CString Cset::GetDefaultSQL()
{
	return _T("[dbo].[student]");
}

void Cset::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(Cset)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[sno]"), m_sno);
	RFX_Text(pFX, _T("[sname]"), m_sname);
	RFX_Text(pFX, _T("[ssex]"), m_ssex);
	RFX_Date(pFX, _T("[sbirth]"), m_sbirth);
	RFX_Text(pFX, _T("[dno]"), m_dno);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// Cset diagnostics

#ifdef _DEBUG
void Cset::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cset::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

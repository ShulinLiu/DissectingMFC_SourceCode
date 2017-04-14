// tmsSet.cpp : implementation file
//

#include "stdafx.h"
#include "tms.h"
#include "tmsSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CtmsSet

IMPLEMENT_DYNAMIC(CtmsSet, CRecordset)

CtmsSet::CtmsSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CtmsSet)
	m_sname = _T("");
	m_sno = _T("");
	m_sex = _T("");
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CtmsSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=tmsDSN");
}

CString CtmsSet::GetDefaultSQL()
{
	return _T("[dbo].[student]");
}

void CtmsSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CtmsSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[sname]"), m_sname);
	RFX_Text(pFX, _T("[sno]"), m_sno);
	RFX_Text(pFX, _T("[ssex]"), m_sex);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CtmsSet diagnostics

#ifdef _DEBUG
void CtmsSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CtmsSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

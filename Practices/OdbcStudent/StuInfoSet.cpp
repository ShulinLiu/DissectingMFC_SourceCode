// StuInfoSet.cpp : implementation file
//

#include "stdafx.h"
#include "OdbcStudent.h"
#include "StuInfoSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStuInfoSet

IMPLEMENT_DYNAMIC(CStuInfoSet, CRecordset)

CStuInfoSet::CStuInfoSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CStuInfoSet)
	m_StudentID = _T("");
	m_StuName = _T("");
	m_StuSex = _T("");
	m_StuAge = 0;
	m_StuDept = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CStuInfoSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=学生信息数据源");
}

CString CStuInfoSet::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void CStuInfoSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CStuInfoSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[StudentID]"), m_StudentID);
	RFX_Text(pFX, _T("[StuName]"), m_StuName);
	RFX_Text(pFX, _T("[StuSex]"), m_StuSex);
	RFX_Int(pFX, _T("[StuAge]"), m_StuAge);
	RFX_Text(pFX, _T("[StuDept]"), m_StuDept);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CStuInfoSet diagnostics

#ifdef _DEBUG
void CStuInfoSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CStuInfoSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

// xtDoc.cpp : implementation of the CXtDoc class
//

#include "stdafx.h"
#include "xt.h"

#include "xtDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXtDoc

IMPLEMENT_DYNCREATE(CXtDoc, CDocument)

BEGIN_MESSAGE_MAP(CXtDoc, CDocument)
	//{{AFX_MSG_MAP(CXtDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXtDoc construction/destruction

CXtDoc::CXtDoc()
{
	// TODO: add one-time construction code here

}

CXtDoc::~CXtDoc()
{
}

BOOL CXtDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CXtDoc serialization

void CXtDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CXtDoc diagnostics

#ifdef _DEBUG
void CXtDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CXtDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CXtDoc commands

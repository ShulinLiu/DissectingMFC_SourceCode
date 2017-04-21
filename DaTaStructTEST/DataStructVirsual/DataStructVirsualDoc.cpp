// DataStructVirsualDoc.cpp : implementation of the CDataStructVirsualDoc class
//

#include "stdafx.h"
#include "DataStructVirsual.h"

#include "DataStructVirsualDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualDoc

IMPLEMENT_DYNCREATE(CDataStructVirsualDoc, CDocument)

BEGIN_MESSAGE_MAP(CDataStructVirsualDoc, CDocument)
	//{{AFX_MSG_MAP(CDataStructVirsualDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualDoc construction/destruction

CDataStructVirsualDoc::CDataStructVirsualDoc()
{
	// TODO: add one-time construction code here

}

CDataStructVirsualDoc::~CDataStructVirsualDoc()
{
}

BOOL CDataStructVirsualDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualDoc serialization

void CDataStructVirsualDoc::Serialize(CArchive& ar)
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
// CDataStructVirsualDoc diagnostics

#ifdef _DEBUG
void CDataStructVirsualDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDataStructVirsualDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDataStructVirsualDoc commands

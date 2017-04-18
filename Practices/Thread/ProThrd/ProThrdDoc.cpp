// ProThrdDoc.cpp : implementation of the CProThrdDoc class
//

#include "stdafx.h"
#include "ProThrd.h"

#include "ProThrdDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProThrdDoc

IMPLEMENT_DYNCREATE(CProThrdDoc, CDocument)

BEGIN_MESSAGE_MAP(CProThrdDoc, CDocument)
	//{{AFX_MSG_MAP(CProThrdDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProThrdDoc construction/destruction

CProThrdDoc::CProThrdDoc()
{
	// TODO: add one-time construction code here

}

CProThrdDoc::~CProThrdDoc()
{
}

BOOL CProThrdDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CProThrdDoc serialization

void CProThrdDoc::Serialize(CArchive& ar)
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
// CProThrdDoc diagnostics

#ifdef _DEBUG
void CProThrdDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CProThrdDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProThrdDoc commands

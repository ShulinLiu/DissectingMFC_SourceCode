// SyncThrdDoc.cpp : implementation of the CSyncThrdDoc class
//

#include "stdafx.h"
#include "SyncThrd.h"

#include "SyncThrdDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSyncThrdDoc

IMPLEMENT_DYNCREATE(CSyncThrdDoc, CDocument)

BEGIN_MESSAGE_MAP(CSyncThrdDoc, CDocument)
	//{{AFX_MSG_MAP(CSyncThrdDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSyncThrdDoc construction/destruction

CSyncThrdDoc::CSyncThrdDoc()
{
	// TODO: add one-time construction code here

}

CSyncThrdDoc::~CSyncThrdDoc()
{
}

BOOL CSyncThrdDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSyncThrdDoc serialization

void CSyncThrdDoc::Serialize(CArchive& ar)
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
// CSyncThrdDoc diagnostics

#ifdef _DEBUG
void CSyncThrdDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSyncThrdDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSyncThrdDoc commands

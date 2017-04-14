// NMdlDlgDoc.cpp : implementation of the CNMdlDlgDoc class
//

#include "stdafx.h"
#include "NMdlDlg.h"

#include "NMdlDlgDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgDoc

IMPLEMENT_DYNCREATE(CNMdlDlgDoc, CDocument)

BEGIN_MESSAGE_MAP(CNMdlDlgDoc, CDocument)
	//{{AFX_MSG_MAP(CNMdlDlgDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgDoc construction/destruction

CNMdlDlgDoc::CNMdlDlgDoc()
{
	// TODO: add one-time construction code here

}

CNMdlDlgDoc::~CNMdlDlgDoc()
{
}

BOOL CNMdlDlgDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgDoc serialization

void CNMdlDlgDoc::Serialize(CArchive& ar)
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
// CNMdlDlgDoc diagnostics

#ifdef _DEBUG
void CNMdlDlgDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNMdlDlgDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CNMdlDlgDoc commands

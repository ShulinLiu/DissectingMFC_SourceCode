// AFXDlgDoc.cpp : implementation of the CAFXDlgDoc class
//

#include "stdafx.h"
#include "AFXDlg.h"

#include "AFXDlgDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgDoc

IMPLEMENT_DYNCREATE(CAFXDlgDoc, CDocument)

BEGIN_MESSAGE_MAP(CAFXDlgDoc, CDocument)
	//{{AFX_MSG_MAP(CAFXDlgDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgDoc construction/destruction

CAFXDlgDoc::CAFXDlgDoc()
{
	// TODO: add one-time construction code here

}

CAFXDlgDoc::~CAFXDlgDoc()
{
}

BOOL CAFXDlgDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAFXDlgDoc serialization

void CAFXDlgDoc::Serialize(CArchive& ar)
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
// CAFXDlgDoc diagnostics

#ifdef _DEBUG
void CAFXDlgDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAFXDlgDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgDoc commands

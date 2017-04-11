// DialogDoc.cpp : implementation of the CDialogDoc class
//

#include "stdafx.h"
#include "Dialog.h"

#include "DialogDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogDoc

IMPLEMENT_DYNCREATE(CDialogDoc, CDocument)

BEGIN_MESSAGE_MAP(CDialogDoc, CDocument)
	//{{AFX_MSG_MAP(CDialogDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogDoc construction/destruction

CDialogDoc::CDialogDoc()
{
	// TODO: add one-time construction code here

}

CDialogDoc::~CDialogDoc()
{
}

BOOL CDialogDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDialogDoc serialization

void CDialogDoc::Serialize(CArchive& ar)
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
// CDialogDoc diagnostics

#ifdef _DEBUG
void CDialogDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDialogDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDialogDoc commands

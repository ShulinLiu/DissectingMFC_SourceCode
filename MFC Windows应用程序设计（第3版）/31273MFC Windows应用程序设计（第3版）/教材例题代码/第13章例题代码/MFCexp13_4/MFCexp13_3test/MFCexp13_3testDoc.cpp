// MFCexp13_3testDoc.cpp : implementation of the CMFCexp13_3testDoc class
//

#include "stdafx.h"
#include "MFCexp13_3test.h"

#include "MFCexp13_3testDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testDoc

IMPLEMENT_DYNCREATE(CMFCexp13_3testDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp13_3testDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp13_3testDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testDoc construction/destruction

CMFCexp13_3testDoc::CMFCexp13_3testDoc()
{
	// TODO: add one-time construction code here

}

CMFCexp13_3testDoc::~CMFCexp13_3testDoc()
{
}

BOOL CMFCexp13_3testDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testDoc serialization

void CMFCexp13_3testDoc::Serialize(CArchive& ar)
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
// CMFCexp13_3testDoc diagnostics

#ifdef _DEBUG
void CMFCexp13_3testDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp13_3testDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testDoc commands

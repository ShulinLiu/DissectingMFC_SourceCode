// MFCexp13_4testDoc.cpp : implementation of the CMFCexp13_4testDoc class
//

#include "stdafx.h"
#include "MFCexp13_4test.h"

#include "MFCexp13_4testDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testDoc

IMPLEMENT_DYNCREATE(CMFCexp13_4testDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp13_4testDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp13_4testDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testDoc construction/destruction

CMFCexp13_4testDoc::CMFCexp13_4testDoc()
{
	// TODO: add one-time construction code here

}

CMFCexp13_4testDoc::~CMFCexp13_4testDoc()
{
}

BOOL CMFCexp13_4testDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testDoc serialization

void CMFCexp13_4testDoc::Serialize(CArchive& ar)
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
// CMFCexp13_4testDoc diagnostics

#ifdef _DEBUG
void CMFCexp13_4testDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp13_4testDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testDoc commands

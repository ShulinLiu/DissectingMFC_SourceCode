// CArchiveDoc.cpp : implementation of the CCArchiveDoc class
//

#include "stdafx.h"
#include "CArchive.h"

#include "CArchiveDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCArchiveDoc

IMPLEMENT_DYNCREATE(CCArchiveDoc, CDocument)

BEGIN_MESSAGE_MAP(CCArchiveDoc, CDocument)
	//{{AFX_MSG_MAP(CCArchiveDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCArchiveDoc construction/destruction

CCArchiveDoc::CCArchiveDoc()
{
	// TODO: add one-time construction code here

}

CCArchiveDoc::~CCArchiveDoc()
{
}

BOOL CCArchiveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCArchiveDoc serialization

void CCArchiveDoc::Serialize(CArchive& ar)
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
// CCArchiveDoc diagnostics

#ifdef _DEBUG
void CCArchiveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCArchiveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCArchiveDoc commands

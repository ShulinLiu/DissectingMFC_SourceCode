// MFCexp5_1Doc.cpp : implementation of the CMFCexp5_1Doc class
//

#include "stdafx.h"
#include "MFCexp5_1.h"

#include "MFCexp5_1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1Doc

IMPLEMENT_DYNCREATE(CMFCexp5_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp5_1Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp5_1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1Doc construction/destruction

CMFCexp5_1Doc::CMFCexp5_1Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp5_1Doc::~CMFCexp5_1Doc()
{
}

BOOL CMFCexp5_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1Doc serialization

void CMFCexp5_1Doc::Serialize(CArchive& ar)
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
// CMFCexp5_1Doc diagnostics

#ifdef _DEBUG
void CMFCexp5_1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp5_1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp5_1Doc commands

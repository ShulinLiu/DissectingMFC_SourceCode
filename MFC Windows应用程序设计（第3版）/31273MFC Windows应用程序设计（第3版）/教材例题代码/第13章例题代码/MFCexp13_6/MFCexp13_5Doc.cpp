// MFCexp13_5Doc.cpp : implementation of the CMFCexp13_5Doc class
//

#include "stdafx.h"
#include "MFCexp13_5.h"

#include "MFCexp13_5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5Doc

IMPLEMENT_DYNCREATE(CMFCexp13_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp13_5Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp13_5Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5Doc construction/destruction

CMFCexp13_5Doc::CMFCexp13_5Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp13_5Doc::~CMFCexp13_5Doc()
{
}

BOOL CMFCexp13_5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5Doc serialization

void CMFCexp13_5Doc::Serialize(CArchive& ar)
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
// CMFCexp13_5Doc diagnostics

#ifdef _DEBUG
void CMFCexp13_5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp13_5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5Doc commands

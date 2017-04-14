// MFCexp12_1Doc.cpp : implementation of the CMFCexp12_1Doc class
//

#include "stdafx.h"
#include "MFCexp12_1.h"

#include "MFCexp12_1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1Doc

IMPLEMENT_DYNCREATE(CMFCexp12_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp12_1Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp12_1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1Doc construction/destruction

CMFCexp12_1Doc::CMFCexp12_1Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp12_1Doc::~CMFCexp12_1Doc()
{
}

BOOL CMFCexp12_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1Doc serialization

void CMFCexp12_1Doc::Serialize(CArchive& ar)
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
// CMFCexp12_1Doc diagnostics

#ifdef _DEBUG
void CMFCexp12_1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp12_1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp12_1Doc commands

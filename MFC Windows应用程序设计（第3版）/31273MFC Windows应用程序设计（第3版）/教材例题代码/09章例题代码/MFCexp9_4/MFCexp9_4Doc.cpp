// MFCexp9_4Doc.cpp : implementation of the CMFCexp9_4Doc class
//

#include "stdafx.h"
#include "MFCexp9_4.h"

#include "MFCexp9_4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4Doc

IMPLEMENT_DYNCREATE(CMFCexp9_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp9_4Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp9_4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4Doc construction/destruction

CMFCexp9_4Doc::CMFCexp9_4Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp9_4Doc::~CMFCexp9_4Doc()
{
}

BOOL CMFCexp9_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4Doc serialization

void CMFCexp9_4Doc::Serialize(CArchive& ar)
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
// CMFCexp9_4Doc diagnostics

#ifdef _DEBUG
void CMFCexp9_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp9_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4Doc commands

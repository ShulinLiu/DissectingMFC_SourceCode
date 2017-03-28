// MFCexp4Doc.cpp : implementation of the CMFCexp4Doc class
//

#include "stdafx.h"
#include "MFCexp4.h"

#include "MFCexp4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4Doc

IMPLEMENT_DYNCREATE(CMFCexp4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp4Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4Doc construction/destruction

CMFCexp4Doc::CMFCexp4Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp4Doc::~CMFCexp4Doc()
{
}

BOOL CMFCexp4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp4Doc serialization

void CMFCexp4Doc::Serialize(CArchive& ar)
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
// CMFCexp4Doc diagnostics

#ifdef _DEBUG
void CMFCexp4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4Doc commands

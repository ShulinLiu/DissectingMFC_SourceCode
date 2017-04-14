// MFCexp11_7Doc.cpp : implementation of the CMFCexp11_7Doc class
//

#include "stdafx.h"
#include "MFCexp11_7.h"

#include "MFCexp11_7Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7Doc

IMPLEMENT_DYNCREATE(CMFCexp11_7Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp11_7Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp11_7Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7Doc construction/destruction

CMFCexp11_7Doc::CMFCexp11_7Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp11_7Doc::~CMFCexp11_7Doc()
{
}

BOOL CMFCexp11_7Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7Doc serialization

void CMFCexp11_7Doc::Serialize(CArchive& ar)
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
// CMFCexp11_7Doc diagnostics

#ifdef _DEBUG
void CMFCexp11_7Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp11_7Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_7Doc commands

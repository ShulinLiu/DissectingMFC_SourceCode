// MFCexp7_7Doc.cpp : implementation of the CMFCexp7_7Doc class
//

#include "stdafx.h"
#include "MFCexp7_7.h"

#include "MFCexp7_7Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7Doc

IMPLEMENT_DYNCREATE(CMFCexp7_7Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp7_7Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp7_7Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7Doc construction/destruction

CMFCexp7_7Doc::CMFCexp7_7Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp7_7Doc::~CMFCexp7_7Doc()
{
}

BOOL CMFCexp7_7Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7Doc serialization

void CMFCexp7_7Doc::Serialize(CArchive& ar)
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
// CMFCexp7_7Doc diagnostics

#ifdef _DEBUG
void CMFCexp7_7Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp7_7Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_7Doc commands

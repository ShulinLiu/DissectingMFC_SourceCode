// MFCexp7_4Doc.cpp : implementation of the CMFCexp7_4Doc class
//

#include "stdafx.h"
#include "MFCexp7_4.h"

#include "MFCexp7_4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4Doc

IMPLEMENT_DYNCREATE(CMFCexp7_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp7_4Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp7_4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4Doc construction/destruction

CMFCexp7_4Doc::CMFCexp7_4Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp7_4Doc::~CMFCexp7_4Doc()
{
}

BOOL CMFCexp7_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4Doc serialization

void CMFCexp7_4Doc::Serialize(CArchive& ar)
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
// CMFCexp7_4Doc diagnostics

#ifdef _DEBUG
void CMFCexp7_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp7_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_4Doc commands

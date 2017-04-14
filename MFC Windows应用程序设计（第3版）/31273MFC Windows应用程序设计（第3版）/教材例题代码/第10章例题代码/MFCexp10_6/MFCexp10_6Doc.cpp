// MFCexp10_6Doc.cpp : implementation of the CMFCexp10_6Doc class
//

#include "stdafx.h"
#include "MFCexp10_6.h"

#include "MFCexp10_6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_6Doc

IMPLEMENT_DYNCREATE(CMFCexp10_6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp10_6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp10_6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_6Doc construction/destruction

CMFCexp10_6Doc::CMFCexp10_6Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp10_6Doc::~CMFCexp10_6Doc()
{
}

BOOL CMFCexp10_6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_6Doc serialization

void CMFCexp10_6Doc::Serialize(CArchive& ar)
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
// CMFCexp10_6Doc diagnostics

#ifdef _DEBUG
void CMFCexp10_6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp10_6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_6Doc commands

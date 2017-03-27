// MYexp3_4Doc.cpp : implementation of the CMYexp3_4Doc class
//

#include "stdafx.h"
#include "MYexp3_4.h"

#include "MYexp3_4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4Doc

IMPLEMENT_DYNCREATE(CMYexp3_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMYexp3_4Doc, CDocument)
	//{{AFX_MSG_MAP(CMYexp3_4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4Doc construction/destruction

CMYexp3_4Doc::CMYexp3_4Doc()
{
	// TODO: add one-time construction code here
	m_Text = "Hello!";

}

CMYexp3_4Doc::~CMYexp3_4Doc()
{
}

BOOL CMYexp3_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4Doc serialization

void CMYexp3_4Doc::Serialize(CArchive& ar)
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
// CMYexp3_4Doc diagnostics

#ifdef _DEBUG
void CMYexp3_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMYexp3_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMYexp3_4Doc commands

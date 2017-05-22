// BMPDocument.cpp : implementation file
//

#include "stdafx.h"
#include "MFCexp3_4.h"
#include "BMPDocument.h"

#include "BMPView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBMPDocument

IMPLEMENT_DYNCREATE(CBMPDocument, CDocument)

CBMPDocument::CBMPDocument()
{
}

BOOL CBMPDocument::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CBMPDocument::~CBMPDocument()
{
}


BEGIN_MESSAGE_MAP(CBMPDocument, CDocument)
	//{{AFX_MSG_MAP(CBMPDocument)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBMPDocument diagnostics

#ifdef _DEBUG
void CBMPDocument::AssertValid() const
{
	CDocument::AssertValid();
}

void CBMPDocument::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBMPDocument serialization

void CBMPDocument::Serialize(CArchive& ar)
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
// CBMPDocument commands

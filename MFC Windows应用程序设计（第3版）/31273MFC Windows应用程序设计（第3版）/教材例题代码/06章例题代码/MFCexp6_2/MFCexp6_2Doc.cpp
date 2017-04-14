// MFCexp6_2Doc.cpp : implementation of the CMFCexp6_2Doc class
//

#include "stdafx.h"
#include "MFCexp6_2.h"

#include "MFCexp6_2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2Doc

IMPLEMENT_DYNCREATE(CMFCexp6_2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp6_2Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp6_2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2Doc construction/destruction

CMFCexp6_2Doc::CMFCexp6_2Doc()
{
	// TODO: add one-time construction code here
	m_Rectag.SetSize(256,256);
}

CMFCexp6_2Doc::~CMFCexp6_2Doc()
{
}

BOOL CMFCexp6_2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2Doc serialization

void CMFCexp6_2Doc::Serialize(CArchive& ar)
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
// CMFCexp6_2Doc diagnostics

#ifdef _DEBUG
void CMFCexp6_2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp6_2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_2Doc commands

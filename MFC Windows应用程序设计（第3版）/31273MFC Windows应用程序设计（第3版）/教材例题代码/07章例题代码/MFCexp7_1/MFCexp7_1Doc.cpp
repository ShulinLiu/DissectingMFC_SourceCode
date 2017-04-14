// MFCexp7_1Doc.cpp : implementation of the CMFCexp7_1Doc class
//

#include "stdafx.h"
#include "MFCexp7_1.h"

#include "MFCexp7_1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1Doc

IMPLEMENT_DYNCREATE(CMFCexp7_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp7_1Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp7_1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1Doc construction/destruction

CMFCexp7_1Doc::CMFCexp7_1Doc()
{
	// TODO: add one-time construction code here
	m_tagRec.left=30;	m_tagRec.top=30;
	m_tagRec.right=350;	m_tagRec.bottom=300;
}

CMFCexp7_1Doc::~CMFCexp7_1Doc()
{
}

BOOL CMFCexp7_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1Doc serialization

void CMFCexp7_1Doc::Serialize(CArchive& ar)
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
// CMFCexp7_1Doc diagnostics

#ifdef _DEBUG
void CMFCexp7_1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp7_1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1Doc commands

// MFCexp7_6Doc.cpp : implementation of the CMFCexp7_6Doc class
//

#include "stdafx.h"
#include "MFCexp7_6.h"

#include "MFCexp7_6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6Doc

IMPLEMENT_DYNCREATE(CMFCexp7_6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp7_6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp7_6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6Doc construction/destruction

CMFCexp7_6Doc::CMFCexp7_6Doc()
{
	// TODO: add one-time construction code here
	m_crlRect.left=30;		m_crlRect.top=30;
	m_crlRect.right=80;		m_crlRect.bottom=80;

}

CMFCexp7_6Doc::~CMFCexp7_6Doc()
{
}

BOOL CMFCexp7_6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6Doc serialization

void CMFCexp7_6Doc::Serialize(CArchive& ar)
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
// CMFCexp7_6Doc diagnostics

#ifdef _DEBUG
void CMFCexp7_6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp7_6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6Doc commands

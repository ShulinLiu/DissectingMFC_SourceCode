// MFCexp8_2Doc.cpp : implementation of the CMFCexp8_2Doc class
//

#include "stdafx.h"
#include "MFCexp8_2.h"

#include "MFCexp8_2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2Doc

IMPLEMENT_DYNCREATE(CMFCexp8_2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp8_2Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp8_2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2Doc construction/destruction

CMFCexp8_2Doc::CMFCexp8_2Doc()
{
	// TODO: add one-time construction code here
	m_crlRect.left=30;		m_crlRect.top=30;
	m_crlRect.right=130;	m_crlRect.bottom=130;

}

CMFCexp8_2Doc::~CMFCexp8_2Doc()
{
}

BOOL CMFCexp8_2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2Doc serialization

void CMFCexp8_2Doc::Serialize(CArchive& ar)
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
// CMFCexp8_2Doc diagnostics

#ifdef _DEBUG
void CMFCexp8_2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp8_2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_2Doc commands

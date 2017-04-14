// MFCexp8_4Doc.cpp : implementation of the CMFCexp8_4Doc class
//

#include "stdafx.h"
#include "MFCexp8_4.h"

#include "MFCexp8_4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4Doc

IMPLEMENT_DYNCREATE(CMFCexp8_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp8_4Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp8_4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4Doc construction/destruction

CMFCexp8_4Doc::CMFCexp8_4Doc()
{
	// TODO: add one-time construction code here
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_MY_BITMAP);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth=BM.bmWidth;
	m_nHeight=BM.bmHeight;

}

CMFCexp8_4Doc::~CMFCexp8_4Doc()
{
}

BOOL CMFCexp8_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4Doc serialization

void CMFCexp8_4Doc::Serialize(CArchive& ar)
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
// CMFCexp8_4Doc diagnostics

#ifdef _DEBUG
void CMFCexp8_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp8_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp8_4Doc commands

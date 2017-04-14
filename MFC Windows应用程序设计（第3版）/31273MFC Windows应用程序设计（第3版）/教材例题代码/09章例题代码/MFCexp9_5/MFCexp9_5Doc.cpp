// MFCexp9_5Doc.cpp : implementation of the CMFCexp9_5Doc class
//

#include "stdafx.h"
#include "MFCexp9_5.h"

#include "MFCexp9_5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5Doc

IMPLEMENT_DYNCREATE(CMFCexp9_5Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp9_5Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp9_5Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5Doc construction/destruction

CMFCexp9_5Doc::CMFCexp9_5Doc()
{
	// TODO: add one-time construction code here
	m_lLetter=' ';			//初始化字符变量
}

CMFCexp9_5Doc::~CMFCexp9_5Doc()
{
}

BOOL CMFCexp9_5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5Doc serialization

void CMFCexp9_5Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring( ))
	{
		ar<<m_lLetter;
	}
	else
	{
		ar>>m_lLetter;
	}
	m_Letters.Serialize(ar);//调用CLetter对象的序列化函数

}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5Doc diagnostics

#ifdef _DEBUG
void CMFCexp9_5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp9_5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_5Doc commands

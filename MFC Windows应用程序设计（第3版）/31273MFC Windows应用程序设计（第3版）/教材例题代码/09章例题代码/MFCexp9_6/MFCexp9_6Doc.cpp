// MFCexp9_6Doc.cpp : implementation of the CMFCexp9_6Doc class
//

#include "stdafx.h"
#include "MFCexp9_6.h"

#include "MFCexp9_6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6Doc

IMPLEMENT_DYNCREATE(CMFCexp9_6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp9_6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp9_6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6Doc construction/destruction

CMFCexp9_6Doc::CMFCexp9_6Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp9_6Doc::~CMFCexp9_6Doc()
{
}

BOOL CMFCexp9_6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6Doc serialization

void CMFCexp9_6Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
	m_LetterList.Serialize(ar);
}
void CMFCexp9_6Doc::NewLetter(int x,int y)
{
	CLetter* pLetterItem = new CLetter('m',x,y);//创建新对象
	m_LetterList.AddTail(pLetterItem);		//将新对象加入链表尾部
	SetModifiedFlag( );  					//设置文档修改标志
}
void CMFCexp9_6Doc::DrawLetter(CDC*pDC )
{
	POSITION pos=m_LetterList.GetHeadPosition();//获得链表头位置	
	while(pos!=NULL)
	{
		CLetter*Letter=m_LetterList.GetNext(pos);//获得链表元素
		pDC->TextOut(Letter->m_X-5,			//显示
			Letter->m_Y-12,
			Letter->m_sLetter);
	}
}
/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6Doc diagnostics

#ifdef _DEBUG
void CMFCexp9_6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp9_6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_6Doc commands










// MFCexp7_6View.cpp : implementation of the CMFCexp7_6View class
//

#include "stdafx.h"
#include "MFCexp7_6.h"

#include "MFCexp7_6Doc.h"
#include "MFCexp7_6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6View

IMPLEMENT_DYNCREATE(CMFCexp7_6View, CView)

BEGIN_MESSAGE_MAP(CMFCexp7_6View, CView)
	//{{AFX_MSG_MAP(CMFCexp7_6View)
	ON_WM_CHAR()
	ON_WM_KEYDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6View construction/destruction

CMFCexp7_6View::CMFCexp7_6View()
{
	// TODO: add construction code here

}

CMFCexp7_6View::~CMFCexp7_6View()
{
}

BOOL CMFCexp7_6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6View drawing

void CMFCexp7_6View::OnDraw(CDC* pDC)
{
	CMFCexp7_6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->Ellipse (pDoc->m_crlRect);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6View diagnostics

#ifdef _DEBUG
void CMFCexp7_6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp7_6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp7_6Doc* CMFCexp7_6View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp7_6Doc)));
	return (CMFCexp7_6Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_6View message handlers

void CMFCexp7_6View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	CMFCexp7_6Doc*pDoc=GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);//获得窗口用户区的尺寸
	switch(nChar)
	{
	case 'L':
		if(pDoc->m_crlRect.left>0)
		{
			pDoc->m_crlRect.left-=50;
			pDoc->m_crlRect.right-=50;
		}
		break;
	case 'R':		
if(pDoc->m_crlRect.right
<=(clientRec.right-clientRec.left))
		{
			pDoc->m_crlRect.left+=50;
			pDoc->m_crlRect.right+=50;
		}
		break;
	}
	InvalidateRect(NULL,TRUE);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CMFCexp7_6View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	CMFCexp7_6Doc*pDoc=GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch(nChar)
	{
	case VK_LEFT:
		if(pDoc->m_crlRect.left>0)
		{
			pDoc->m_crlRect.left-=5;
			pDoc->m_crlRect.right-=5;
		}
		break;
	case VK_RIGHT:
		if(pDoc->m_crlRect.right
					<=(clientRec.right-clientRec.left))
		{
			pDoc->m_crlRect.left+=5;
			pDoc->m_crlRect.right+=5;
		}
		break;
	}
	InvalidateRect(NULL,TRUE);
	
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

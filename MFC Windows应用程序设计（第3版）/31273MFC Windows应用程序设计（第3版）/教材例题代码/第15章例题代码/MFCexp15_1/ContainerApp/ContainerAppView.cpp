// ContainerAppView.cpp : implementation of the CContainerAppView class
//

#include "stdafx.h"
#include "ContainerApp.h"

#include "ContainerAppDoc.h"
#include "CntrItem.h"
#include "ContainerAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CContainerAppView

IMPLEMENT_DYNCREATE(CContainerAppView, CView)

BEGIN_MESSAGE_MAP(CContainerAppView, CView)
	//{{AFX_MSG_MAP(CContainerAppView)
	ON_WM_DESTROY()
	ON_WM_SETFOCUS()
	ON_WM_SIZE()
	ON_COMMAND(ID_OLE_INSERT_NEW, OnInsertObject)
	ON_COMMAND(ID_CANCEL_EDIT_CNTR, OnCancelEditCntr)
	ON_WM_SETCURSOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_KEYDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CContainerAppView construction/destruction

CContainerAppView::CContainerAppView()
{
	m_pSelection = NULL;
	// TODO: add construction code here

}

CContainerAppView::~CContainerAppView()
{
}

BOOL CContainerAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CContainerAppView drawing

void CContainerAppView::OnDraw(CDC* pDC)
{
	CContainerAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
	// TODO: also draw all OLE items in the document

	// Draw the selection at an arbitrary position.  This code should be
	//  removed once your real drawing code is implemented.  This position
	//  corresponds exactly to the rectangle returned by CContainerAppCntrItem,
	//  to give the effect of in-place editing.

	// TODO: remove this code when final draw code is complete.

	POSITION pos = pDoc->GetStartPosition();

	while(pos != NULL)
	{
		CContainerAppCntrItem* pObject =
			(CContainerAppCntrItem*) pDoc->GetNextItem(pos);
		pObject->Draw(pDC, pObject->m_objectRect);
		CRectTracker tracker;
		SetupTracker(&tracker, pObject);
		tracker.Draw(pDC);
	}

	/*if (m_pSelection == NULL)
	{
		POSITION pos = pDoc->GetStartPosition();
		m_pSelection = (CContainerAppCntrItem*)pDoc->GetNextClientItem(pos);
	}
	if (m_pSelection != NULL)
		m_pSelection->Draw(pDC, CRect(10, 10, 210, 210));*/
}

void CContainerAppView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: remove this code when final selection model code is written
	m_pSelection = NULL;    // initialize selection

}

void CContainerAppView::OnDestroy()
{
	// Deactivate the item on destruction; this is important
	// when a splitter view is being used.
   CView::OnDestroy();
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
}


/////////////////////////////////////////////////////////////////////////////
// OLE Client support and commands

BOOL CContainerAppView::IsSelected(const CObject* pDocItem) const
{
	// The implementation below is adequate if your selection consists of
	//  only CContainerAppCntrItem objects.  To handle different selection
	//  mechanisms, the implementation here should be replaced.

	// TODO: implement this function that tests for a selected OLE client item

	return pDocItem == m_pSelection;
}

void CContainerAppView::OnInsertObject()
{
	// Invoke the standard Insert Object dialog box to obtain information
	//  for new CContainerAppCntrItem object.
	COleInsertDialog dlg;
	if (dlg.DoModal() != IDOK)
		return;

	BeginWaitCursor();

	CContainerAppCntrItem* pItem = NULL;
	TRY
	{
		// Create new item connected to this document.
		CContainerAppDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pItem = new CContainerAppCntrItem(pDoc);
		ASSERT_VALID(pItem);

		// Initialize the item from the dialog data.
		if (!dlg.CreateItem(pItem))
			AfxThrowMemoryException();  // any exception will do
		ASSERT_VALID(pItem);

		// If item created from class list (not from file) then launch
		//  the server to edit the item.
		if (dlg.GetSelectionType() == COleInsertDialog::createNewItem)
			pItem->DoVerb(OLEIVERB_SHOW, this);

		ASSERT_VALID(pItem);

		// As an arbitrary user interface design, this sets the selection
		//  to the last item inserted.

		// TODO: reimplement selection as appropriate for your application

		m_pSelection = pItem;   // set selection to last inserted item
		pDoc->UpdateAllViews(NULL);
	}
	CATCH(CException, e)
	{
		if (pItem != NULL)
		{
			ASSERT_VALID(pItem);
			pItem->Delete();
		}
		AfxMessageBox(IDP_FAILED_TO_CREATE);
	}
	END_CATCH

	EndWaitCursor();
}

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the container (not the server) causes the deactivation.
void CContainerAppView::OnCancelEditCntr()
{
	// Close any in-place active item on this view.
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
	{
		pActiveItem->Close();
	}
	ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}

// Special handling of OnSetFocus and OnSize are required for a container
//  when an object is being edited in-place.
void CContainerAppView::OnSetFocus(CWnd* pOldWnd)
{
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL &&
		pActiveItem->GetItemState() == COleClientItem::activeUIState)
	{
		// need to set focus to this item if it is in the same view
		CWnd* pWnd = pActiveItem->GetInPlaceWindow();
		if (pWnd != NULL)
		{
			pWnd->SetFocus();   // don't call the base class
			return;
		}
	}

	CView::OnSetFocus(pOldWnd);
}

void CContainerAppView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
		pActiveItem->SetItemRects();
}

/////////////////////////////////////////////////////////////////////////////
// CContainerAppView diagnostics

#ifdef _DEBUG
void CContainerAppView::AssertValid() const
{
	CView::AssertValid();
}

void CContainerAppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CContainerAppDoc* CContainerAppView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CContainerAppDoc)));
	return (CContainerAppDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CContainerAppView message handlers

BOOL CContainerAppView::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{
	// TODO: Add your message handler code here and/or call default
	
	if ((m_pSelection != NULL) && (pWnd == this))
	{
		CRectTracker tracker;
		SetupTracker(&tracker, m_pSelection);
		BOOL cursorSetByTracker =
			tracker.SetCursor(this, nHitTest);
		if (cursorSetByTracker)
			return TRUE;
	}

	return CView::OnSetCursor(pWnd, nHitTest, message);
}

void CContainerAppView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
    CContainerAppCntrItem* pHitItem = GetHitItem(point);
    SetObjectAsSelected(pHitItem);

	if (pHitItem == NULL)
		return;
    
    CRectTracker tracker;
    SetupTracker(&tracker, pHitItem);
    UpdateWindow();

	if (!tracker.Track(this, point))
		return;

    Invalidate();

    pHitItem->m_objectRect = tracker.m_rect;
    CContainerAppDoc* pDoc = GetDocument();
    pDoc->SetModifiedFlag();

	CView::OnLButtonDown(nFlags, point);
}

void CContainerAppView::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
    OnLButtonDown(nFlags, point);
    
    if (m_pSelection == NULL)
		return;

	SHORT keyState = GetKeyState(VK_CONTROL);
    LONG oleVerb;

    if (keyState < 0)
        oleVerb = OLEIVERB_OPEN;

    else
        oleVerb = OLEIVERB_PRIMARY;

    m_pSelection->DoVerb(oleVerb, this);

	CView::OnLButtonDblClk(nFlags, point);
}

void CContainerAppView::SetupTracker(CRectTracker * pTracker, CContainerAppCntrItem * pObject)
{
    pTracker->m_rect = pObject->m_objectRect;
    
    if (pObject == m_pSelection)
        pTracker->m_nStyle |= CRectTracker::resizeInside;

	OLE_OBJTYPE objType = pObject->GetType();

    if (objType == OT_EMBEDDED)
        pTracker->m_nStyle |= CRectTracker::solidLine;
    else if (objType == OT_LINK)
        pTracker->m_nStyle |= CRectTracker::dottedLine;
    
    UINT objectState = pObject->GetItemState();

    if ((objectState == COleClientItem::activeUIState) ||
		(objectState == COleClientItem::openState))
        pTracker->m_nStyle |= CRectTracker::hatchInside;
}

CContainerAppCntrItem* CContainerAppView::GetHitItem(CPoint point)
{
    CContainerAppCntrItem* pObjectHit = NULL;
    CContainerAppDoc* pDoc = GetDocument();
	BOOL objectHit;

    POSITION pos = pDoc->GetStartPosition();

    while (pos != NULL)
    {
        CContainerAppCntrItem* pObject =
            (CContainerAppCntrItem*)pDoc->GetNextItem(pos);
        objectHit = pObject->m_objectRect.PtInRect(point);

        if (objectHit)
            pObjectHit = pObject;
    }

    return pObjectHit;
}

void CContainerAppView::SetObjectAsSelected(CContainerAppCntrItem * pObject)
{
    CContainerAppDoc* pDoc = GetDocument();

    if ((m_pSelection != pObject) || (pObject == NULL))
    {
        COleClientItem* pActiveObject =
            pDoc->GetInPlaceActiveItem(this);

        if ((pActiveObject != pObject) &&
			    (pActiveObject != NULL))
            pActiveObject->Close();
    }

    m_pSelection = pObject; 
    Invalidate();
}

void CContainerAppView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	if ((m_pSelection == NULL) || (nChar != VK_DELETE))
		return;

	m_pSelection->Delete();
	m_pSelection = NULL;
	CContainerAppDoc* pDoc = GetDocument();
	pDoc->UpdateAllViews(NULL);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

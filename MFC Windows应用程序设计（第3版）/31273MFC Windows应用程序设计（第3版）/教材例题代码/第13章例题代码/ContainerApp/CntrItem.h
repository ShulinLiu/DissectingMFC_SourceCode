// CntrItem.h : interface of the CContainerAppCntrItem class
//

#if !defined(AFX_CNTRITEM_H__9DA2CFB4_616E_4404_AAC2_90F73903D320__INCLUDED_)
#define AFX_CNTRITEM_H__9DA2CFB4_616E_4404_AAC2_90F73903D320__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CContainerAppDoc;
class CContainerAppView;

class CContainerAppCntrItem : public COleClientItem
{
	DECLARE_SERIAL(CContainerAppCntrItem)

// Constructors
public:
	CContainerAppCntrItem(CContainerAppDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE.
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer.

// Attributes
public:
	CContainerAppDoc* GetDocument()
		{ return (CContainerAppDoc*)COleClientItem::GetDocument(); }
	CContainerAppView* GetActiveView()
		{ return (CContainerAppView*)COleClientItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CContainerAppCntrItem)
	public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();
	protected:
	virtual void OnGetItemPosition(CRect& rPosition);
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
	//}}AFX_VIRTUAL

// Implementation
public:
	~CContainerAppCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__9DA2CFB4_616E_4404_AAC2_90F73903D320__INCLUDED_)

// SrvrItem.h : interface of the CAutoServerSrvrItem class
//

#if !defined(AFX_SRVRITEM_H__2E660840_48D5_4F71_8801_B80B0AE212E9__INCLUDED_)
#define AFX_SRVRITEM_H__2E660840_48D5_4F71_8801_B80B0AE212E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CAutoServerSrvrItem : public COleServerItem
{
	DECLARE_DYNAMIC(CAutoServerSrvrItem)

// Constructors
public:
	CAutoServerSrvrItem(CAutoServerDoc* pContainerDoc);

// Attributes
	CAutoServerDoc* GetDocument() const
		{ return (CAutoServerDoc*)COleServerItem::GetDocument(); }

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoServerSrvrItem)
	public:
	virtual BOOL OnDraw(CDC* pDC, CSize& rSize);
	virtual BOOL OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize);
	//}}AFX_VIRTUAL

// Implementation
public:
	~CAutoServerSrvrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SRVRITEM_H__2E660840_48D5_4F71_8801_B80B0AE212E9__INCLUDED_)

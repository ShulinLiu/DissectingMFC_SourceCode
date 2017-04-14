// SrvrItem.h : interface of the CMFCexp15_2SrvrItem class
//

#if !defined(AFX_SRVRITEM_H__459BB2D0_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_SRVRITEM_H__459BB2D0_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCexp15_2SrvrItem : public COleServerItem
{
	DECLARE_DYNAMIC(CMFCexp15_2SrvrItem)

// Constructors
public:
	CMFCexp15_2SrvrItem(CMFCexp15_2Doc* pContainerDoc);

// Attributes
	CMFCexp15_2Doc* GetDocument() const
		{ return (CMFCexp15_2Doc*)COleServerItem::GetDocument(); }

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp15_2SrvrItem)
	public:
	virtual BOOL OnDraw(CDC* pDC, CSize& rSize);
	virtual BOOL OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize);
	//}}AFX_VIRTUAL

// Implementation
public:
	~CMFCexp15_2SrvrItem();
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

#endif // !defined(AFX_SRVRITEM_H__459BB2D0_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)

// ContainerAppDoc.h : interface of the CContainerAppDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTAINERAPPDOC_H__04931A15_6275_11D1_AB9F_50B153C10000__INCLUDED_)
#define AFX_CONTAINERAPPDOC_H__04931A15_6275_11D1_AB9F_50B153C10000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CContainerAppDoc : public COleDocument
{
protected: // create from serialization only
	CContainerAppDoc();
	DECLARE_DYNCREATE(CContainerAppDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CContainerAppDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CContainerAppDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CContainerAppDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTAINERAPPDOC_H__04931A15_6275_11D1_AB9F_50B153C10000__INCLUDED_)

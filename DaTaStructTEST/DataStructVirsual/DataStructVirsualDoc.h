// DataStructVirsualDoc.h : interface of the CDataStructVirsualDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATASTRUCTVIRSUALDOC_H__4A50CFE1_E73C_4B2C_8105_F4E58A670025__INCLUDED_)
#define AFX_DATASTRUCTVIRSUALDOC_H__4A50CFE1_E73C_4B2C_8105_F4E58A670025__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDataStructVirsualDoc : public CDocument
{
protected: // create from serialization only
	CDataStructVirsualDoc();
	DECLARE_DYNCREATE(CDataStructVirsualDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDataStructVirsualDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDataStructVirsualDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDataStructVirsualDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATASTRUCTVIRSUALDOC_H__4A50CFE1_E73C_4B2C_8105_F4E58A670025__INCLUDED_)

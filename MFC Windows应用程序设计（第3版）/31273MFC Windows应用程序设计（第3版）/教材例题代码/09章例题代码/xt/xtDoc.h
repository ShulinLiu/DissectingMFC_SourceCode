// xtDoc.h : interface of the CXtDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XTDOC_H__A2AD49FD_E719_4273_937D_C38AFE493D94__INCLUDED_)
#define AFX_XTDOC_H__A2AD49FD_E719_4273_937D_C38AFE493D94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXtDoc : public CDocument
{
protected: // create from serialization only
	CXtDoc();
	DECLARE_DYNCREATE(CXtDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXtDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CXtDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXtDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XTDOC_H__A2AD49FD_E719_4273_937D_C38AFE493D94__INCLUDED_)

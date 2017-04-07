// CArchiveDoc.h : interface of the CCArchiveDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CARCHIVEDOC_H__3BAE4064_3FF6_4C08_8530_A010060FE9EE__INCLUDED_)
#define AFX_CARCHIVEDOC_H__3BAE4064_3FF6_4C08_8530_A010060FE9EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCArchiveDoc : public CDocument
{
protected: // create from serialization only
	CCArchiveDoc();
	DECLARE_DYNCREATE(CCArchiveDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCArchiveDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCArchiveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCArchiveDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARCHIVEDOC_H__3BAE4064_3FF6_4C08_8530_A010060FE9EE__INCLUDED_)

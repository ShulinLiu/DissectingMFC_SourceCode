// CFile2Doc.h : interface of the CCFile2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CFILE2DOC_H__0C33BF06_3B46_429A_9FDF_41033CAFC75D__INCLUDED_)
#define AFX_CFILE2DOC_H__0C33BF06_3B46_429A_9FDF_41033CAFC75D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCFile2Doc : public CDocument
{
protected: // create from serialization only
	CCFile2Doc();
	DECLARE_DYNCREATE(CCFile2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCFile2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCFile2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCFile2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CFILE2DOC_H__0C33BF06_3B46_429A_9FDF_41033CAFC75D__INCLUDED_)

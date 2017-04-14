// AutoClientDoc.h : interface of the CAutoClientDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AUTOCLIENTDOC_H__D74B7936_5A06_4D5E_BF71_8BCC97ED46C8__INCLUDED_)
#define AFX_AUTOCLIENTDOC_H__D74B7936_5A06_4D5E_BF71_8BCC97ED46C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAutoClientDoc : public CDocument
{
protected: // create from serialization only
	CAutoClientDoc();
	DECLARE_DYNCREATE(CAutoClientDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoClientDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAutoClientDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAutoClientDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOCLIENTDOC_H__D74B7936_5A06_4D5E_BF71_8BCC97ED46C8__INCLUDED_)

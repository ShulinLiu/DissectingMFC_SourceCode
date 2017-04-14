// ffDoc.h : interface of the CFfDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FFDOC_H__D6C710AD_95F7_41A2_BDE2_20B94D886CEE__INCLUDED_)
#define AFX_FFDOC_H__D6C710AD_95F7_41A2_BDE2_20B94D886CEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFfDoc : public CDocument
{
protected: // create from serialization only
	CFfDoc();
	DECLARE_DYNCREATE(CFfDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFfDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFfDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFfDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FFDOC_H__D6C710AD_95F7_41A2_BDE2_20B94D886CEE__INCLUDED_)

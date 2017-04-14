// MFCexp13_5Doc.h : interface of the CMFCexp13_5Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_5DOC_H__223995D9_16A1_4CD6_8E9C_2FB7DE1670EF__INCLUDED_)
#define AFX_MFCEXP13_5DOC_H__223995D9_16A1_4CD6_8E9C_2FB7DE1670EF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp13_5Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp13_5Doc();
	DECLARE_DYNCREATE(CMFCexp13_5Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_5Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_5Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_5DOC_H__223995D9_16A1_4CD6_8E9C_2FB7DE1670EF__INCLUDED_)

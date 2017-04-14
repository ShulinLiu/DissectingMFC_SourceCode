// MFCexp13_4testDoc.h : interface of the CMFCexp13_4testDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_4TESTDOC_H__1D725244_16AD_4B8B_937A_7112295F872E__INCLUDED_)
#define AFX_MFCEXP13_4TESTDOC_H__1D725244_16AD_4B8B_937A_7112295F872E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp13_4testDoc : public CDocument
{
protected: // create from serialization only
	CMFCexp13_4testDoc();
	DECLARE_DYNCREATE(CMFCexp13_4testDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_4testDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_4testDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_4testDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_4TESTDOC_H__1D725244_16AD_4B8B_937A_7112295F872E__INCLUDED_)

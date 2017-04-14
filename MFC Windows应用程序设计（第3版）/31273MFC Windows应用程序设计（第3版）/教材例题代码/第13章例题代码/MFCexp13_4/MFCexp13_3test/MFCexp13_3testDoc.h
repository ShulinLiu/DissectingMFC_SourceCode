// MFCexp13_3testDoc.h : interface of the CMFCexp13_3testDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_3TESTDOC_H__294EC34F_3E77_44D9_87F7_9DA3A7E09740__INCLUDED_)
#define AFX_MFCEXP13_3TESTDOC_H__294EC34F_3E77_44D9_87F7_9DA3A7E09740__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp13_3testDoc : public CDocument
{
protected: // create from serialization only
	CMFCexp13_3testDoc();
	DECLARE_DYNCREATE(CMFCexp13_3testDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_3testDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_3testDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_3testDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_3TESTDOC_H__294EC34F_3E77_44D9_87F7_9DA3A7E09740__INCLUDED_)

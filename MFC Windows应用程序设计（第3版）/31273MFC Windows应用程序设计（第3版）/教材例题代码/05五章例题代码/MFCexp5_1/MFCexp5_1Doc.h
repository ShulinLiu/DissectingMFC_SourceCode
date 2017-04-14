// MFCexp5_1Doc.h : interface of the CMFCexp5_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_1DOC_H__87540955_7613_4DF3_BF03_28DB1CB8F50D__INCLUDED_)
#define AFX_MFCEXP5_1DOC_H__87540955_7613_4DF3_BF03_28DB1CB8F50D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp5_1Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp5_1Doc();
	DECLARE_DYNCREATE(CMFCexp5_1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1DOC_H__87540955_7613_4DF3_BF03_28DB1CB8F50D__INCLUDED_)

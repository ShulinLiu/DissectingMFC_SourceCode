// MFCexp10_6Doc.h : interface of the CMFCexp10_6Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_6DOC_H__389CAE0A_D09D_486B_98F3_7A6E4CDFF9B4__INCLUDED_)
#define AFX_MFCEXP10_6DOC_H__389CAE0A_D09D_486B_98F3_7A6E4CDFF9B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_6Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp10_6Doc();
	DECLARE_DYNCREATE(CMFCexp10_6Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_6Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_6Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_6Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_6DOC_H__389CAE0A_D09D_486B_98F3_7A6E4CDFF9B4__INCLUDED_)

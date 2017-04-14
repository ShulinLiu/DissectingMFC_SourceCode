// MFCexp9_4Doc.h : interface of the CMFCexp9_4Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_4DOC_H__42A38DD7_711C_4A49_A2AD_79012F418579__INCLUDED_)
#define AFX_MFCEXP9_4DOC_H__42A38DD7_711C_4A49_A2AD_79012F418579__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_4Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp9_4Doc();
	DECLARE_DYNCREATE(CMFCexp9_4Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_4Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp9_4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_4Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_4DOC_H__42A38DD7_711C_4A49_A2AD_79012F418579__INCLUDED_)

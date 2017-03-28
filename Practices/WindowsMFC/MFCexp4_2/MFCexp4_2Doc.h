// MFCexp4_2Doc.h : interface of the CMFCexp4_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_2DOC_H__F039F93C_6701_4B2E_B9EA_B85BEB5EAE9B__INCLUDED_)
#define AFX_MFCEXP4_2DOC_H__F039F93C_6701_4B2E_B9EA_B85BEB5EAE9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp4_2Doc();
	DECLARE_DYNCREATE(CMFCexp4_2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_2DOC_H__F039F93C_6701_4B2E_B9EA_B85BEB5EAE9B__INCLUDED_)

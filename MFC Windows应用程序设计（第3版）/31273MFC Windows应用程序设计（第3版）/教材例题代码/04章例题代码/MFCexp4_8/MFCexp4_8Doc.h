// MFCexp4_8Doc.h : interface of the CMFCexp4_8Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_8DOC_H__2C55F55E_D92B_48B1_A9CC_2C2F66DBD2CD__INCLUDED_)
#define AFX_MFCEXP4_8DOC_H__2C55F55E_D92B_48B1_A9CC_2C2F66DBD2CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_8Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp4_8Doc();
	DECLARE_DYNCREATE(CMFCexp4_8Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_8Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_8Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_8Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_8DOC_H__2C55F55E_D92B_48B1_A9CC_2C2F66DBD2CD__INCLUDED_)

// MFCexp7_7Doc.h : interface of the CMFCexp7_7Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_7DOC_H__806B0B3E_52E5_4BE1_B68A_FD390DB89910__INCLUDED_)
#define AFX_MFCEXP7_7DOC_H__806B0B3E_52E5_4BE1_B68A_FD390DB89910__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_7Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp7_7Doc();
	DECLARE_DYNCREATE(CMFCexp7_7Doc)

// Attributes
public:
	char*m_pStr;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_7Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_7Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_7Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_7DOC_H__806B0B3E_52E5_4BE1_B68A_FD390DB89910__INCLUDED_)

// MFCexp5_3Doc.h : interface of the CMFCexp5_3Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_3DOC_H__E52E9D0C_89CF_4FF5_A239_CDC01C842CAC__INCLUDED_)
#define AFX_MFCEXP5_3DOC_H__E52E9D0C_89CF_4FF5_A239_CDC01C842CAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp5_3Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp5_3Doc();
	DECLARE_DYNCREATE(CMFCexp5_3Doc)

// Attributes
public:
	CArray<CRect,CRect&> m_Rectag;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_3Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_3Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_3DOC_H__E52E9D0C_89CF_4FF5_A239_CDC01C842CAC__INCLUDED_)

// MFCexp6_3Doc.h : interface of the CMFCexp6_3Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_3DOC_H__EDD420A6_45B8_437C_A4B7_66C3EF438F2E__INCLUDED_)
#define AFX_MFCEXP6_3DOC_H__EDD420A6_45B8_437C_A4B7_66C3EF438F2E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6_3Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp6_3Doc();
	DECLARE_DYNCREATE(CMFCexp6_3Doc)

// Attributes
public:
	CArray<CRect,CRect&> m_Rectag;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_3Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_3Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_3DOC_H__EDD420A6_45B8_437C_A4B7_66C3EF438F2E__INCLUDED_)

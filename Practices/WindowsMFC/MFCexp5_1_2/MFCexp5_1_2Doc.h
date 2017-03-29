// MFCexp5_1_2Doc.h : interface of the CMFCexp5_1_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_1_2DOC_H__34C3D43D_E6A9_470D_A045_FEADA1DF34C4__INCLUDED_)
#define AFX_MFCEXP5_1_2DOC_H__34C3D43D_E6A9_470D_A045_FEADA1DF34C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp5_1_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp5_1_2Doc();
	DECLARE_DYNCREATE(CMFCexp5_1_2Doc)

// Attributes
public:
	CArray<CRect,CRect&> m_Rectag;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_1_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_1_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1_2DOC_H__34C3D43D_E6A9_470D_A045_FEADA1DF34C4__INCLUDED_)

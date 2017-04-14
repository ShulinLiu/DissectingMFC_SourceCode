// MFCexp8_2Doc.h : interface of the CMFCexp8_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_2DOC_H__EDB5A5A1_9B0E_4007_AE40_9366EF9F9FF2__INCLUDED_)
#define AFX_MFCEXP8_2DOC_H__EDB5A5A1_9B0E_4007_AE40_9366EF9F9FF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp8_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp8_2Doc();
	DECLARE_DYNCREATE(CMFCexp8_2Doc)

// Attributes
public:
	CRect m_crlRect;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp8_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp8_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_2DOC_H__EDB5A5A1_9B0E_4007_AE40_9366EF9F9FF2__INCLUDED_)

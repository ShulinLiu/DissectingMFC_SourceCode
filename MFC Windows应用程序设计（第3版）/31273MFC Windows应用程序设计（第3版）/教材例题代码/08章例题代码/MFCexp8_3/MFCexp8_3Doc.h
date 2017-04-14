// MFCexp8_3Doc.h : interface of the CMFCexp8_3Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_3DOC_H__649EE264_5E62_457E_9725_B63F8C065756__INCLUDED_)
#define AFX_MFCEXP8_3DOC_H__649EE264_5E62_457E_9725_B63F8C065756__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp8_3Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp8_3Doc();
	DECLARE_DYNCREATE(CMFCexp8_3Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_3Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp8_3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp8_3Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_3DOC_H__649EE264_5E62_457E_9725_B63F8C065756__INCLUDED_)

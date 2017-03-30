// MFCexp7_1Doc.h : interface of the CMFCexp7_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_1DOC_H__BAC8323A_D670_4ACD_A5F2_2336DCAB75F1__INCLUDED_)
#define AFX_MFCEXP7_1DOC_H__BAC8323A_D670_4ACD_A5F2_2336DCAB75F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_1Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp7_1Doc();
	DECLARE_DYNCREATE(CMFCexp7_1Doc)

// Attributes
public:
	CRect m_tagRec;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_1DOC_H__BAC8323A_D670_4ACD_A5F2_2336DCAB75F1__INCLUDED_)

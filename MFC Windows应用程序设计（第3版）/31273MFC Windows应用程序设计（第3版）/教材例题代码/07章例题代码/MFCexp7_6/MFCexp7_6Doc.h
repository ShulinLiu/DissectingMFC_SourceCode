// MFCexp7_6Doc.h : interface of the CMFCexp7_6Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_6DOC_H__1BB70703_FC8A_4411_AE32_54FFE5E5BEBD__INCLUDED_)
#define AFX_MFCEXP7_6DOC_H__1BB70703_FC8A_4411_AE32_54FFE5E5BEBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_6Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp7_6Doc();
	DECLARE_DYNCREATE(CMFCexp7_6Doc)

// Attributes
public:
	CRect m_crlRect;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_6Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_6Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_6Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_6DOC_H__1BB70703_FC8A_4411_AE32_54FFE5E5BEBD__INCLUDED_)

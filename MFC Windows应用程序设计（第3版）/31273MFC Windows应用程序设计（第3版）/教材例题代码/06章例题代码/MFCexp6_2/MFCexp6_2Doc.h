// MFCexp6_2Doc.h : interface of the CMFCexp6_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_2DOC_H__1AE2C6CD_9E5C_4095_A8C2_3DCCBEFB56CF__INCLUDED_)
#define AFX_MFCEXP6_2DOC_H__1AE2C6CD_9E5C_4095_A8C2_3DCCBEFB56CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp6_2Doc();
	DECLARE_DYNCREATE(CMFCexp6_2Doc)

// Attributes
public:
	CArray<CRect,CRect&> m_Rectag;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_2DOC_H__1AE2C6CD_9E5C_4095_A8C2_3DCCBEFB56CF__INCLUDED_)

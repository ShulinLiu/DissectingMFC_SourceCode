// AFXDlgDoc.h : interface of the CAFXDlgDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AFXDLGDOC_H__AFB354A4_8AE8_4281_82F2_8F555CC6D48E__INCLUDED_)
#define AFX_AFXDLGDOC_H__AFB354A4_8AE8_4281_82F2_8F555CC6D48E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAFXDlgDoc : public CDocument
{
protected: // create from serialization only
	CAFXDlgDoc();
	DECLARE_DYNCREATE(CAFXDlgDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAFXDlgDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAFXDlgDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAFXDlgDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AFXDLGDOC_H__AFB354A4_8AE8_4281_82F2_8F555CC6D48E__INCLUDED_)

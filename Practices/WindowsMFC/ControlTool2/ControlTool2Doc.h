// ControlTool2Doc.h : interface of the CControlTool2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTROLTOOL2DOC_H__EAB36D31_DDDF_4399_987B_620F1ECE0A94__INCLUDED_)
#define AFX_CONTROLTOOL2DOC_H__EAB36D31_DDDF_4399_987B_620F1ECE0A94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CControlTool2Doc : public CDocument
{
protected: // create from serialization only
	CControlTool2Doc();
	DECLARE_DYNCREATE(CControlTool2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlTool2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CControlTool2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CControlTool2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLTOOL2DOC_H__EAB36D31_DDDF_4399_987B_620F1ECE0A94__INCLUDED_)

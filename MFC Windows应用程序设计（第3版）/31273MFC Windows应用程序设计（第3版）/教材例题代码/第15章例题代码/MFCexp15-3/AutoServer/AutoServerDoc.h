// AutoServerDoc.h : interface of the CAutoServerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AUTOSERVERDOC_H__B72C3D43_D208_41A5_AFD7_F09E488A0E7C__INCLUDED_)
#define AFX_AUTOSERVERDOC_H__B72C3D43_D208_41A5_AFD7_F09E488A0E7C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAutoServerDoc : public CDocument
{
public:
	UINT m_yPos;		//存储园的y轴方向的位置的成员变量
	UINT m_xPos;		//存储园的x轴方向的位置的成员变量
	UINT m_diameter;	//存储园半径的成员变量

protected: // create from serialization only
	CAutoServerDoc();
	DECLARE_DYNCREATE(CAutoServerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoServerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAutoServerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAutoServerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CAutoServerDoc)
	afx_msg short GetDiameter();
	afx_msg void SetDiameter(short nNewValue);
	afx_msg void DispSvWindow();
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOSERVERDOC_H__B72C3D43_D208_41A5_AFD7_F09E488A0E7C__INCLUDED_)

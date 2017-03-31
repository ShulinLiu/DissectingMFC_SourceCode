// MFCexp8_2Doc.h : interface of the CMFCexp8_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_2DOC_H__0F2F92FA_AB01_4FF7_B858_A0D47F20A6B6__INCLUDED_)
#define AFX_MFCEXP8_2DOC_H__0F2F92FA_AB01_4FF7_B858_A0D47F20A6B6__INCLUDED_

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
	CBitmap m_Bitmap;		//位图对象
	int m_nWidth;				//存储位图宽的数据成员
	int m_nHeight;			//存储位图高的数据成员
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

#endif // !defined(AFX_MFCEXP8_2DOC_H__0F2F92FA_AB01_4FF7_B858_A0D47F20A6B6__INCLUDED_)

// Letter.h: interface for the CLetter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LETTER_H__C859FCFA_8450_45ED_9F76_240CAE6CE770__INCLUDED_)
#define AFX_LETTER_H__C859FCFA_8450_45ED_9F76_240CAE6CE770__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLetter : public CObject  
{
public:
private:
	char m_sLetter;					//字符成员变量
public:
	CLetter( );
	virtual void Serialize(CArchive& ar);	//重载序列化函数
public:
	void SetLetter(char ch);			//为字符变量赋值的函数
	char GetLetter( );				//获得字符变量的函数
	virtual ~CLetter( );
};

#endif // !defined(AFX_LETTER_H__C859FCFA_8450_45ED_9F76_240CAE6CE770__INCLUDED_)

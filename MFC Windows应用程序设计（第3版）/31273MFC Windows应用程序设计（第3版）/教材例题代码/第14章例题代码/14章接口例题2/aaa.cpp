#include<iostream.h>
#include"IA.h"
#include"IB.h"
class A:public IA,IB
{
private:
	char*s1,*s2,*s3,*s4;	
public:
	A()
	{
		s1="This is f1()";
		s2="This is f2()";
		s3="This is g1()";
		s4="This is g2()";
	}
	virtual void f1(){cout<<s1<<endl;}
	virtual void f2(){cout<<s2<<endl;}
	virtual void g1(){cout<<s3<<endl;}
	virtual void g2(){cout<<s4<<endl;}
	virtual int QueryInterface(char*IName,void**ppv)
	{
		if(IName=="IA")	{*ppv = (IA*)(this);return 1;}
		else if(IName=="IB"){*ppv = (IB*)(this);return 1;}
			else return 0;
	}
	virtual void Release(){delete this;}
};
A*GreateInst()
{
	return new A;
}
void CoGetInst(char*IName,void**ppv)
{
	A*a=GreateInst();
	a->QueryInterface(IName,ppv);
}
void main()
{
	IA*pIA;	
	CoGetInst("IA",(void**)&pIA);
	pIA->f1();
	IB*pIB;
	pIA->QueryInterface("IB",(void**)&pIB);
	pIB->g2();
	pIA->Release();
}


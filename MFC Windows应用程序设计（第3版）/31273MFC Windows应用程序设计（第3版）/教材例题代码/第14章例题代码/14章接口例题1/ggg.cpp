#include<iostream.h>
#include"IA.h"
#include"IB.h"
class A;
void QueryInterface(A*x,void**ppv);
class A:public IA,IB
{
private:
	char*s1,*s2,*s3,*s4;	
public:
	A( )
	{
		s1="This is f1( )";
		s2="This is f2( )";
		s3="This is g1( )";
		s4="This is g2( )";
	}
	virtual void f1( ){cout<<s1<<endl;}
	virtual void f2( ){cout<<s2<<endl;}
	virtual void g1( ){cout<<s3<<endl;}
	virtual void g2( ){cout<<s4<<endl;}
};
void main( )
{	
	IA*pIA;
	A*a=new A;	
	QueryInterface(a,(void**)&pIA);
	pIA->f1( );
	//pIA->g1( );
	delete a;
}

void QueryInterface(A*x,void**ppv){*ppv = (IA*)x;}

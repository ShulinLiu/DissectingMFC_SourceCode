//1.BASE CLASS WAS ONLY CONSTRUCT ONCE
//2.BASE CLASS WAS CONSTRUCT AS default INSTEAD OF CONSTRUCT THROUGH DERIVED CLASS: PARENTA OR PARENTB
//3.IN FACT, BASE CLASS WAS CONSTRUCT BY SON CLASS -- CONSTRUCT BY DEFAULT, BECAUSE THE CONSTRUCT
//OF SON CLASS WAS implicit instead of explicit .

#include "stdio.h"
class Base
{
public:
	Base(){printf("Base is constructed  as default\n");}
	Base(int i)
	{
	 m_iValue=i;
	  printf("Base is constructed  in constructing list\n");
	}
	~Base(){printf("Base is deconstructed\n");}

	int GetiValue()const
	{
		return m_iValue;
	}

	void SetiValue(int i)
	{
	    m_iValue = i;
	}
private:
		int m_iValue;
};
class ParentA :public virtual Base
{
public:
	ParentA(){}
	ParentA(int i,float f):Base(i)
	{
        printf("ParentA is constructed explicit\n");
	    m_fValue=f;	}
	float GetfValue()const
	{
		return m_fValue;
	}
private:
	float m_fValue;
};
class ParentB :public virtual Base
{
public:
	ParentB(){}
	ParentB(int i,char c):Base(i)
	{
	    printf("ParentB is constructed explicit\n");
	    m_cValue=c;
    }

	char GetcValue()const
	{
		return m_cValue;
	}
private:
	char m_cValue;
};
class Son:public ParentA,public ParentB
{
public:
	Son(int i,float f,char c):ParentA(i,f),ParentB(i,c)
	{
	    printf("Son is constructed implicit\n");
	}

	//construct class Son implicit:altert method
//		Son(int i,float f,char c):ParentA(i,f),ParentB(i,c)
//	{
//	    printf("Son is constructed explicit\n");
//	    SetiValue(i);
//	}

	//construct class Son explicit
//    Son(int i,float f,char c):Base(i),ParentA(i,f),ParentB(i,c)
//	{
//	    printf("Son is constructed explicit\n");
//	}

	void Output()
	{
	printf("son member is %d  %8.2f  %c\n",
		 GetiValue(),GetfValue(),GetcValue());
	}
};

int main(int argc, char* argv[])
{
  Son son(6,92.33,'D');
  son.Output();
  return 0;
}


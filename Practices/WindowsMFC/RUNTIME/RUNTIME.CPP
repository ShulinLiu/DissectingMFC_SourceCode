#include <iostream.h>
#include"string.h"
class CObject;
//类信息表结构----------------------------------------------------------------------------------
struct CRuntimeClass
{
	char* m_lpszClassName;						//类名
	CObject* (_stdcall* m_pfnCreateObject)( );		//函数指针
	CObject* _stdcall CreateObject( );	//对象构建函数
};
//CObject类声明及实现---------------------------------------------------------------------
class CObject
{
public:
	virtual void SayHello( ) { cout << "Hello CObject \n"; }
};
//派生类Myclass及实现-----------------------------------------------------------------------
class Myclass:public CObject
{
public:
	virtual void SayHello( ) { cout << "Hello Myclass \n"; }
public:
	//动态创建对象声明----------------------------------------------------------------------
	//static CObject* _stdcall CreateObject( );	//对象构建函数 
	static CRuntimeClass classMyclass;		//定义结构变量作为信息表
	static CRuntimeClass* GetRuntimeClass( ); //声明获得类信息表指针的函数
};
//对象动态创建的实现------------------------------------------------------------------------
//对象构建函数的实现
CObject* _stdcall CreateObject( ) 
{
	return new Myclass; 
}
//填写类信息表
CRuntimeClass Myclass::classMyclass = {  
	"Myclass", //类名
		CreateObject }; 
	//获得类信息表指针函数的实现
	CRuntimeClass* Myclass::GetRuntimeClass( )
	{ 
		return &Myclass::classMyclass; 
	} 
	
	//主函数-----------------------------------------------------------------------
	int main()
	{
		char _lpszCLS[10];
		cout<<"请输入类名:";
		cin>>_lpszCLS;
		CRuntimeClass* p=Myclass::GetRuntimeClass( );
		if(strcmp(p->m_lpszClassName,_lpszCLS)==0 )
		{
			CObject* _stdcall pp=p->m_pfnCreateObject( );
			pp->SayHello( );
		}
		else
		{
			cout<<"No"<<endl;
		}
		return 0;
	}
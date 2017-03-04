///////////////
#include "stdio.h"
#include "string.h"
class Ca
{
public:
	Ca(){m_Style=0;}
    Ca(int style){m_Style=style;}

	//请改写基类的析构函数为非虚拟函数，测试内存泄漏问题
//	~Ca(){}
	virtual ~Ca(){}
	virtual void OutputValue()
	{
	 printf("%d\n",m_Style);
	}
private:
	int m_Style;
};

class Cb:public Ca
{
public:
	Cb(){ m_pTitle=NULL;}
	Cb(const char* Title);
	~Cb()
	{
	if(NULL!=m_pTitle)
			delete[] m_pTitle;
	}
    virtual void OutputValue()
	{
		if(NULL!=m_pTitle)
		printf("%s\n",m_pTitle);
	}
private:
  char *m_pTitle;
};

Cb::Cb(const char* Title)
{
	if(NULL==Title)
		m_pTitle=NULL;
	else
	{ m_pTitle=new char[strlen(Title)+1];
	  strcpy(m_pTitle,Title);
	}
}

//当派生类由基类指针指引时，使用delete要注意
int main(int argc, char* argv[])
{
	//在堆中构造派生类对象，由基类指针引用
	Ca* pa=new Cb("bill_server");
	pa->OutputValue();

	/*删除堆中的对象，释放内存。但派生类的析构函数没有被调用，
	其中的释放内存操作也就无法完成，即Cb::m_pTitle没有得到释放。*/

	delete pa;  //虽然可以改写为delete (Cb*)pa; 但必须预先知道转换的类型
return 0;
}

#include "stdio.h"
#include "string.h"
class Ca
{
public:
	Ca(){m_Style=0;}
Ca(int style){m_Style=style;}
//虚析构函数
	virtual ~Ca(){ printf("~ca() called\n");}
//常规虚函数
	virtual void OutputStyle()
	{
	 printf("%d\n",m_Style);
	}
//纯虚函数
	virtual void OutputTitle()=0;
protected:
	int m_Style;
};
class Cb:public Ca
{
public:
	Cb(){ m_pTitle=NULL;}
	Cb(const char* Title,int Style=0);
	~Cb()
	{
		if(NULL!=m_pTitle)
		delete[] m_pTitle;
        printf("~cb() called\n");
	}
 	virtual void OutputStyle()
	{
	 printf("%d\n",~m_Style);
	}
	virtual void OutputTitle()
	{
		if(NULL!=m_pTitle)
		printf("%s\n",m_pTitle);
	}
private:
  char *m_pTitle;
};

Cb::Cb(const char* Title,int Style):Ca(Style)
{
	if(NULL==Title)
		m_pTitle=NULL;
	else
	{ m_pTitle=new char[strlen(Title)+1];
	  strcpy(m_pTitle,Title);
	}
}
int main(int argc, char* argv[])
{
	Ca* pa=new Cb("Fairy");
 //调用基类定义的常规虚函数
//由于抽象基类不能实例化对象，只能通过类名限定的方法调用它的常规虚函数
	pa->Ca::OutputStyle();
//调用派生类重载的虚函数
	pa->OutputStyle();
	pa->OutputTitle();
//释放堆中的派生类对象，将首先调用派生类的析构函数
	delete pa;
	return 0;
}

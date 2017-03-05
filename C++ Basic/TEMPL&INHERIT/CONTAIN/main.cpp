#include "stdio.h"
class Contain
{
public:
	//定义一个类作为公有成员
	class Embed
	{
	public:
		Embed(){}
		Embed(int flag){m_flag=flag;}
		int GetValue()const
		{return m_flag;}
		Embed& operator=(const Embed& bed);
		void ShowLink(Contain* pCon);
	private:
		int m_flag;
	}m_bed ;//同时定义一个该类型的成员变量，也是公有成员

 //将内嵌类定义为父类的友类
	friend class Embed;
public:
	Contain(){}
	Contain(int flag,unsigned char cLink):m_bed(flag)
	{ m_link=cLink;}

	//在类中可以随意应用自定义的类型成员
	Embed GetEmbedMember()const
	{ return m_bed;}

protected:
	unsigned char m_link;
 };
//在外部定义内嵌类的成员函数，要加双标识符限定范围
Contain::Embed& Contain::Embed::operator=(const Embed& bed)
		{
			m_flag=bed.m_flag;
			return *this;
		}
void Contain::Embed::ShowLink(Contain* pCon)
		{
		  if(m_flag)
			  printf("%d\n",pCon->m_link);
		  else
	  printf("%c\n",pCon->m_link);
		}
int main(int argc, char* argv[])
{
	Contain::Embed bed;
  Contain con(73,'A');
	con.m_bed.ShowLink(&con);
	bed=con.m_bed;
	printf("%d\n",bed.GetValue());
	return 0;
}

//定义全局结构类型
#include "stdio.h"
#include "memory.h"
struct EmbedStruct
{
	//在结构体中默认为公有成员
	 int flag;
	 float result;
};
class ContainType
{
public:
//在类的内部定义一个结构类型作为公有成员
	struct EmbedStruct
	{
//在结构体中默认为公有成员
	 int flag;
	 float result;
	};
public:
	ContainType(){}
	ContainType(unsigned char cLink)
	{ m_link=cLink;}

private:
	unsigned char m_link;
};
int main(int argc, char* argv[])
{
  //使用全局类型标识符
	:: EmbedStruct gEm;
//通过类名标识使用ContainType定义的公有类型
 	ContainType:: EmbedStruct Emb;
	Emb.flag=82;
	Emb.result=52.00;
    memcpy(&gEm,&Emb,sizeof(gEm));
	printf("%d %8.2f\n",gEm.flag,gEm.result);
	return 0;
}

#include "stdio.h"
class Rectangle
{
public:
	Rectangle(){ m_cx=0;m_cy=0;};
	Rectangle(float cx,float cy)
	{
	m_cx=cx;
	m_cy=cy;
	}
//声明为保护，为了给子类继承。
protected:
//m_cx是水平宽度，m_cy是垂直高度。
	float m_cx;
	float m_cy;
public:
//加const关键字，该函数不能直接或间接更改类成员。
//在简单并且使用率高的成员函数前加inline关键字，可以提高效率。
	inline float GetCx() const
	{return m_cx;}

	inline float GetCy() const
	{return m_cy;}

	inline void SetCx(float cx)
	{ m_cx=cx;}

	inline void SetCy(float cy)
	{ m_cy=cy;}

	void DispRectInfo();
protected:
  //因为该虚函数只在类的内部使用，所以声明为保护。在本例中也可以声明为私有。
	virtual float CalculateArea();
};
void Rectangle::DispRectInfo()
{
  printf("the cx=%f\n",GetCx());
  printf("the cy=%f\n",GetCy());
  printf("the area=%f\n",CalculateArea());
}
float Rectangle::CalculateArea()
{	//该虚函数用于计算矩形面积
	return m_cx*m_cy;
}

//print the rectangle
/*
int main(float argc, char* argv[])
{
	Rectangle rect(20,30);
	rect.DispRectInfo();
	return 0;
}
*/

class Parallelogram:public Rectangle
{
public:
	Parallelogram(float cx, float cy,float height):Rectangle(cx,cy)
	{
		m_height = height;
	}
	Parallelogram(){m_height = 0;}
protected:
	float m_height;
public:
	inline float GetHeight() const{return m_height;}
	inline void SetHeight(float height){m_height = height;}

	void DispParalleInfo();

protected:
	//overriding virtual function
	float CalculateArea();
};

void Parallelogram::DispParalleInfo()
{
	printf("the height=%f\n",GetHeight());

	DispRectInfo();
}

float Parallelogram::CalculateArea()
{
	return m_cx*m_height;
}

int main()
{
	Rectangle rect(20,30);
	rect.DispRectInfo();

	Parallelogram para(20,30,10);
	para.DispParalleInfo();
	return 0;
}


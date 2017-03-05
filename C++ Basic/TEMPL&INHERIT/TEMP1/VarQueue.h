#ifndef VARQUEUE_H_INCLUDED
#define VARQUEUE_H_INCLUDED

///////////////////////////
//队列类模板定义
template <class POINT_TYPE,int MAX_POINTS> class VarQueue
{
public:
	VarQueue()
	{
		m_MaxCount=MAX_POINTS;
		m_Count=0;
	}
	VarQueue(unsigned int MaxCount)
	{
		if(MaxCount>MAX_POINTS)
			m_MaxCount=MAX_POINTS;
        else
	     m_MaxCount=MaxCount;
		m_Count=0;
	}
public:
	//出队处理，先进先出
	unsigned int PopPoint(POINT_TYPE *Point);
	//入队处理，追加在队的末尾
	unsigned int AppendPoint(const POINT_TYPE &Point);
	//取得某结点的值
bool GetPoint(POINT_TYPE *Point,unsigned int Position)const;
//取得结点数
unsigned int GetCount()const;
	//清空队列
	void ClearQueue();
private:
	//队列的最大结点数
	unsigned int m_MaxCount;
	//队列的实际结点数
	unsigned int m_Count;
	//保存结点的数组
	POINT_TYPE m_Queue[MAX_POINTS];
};
/////////////////队列元素类定义
class CElement
{
public:
	CElement(){fValue=0.0;}
	CElement(float value){fValue=value;}

	CElement& operator =(int value)
	{
	  fValue=(float)value;
	  return *this;
	}
	CElement& operator =(float value)
	{
	  fValue=value;
	  return *this;
	}
	CElement& operator =(CElement elem)
	{
	  fValue=elem.fValue;
	  return *this;
	}
	operator float()
	{return fValue;	}
	float GetValue()const
	{ return fValue;}
private:
	float fValue;
};



#endif // VARQUEUE_H_INCLUDED

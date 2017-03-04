#ifndef CCUSTEDIT_H_INCLUDED
#define CCUSTEDIT_H_INCLUDED

//insert语句字段列表以前的长度
#define MAXSIZE_SQL_FIELDS 200
//insert语句值列表以后的长度
#define MAXSIZE_SQL_VALUES 200
//name字段的最大长度
#define MAXSIZE_NAME_FIELD  20
//字段名称最大长度
#define MAXSIZE_FIELDNAME  20
//语句中最多字段数
#define MAX_FIELDSCOUNT 50

//基类CCustEdit的定义
class CCustEdit
{
public:
	CCustEdit();
	CCustEdit(const char* FieldName);
	virtual ~CCustEdit(){};
public:
	void BuildFields(char * Statement);
 // 基类定义虚函数，为子类提供重载的形式。
	void virtual BuildValues(char * Statement);
	void SetFieldName(const char * FieldName);

protected:
  //用于存储控件关联的字段名称
	char m_FieldName[MAXSIZE_FIELDNAME];
};

//子类CIntEdit的定义
class CIntEdit:public CCustEdit
{
public:
	CIntEdit();
	CIntEdit(const char * FieldName,int number);
	virtual ~CIntEdit(){};

public:
	void virtual BuildValues(char * Statement);
	CIntEdit& operator =(int iValue);
	void SetValue(int iValue);
	int GetValue()const;

private:
//用于封装整型字段值:
	int m_data;
};

//子类CFoatEdit的定义
class CFloatEdit:public CCustEdit
{
public:
	CFloatEdit();
	CFloatEdit(const char* FieldName,float number);
	virtual ~CFloatEdit(){};
public:
	void virtual BuildValues(char * Statement);
	CFloatEdit& operator =(float fValue);
	void SetValue(float fValue);
	float GetValue()const;

private:
//用于封装浮点型字段值
float m_data;
};

//子类CVcharEdit的定义
class CVcharEdit:public CCustEdit
{
public:
	CVcharEdit();
	CVcharEdit(const char * FieldName,const char * str);
	virtual ~CVcharEdit(){};
public:
	void virtual BuildValues(char * Statement);
	CVcharEdit& operator =(const char* sValue);
	void SetValue(const char * sValue);
	void GetValue(char * sValue,unsigned int MaxCount)const;

private:
 //用于封装字符串型字段值
	char m_data[MAXSIZE_NAME_FIELD];
};



#endif // CCUSTEDIT_H_INCLUDED

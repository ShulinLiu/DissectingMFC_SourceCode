//Aim: print "insert SQL"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "CCustEdit.h"

//////////基类CCustEdit的实现
CCustEdit::CCustEdit()
{
	memset(m_FieldName,0,MAXSIZE_FIELDNAME);
}
CCustEdit::CCustEdit(const char* FieldName)
{
//形参FieldName用于初始化m_FieldName
// memset : to initial m_FieldName with 0
		memset(m_FieldName,0,MAXSIZE_FIELDNAME);
	  if(NULL==FieldName)
		return;
	 if(strlen(FieldName)>=MAXSIZE_FIELDNAME)
	  {  printf("the field name %s is too long,truncated it",FieldName);
	     strncpy(m_FieldName,FieldName,MAXSIZE_FIELDNAME-1);
	  }
	  else
		  strcpy(m_FieldName,FieldName);
}

void CCustEdit::BuildValues(char * Statement)
{
	  printf("insert statement is %s\n",Statement);
}

void CCustEdit::BuildFields(char * Statement)
{
		//构造语句的字段列表部分	，即将字段名m_FieldName和一个','字符追加到实参Statement中
  		if(NULL==Statement)
        return;
		if(strlen(Statement)>MAXSIZE_SQL_FIELDS-strlen(m_FieldName)-2)
			printf("out of buffer when build statement with fields \n");
		else
	     sprintf(Statement+strlen(Statement),"%s,",m_FieldName);
}
void CCustEdit::SetFieldName(const char * FieldName)
{
	//形参FieldName用于设置m_FieldName
	  if(NULL==FieldName)
		return;
	  memset(m_FieldName,0,MAXSIZE_FIELDNAME);
	  if(strlen(FieldName)>=MAXSIZE_FIELDNAME)
	  {  printf("the field name %s is too long,truncated it",FieldName);
	     strncpy(m_FieldName,FieldName,MAXSIZE_FIELDNAME-1);
	  }
	  else
		  strcpy(m_FieldName,FieldName);

}

////////////////子类CIntEdit的实现
CIntEdit::CIntEdit(const char * FieldName,int number):CCustEdit(FieldName)
{
	m_data=number;
}
CIntEdit& CIntEdit::operator =(int iValue)
{
	  m_data=iValue;
	  return *this;
}
void CIntEdit::SetValue(int iValue)
{
		  *this=iValue;
}
int CIntEdit::GetValue()const
{
	return m_data;
}
void CIntEdit::BuildValues(char * Statement)
{
	//构造语句的值列表部分，即将m_data和一个','字符追加到实参Statement中
  		if(NULL==Statement)
		return;
		char sTemp[20];
		_itoa(m_data,sTemp,10);
		if(strlen(Statement)>MAXSIZE_SQL_VALUES-strlen(sTemp)-2)
			printf("out of buffer when build statement with values\n");
		else
	     sprintf(Statement+strlen(Statement),"%d,",m_data);
}

//////////////////////////子类CFoatEdit的实现
CFloatEdit::CFloatEdit()
{
	m_data=0;
}
CFloatEdit::CFloatEdit(const char* FieldName,float number):CCustEdit(FieldName)
{
	m_data=number;
}
CFloatEdit& CFloatEdit::operator =(float fValue)
{
	  m_data=fValue;
	  return *this;
}
void CFloatEdit::SetValue(float fValue)
{
		  *this=fValue;
}
float CFloatEdit::GetValue()const
{
	return m_data;
}
void CFloatEdit::BuildValues(char * Statement)
	{
	//构造语句的值列表部分，即将m_data和一个','字符追加到实参Statement中
		if(NULL==Statement)
		return;
		if(strlen(Statement)>MAXSIZE_SQL_VALUES-14)
			printf("out of buffer when build statement with values\n");
		else
	     sprintf(Statement+strlen(Statement),"%8.3f,",m_data);
	}

///////////////////////////子类CVcharEdit的实现
CVcharEdit::CVcharEdit()
{
	memset(m_data,0,MAXSIZE_NAME_FIELD);
}
CVcharEdit::CVcharEdit(const char * FieldName,const char * str):CCustEdit(FieldName)
{
	 //形参str用于初始化m_data
		memset(m_data,0,MAXSIZE_NAME_FIELD);
		if(NULL==str)
		return;
		if(strlen(str)<MAXSIZE_NAME_FIELD)
			strcpy(m_data,str);
		else
			strncpy(m_data,str,MAXSIZE_NAME_FIELD-1);
}
void CVcharEdit::BuildValues(char * Statement)
{
//构造语句的值列表部分，即将m_data和一个','字符追加到实参Statement中
 		if(NULL==Statement)
		return;
		if(strlen(Statement)>MAXSIZE_SQL_VALUES-strlen(m_data)-4)
			printf("out of buffer when build statement with values\n");
		else
	     sprintf(Statement+strlen(Statement),"\'%s\',",m_data);
}
CVcharEdit& CVcharEdit::operator =(const char* sValue)
{
	//形参str用于设置m_data
		if(NULL==sValue)
		return *this;
		memset(m_data,0,MAXSIZE_NAME_FIELD);
		if(strlen(sValue)<MAXSIZE_NAME_FIELD)
			strcpy(m_data,sValue);
		else
			strncpy(m_data,sValue,MAXSIZE_NAME_FIELD-1);

return *this;
}
void CVcharEdit::SetValue(const char * sValue)
	{
		  *this=sValue;
	}
void CVcharEdit::GetValue(char * sValue,unsigned int MaxCount)const
{
	  if(NULL==sValue)
		  return ;
		if(strlen(m_data)>=MaxCount)
			strncpy(sValue,m_data,MaxCount-1);
		else strcpy(sValue,m_data);
}
/******************************************************************************
全局的构造SQL语句帮助器函数
EditList	封装字段名和字段值的控件的列表。在这里不必关心每个控件的类型，利用每个
控件的虚函数，可以方便地构造出SQL语句。
InsStaFields	用于保存insert语句字段列表以前部分
InsStaValues用于保存insert语句值列表以后部分
********************************************************************/
void gBuildHelper(CCustEdit** EditList,char*InsStaFields,char * InsStaValues)
{
   for(int i=0;i<MAX_FIELDSCOUNT&&EditList[i]!=NULL;i++)
   {
	   EditList[i]->BuildFields(InsStaFields);
	   EditList[i]->BuildValues(InsStaValues);
   }
}

int main(int argc, char* argv[])
{
	char InsertStatement[MAXSIZE_SQL_FIELDS+MAXSIZE_SQL_VALUES+2];
	char InsStaFields[MAXSIZE_SQL_FIELDS];
	char InsStaValues[MAXSIZE_SQL_VALUES];

	CVcharEdit Name("name","XinChangAn");
	CIntEdit Age("age",27);
	CFloatEdit Stature("stature",(float)1.65);
	CFloatEdit Weight("weight",(float)125.22);
  CCustEdit **EditList;

	EditList=new CCustEdit*[5];

	EditList[0]=&Name;
	EditList[1]=&Age;
	EditList[2]=&Stature;
	EditList[3]=&Weight;
	EditList[4]=NULL;

	strcpy(InsStaFields,"insert into user_database(");
	strcpy(InsStaValues,"values(");
    //使用控件列表构造SQL语句
	gBuildHelper(EditList, InsStaFields,InsStaValues);

	//将最后一个字符','改为')'
	InsStaFields[strlen(InsStaFields)-1]=')';
	InsStaValues[strlen(InsStaValues)-1]=')';

	//连接两段语句到InsertStatement中
	strcpy(InsertStatement,InsStaFields);
	strcat(InsertStatement,InsStaValues);
	//输出完整的SQL语句
	printf("%s\n",InsertStatement);
	 delete[] EditList;
	return 0;
}

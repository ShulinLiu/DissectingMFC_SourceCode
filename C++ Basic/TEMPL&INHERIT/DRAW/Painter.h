#ifndef PAINTER_H_INCLUDED
#define PAINTER_H_INCLUDED

//最大的图像尺寸
#define MAX_PIC_HEIGHT 600
#define MAX_PIC_WIDTH  800
//绘图工具类型
typedef enum ENUM_TOOL_TYPE
{
BRUSH=0,
CIRCLE,
BEELINE,
RECTANGLE,
RUBBER
}ENUM_TOOL;
//工具风格
typedef enum ENUM_TOOL_STYLE
{
SL_NULL=0,
//for Circle
CR_SOLID,
CR_DOT,
//for brush
BS_SOLID,
BS_HATCHED,
//for beeline
BL_SOLID,
BL_DOT,
BL_DASH,
//for rectangle
RT_SOLID,
RT_DOT,
RT_DASH,
//for rubber
RB_MINI,
RB_MID,
RB_MAX
}ENUM_STYLE;
//定义绘图工具的抽象基类
class DrawingTool
{
public:
	DrawingTool()
	{
	 m_Width=0;
	 m_Style=SL_NULL;
	 };
	virtual void Draw(int left,int top,int right,int bottom,
					int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)=0;
	virtual void SetStyle(ENUM_STYLE style)=0;
     //根据选择的工具设置光标
	virtual void SetToolCursor()=0;

	inline void SetWidth(unsigned long width)
	{
		m_Width=width;
	}

public:
	unsigned long m_Width;
	ENUM_STYLE m_Style;
	//定义静态成员保存当前的选择颜色
	static unsigned long m_SelectedColor;
};

unsigned long DrawingTool::m_SelectedColor=0;
//定义绘画类
class Painter
{
public:
	Painter()
	{
		//初始化画布的区域
	 SetDrawingArea(0,0,0,0);
	 m_pTool=NULL;

	 //初始化画布，假设数值0为白色
	 memset((char*)m_DrawingBuffer,0,
		 MAX_PIC_HEIGHT*MAX_PIC_WIDTH*sizeof(unsigned long));
	}
	Painter(int left,int top,int right,int bottom)
	{
		//设置画布的区域
	 SetDrawingArea(left,top,right,bottom);
	 m_pTool=NULL;
	 memset((char*)m_DrawingBuffer,0,
		 MAX_PIC_HEIGHT*MAX_PIC_WIDTH*sizeof(unsigned long));
	}
	//显示图片文件
	bool ReadFromFile(char * FilePath);
	//存储画布到文件
	bool SaveToFile(char *FilePath);
	//旋转处理
	void Rotate(unsigned int degree);
	//缩放处理
	void Zoom(float rate);
    //反色处理
	void Invert(void);
public:
	//由绘图消息调用该函数进行绘图
	void OnDraw(int Coordinates_x,int Coordinates_y);
	//设置当前绘图工具的属性
	void SetToolCharacteristic(unsigned long width,ENUM_STYLE style);
	//选择绘图工具
	void SelectTool(ENUM_TOOL ToolType);
	//设置绘图区域
	void SetDrawingArea(int left,int top,int right,int bottom);
	//选择当前使用颜色
	inline void SetSelectedColor(unsigned long color)
	{
		printf("select color value %lu\n",color);
		DrawingTool::m_SelectedColor=color;
	}
private:
	void ShowDrawing(int Coordinates_x,int Coordinates_y);

private:
//该成员用于存放图像数据，由于它占用大量内存，不适合存储在对象中，所以定义为静态成员。
	static unsigned long m_DrawingBuffer[MAX_PIC_HEIGHT][MAX_PIC_WIDTH];
	int m_PicLeft;
	int m_PicTop;
	int m_PicRight;
	int m_PicBottom;

    //定义绘图工具抽象基类的指针成员，可以用它指向不同的工具，进行绘图。
	DrawingTool *m_pTool;

	//将画刷、圆形、直线、矩形、橡皮等绘图工具作为内嵌类，定义如下：
private:
	//定义画刷
	class Brush:public DrawingTool
	{
	public:
		Brush(){}
		Brush(ENUM_STYLE style,unsigned long width)
		{
		  m_Style=style;
		  m_Width=width;
		}
		void Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer);
		void SetStyle(ENUM_STYLE style);
		void SetToolCursor();
	}m_Brush;

    //定义圆形工具
	class Circle:public DrawingTool
	{
	public:
		Circle(){}
		Circle(ENUM_STYLE style,unsigned long width)
		{
		  m_Style=style;
		  m_Width=width;
		}
	    void Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer);
		void SetStyle(ENUM_STYLE style);
		void SetToolCursor();
	}m_Circle;

	//定义直线工具
	class Beeline:public DrawingTool
	{
	public:
		Beeline(){}
		Beeline(ENUM_STYLE style,unsigned long width)
		{
		  m_Style=style;
		  m_Width=width;
		}
		void Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer);
		void SetStyle(ENUM_STYLE style);
		void SetToolCursor();
	}m_Beeline;

	//定义矩形工具
	class Rectangle:public DrawingTool
	{
	public:
		Rectangle(){}
		Rectangle(ENUM_STYLE style,unsigned long width)
		{
		  m_Style=style;
		  m_Width=width;
		}
		void Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer);
		void SetStyle(ENUM_STYLE style);
		void SetToolCursor();
	}m_Rectangle;

	//定义橡皮工具
	class Rubber:public DrawingTool
	{
	public:
		Rubber(){}
		Rubber(ENUM_STYLE style,unsigned long width)
		{
		  m_Style=style;
		  m_Width=width;
		}
		void Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer);
		void SetStyle(ENUM_STYLE style);
		void SetToolCursor();
	}m_Rubber;
};


#endif // PAINTER_H_INCLUDED

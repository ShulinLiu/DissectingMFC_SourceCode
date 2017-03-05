
#include "stdio.h"
#include "string.h"
#include "Painter.h"

unsigned long Painter::m_DrawingBuffer[MAX_PIC_HEIGHT][MAX_PIC_WIDTH];
/*--------------实现Painter类-------------------------------------*/
	bool Painter::ReadFromFile(char * FilePath)
	{
	 if(NULL!=FilePath)
	 {
		printf("Showing the picture saved  in file named %s\n",FilePath);
		return true;
	 }
	 else
		 return false;
	}
	bool Painter::SaveToFile(char * FilePath)
	{
	 if(NULL!=FilePath)
	 {
		printf("The drawing picture has been saved into file named %s successfully\n",FilePath);
		return true;
	 }
	 else
		 return false;
	}
	void Painter::Rotate(unsigned int degree)
	{
	  degree%=360;
	  printf("The drawing picture has been rotated by %d degree\n",degree);
	}
	void Painter::Zoom(float rate)
	{
	 printf("The drawing picture has been zoomed by %4.2f rate\n",rate);
	}
	void Painter::Invert(void)
	{
	 printf("The drawing picture has been inverted\n");
	}
	void Painter::ShowDrawing(int Coordinates_x,int Coordinates_y)
	{
	printf("The canvas area has been updated around coordinates %d,%d\n",Coordinates_x, Coordinates_y);
	}
	void Painter::OnDraw(int Coordinates_x,int Coordinates_y)
	{
	  if(NULL!=m_pTool)
	  {  m_pTool->Draw(m_PicLeft,m_PicTop,m_PicRight,m_PicBottom,
						Coordinates_x,Coordinates_y,(unsigned long **)m_DrawingBuffer);
	     ShowDrawing(Coordinates_x,Coordinates_y);
	  }
	}
	void Painter::SetToolCharacteristic(unsigned long width,ENUM_STYLE style)
	{
		if(NULL!=m_pTool)
		{
		  m_pTool->SetWidth(width);
		  m_pTool->SetStyle(style);
		 }
		return;
	}
	void Painter::SelectTool(ENUM_TOOL ToolType)
	{
		switch(ToolType)
		{
		case BRUSH:
			printf("select BRUSH\n");
			m_pTool=&m_Brush;
			break;
		case CIRCLE:
			printf("select CIRCLE\n");
			m_pTool=&m_Circle;
			break;
		case BEELINE:
			printf("select BEELINE\n");
			m_pTool=&m_Beeline;
			break;
		case RECTANGLE:
			printf("select RECTANGLE\n");
			m_pTool=&m_Rectangle;
			break;
		case RUBBER:
			printf("select RUBBER\n");
			m_pTool=&m_Rubber;
			break;
		}
		if(NULL!=m_pTool)
			m_pTool->SetToolCursor();
	}
	void Painter::SetDrawingArea(int left,int top,int right,int bottom)
	{
	 m_PicLeft=left;
	 m_PicTop=top;
	 if(right-left>MAX_PIC_WIDTH-1)
          m_PicRight=m_PicLeft+MAX_PIC_WIDTH-1;
	 else
	 m_PicRight=right;

	 if(bottom-top>MAX_PIC_HEIGHT-1)
	 m_PicBottom=m_PicTop+MAX_PIC_HEIGHT-1;
	 else
	 m_PicBottom=bottom;
	}

/*---------------------实现绘图工具类---------------------------------*/
//Brush
	void Painter::Brush::Draw(int left,int top,int right,int bottom,
		int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)
	{
	 printf("draw  canvas area around the point of %d,%d  by BRUSH\n",
		 Coordinates_x,Coordinates_y);
	}
	void Painter::Brush::SetStyle(ENUM_STYLE style)
	{
		if(style>=BS_SOLID&&style<=BS_HATCHED)
		   m_Style=style;
		else
			m_Style=BS_SOLID;
	}
	void Painter::Brush::SetToolCursor()
	{
		printf("Has been set cursor for BRUSH\n");
	}
//Circle
	void Painter::Circle::Draw(int left,int top,int right,int bottom,
		int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)
	{
	 printf("draw  canvas area around the point of %d,%d  by CIRCLE\n",
		 Coordinates_x,Coordinates_y);
	}
	void Painter::Circle::SetStyle(ENUM_STYLE style)
	{
		if(style>=CR_SOLID&&style<=CR_DOT)
		   m_Style=style;
		else
			m_Style=CR_SOLID;
	}
	void Painter::Circle::SetToolCursor()
	{
		printf("Has been set cursor for CIRCLE\n");
	}
//Beeline
	void Painter::Beeline::Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)
	{
		printf("draw  canvas area around the point of %d,%d  by Beeline\n",
		 Coordinates_x,Coordinates_y);
	}
	void Painter::Beeline::SetStyle(ENUM_STYLE style)
	{
		if(style>=BL_SOLID&&style<=BL_DASH)
		   m_Style=style;
		else
			m_Style=BL_SOLID;
	}
	void Painter::Beeline::SetToolCursor()
	{
		printf("Has been set cursor for Beeline\n");
	}

//Rectangle
	void Painter::Rectangle::Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)
	{
		printf("draw  canvas area around the point of %d,%d  by RECTANGLE\n",
		 Coordinates_x,Coordinates_y);
	}
	void Painter::Rectangle::SetStyle(ENUM_STYLE style)
	{
		if(style>=RT_SOLID&&style<=RT_DASH)
		   m_Style=style;
		else
			m_Style=RT_SOLID;
	}
	void Painter::Rectangle::SetToolCursor()
	{
		printf("Has been set cursor for RECTANGLE\n");
	}
//Rubber
	void Painter::Rubber::Draw(int left,int top,int right,int bottom,
				int Coordinates_x,int Coordinates_y,unsigned long **DrawingBuffer)
	{
		printf("draw  canvas area around the point of %d,%d  by RUBBER\n",
		 Coordinates_x,Coordinates_y);
	}
	void Painter::Rubber::SetStyle(ENUM_STYLE style)
	{
		if(style>=RB_MINI&&style<=RB_MAX)
		   m_Style=style;
		else
			m_Style=RB_MINI;
	}
	void Painter::Rubber::SetToolCursor()
	{
		printf("Has been set cursor for RUBBER\n");
	}

/*--------------------------------------------------------------------------------------------*/
//定义全局的绘图对象
Painter gPaint(0,0,500,500);

void OnMouseMove(int x,int y)
{
    gPaint.OnDraw(x,y);
}
int main(int argc, char* argv[])
{
  gPaint.SetSelectedColor(23);
  gPaint.SelectTool(RECTANGLE);
  gPaint.SetToolCharacteristic(2,BS_SOLID);
  OnMouseMove(23,78);
  gPaint.Rotate(30);
  gPaint.SaveToFile((char*)"..\\MyPicture\\drawing.bmp");
  return 0;
}


#include "main.h"
#include "spi.h"
#include "stdio.h"
#include "stdarg.h"

#include "lcd.h"
#include "lcd_font.h"

static uint16_t line[LCD_W];

uint16_t swap_uint16(uint16_t data)
{
		return (data<<8)|(data>>8);
}

/****** �ײ�ӿڲ��� ******/
void Lcd_WR_DATA8(unsigned char data)
{	
		LCD_DC_Set();
		HAL_SPI_Transmit(&SPI_LCD, &data, 0x01, 0x10);
}  

void Lcd_WR_DATA(uint16_t data)
{
		data = swap_uint16(data);
		LCD_DC_Set();
		/* note: ʹ��HAL��һ�η��������ֽ�˳������Ļ����˳���෴ */
		HAL_SPI_Transmit(&SPI_LCD, (uint8_t *)&data, 0x02, 0x10);
}	  

void Lcd_WR_DATA_chunk(uint16_t* data, uint16_t len)
{
		LCD_DC_Set();
		HAL_SPI_Transmit(&SPI_LCD, (uint8_t *)data, len, 0x10);
}	  

void Lcd_WR_REG(unsigned char data)	 
{	
		LCD_DC_Clr();
		HAL_SPI_Transmit(&SPI_LCD, &data, 0x01, 0x10);
}


/******************************************************************************
      ����˵����������ʼ�ͽ�����ַ
      ������ݣ�x1,x2 �����е���ʼ�ͽ�����ַ
                y1,y2 �����е���ʼ�ͽ�����ַ
      ����ֵ��  ��
******************************************************************************/
void Lcd_Address_Set(uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2)
{
	if(USE_HORIZONTAL==0)
	{
		Lcd_WR_REG(0x2a);//�е�ַ����
		Lcd_WR_DATA(x1+34);
		Lcd_WR_DATA(x2+34);
		Lcd_WR_REG(0x2b);//�е�ַ����
		Lcd_WR_DATA(y1);
		Lcd_WR_DATA(y2);
		Lcd_WR_REG(0x2c);//������д
	}
	else if(USE_HORIZONTAL==1)
	{
		Lcd_WR_REG(0x2a);//�е�ַ����
		Lcd_WR_DATA(x1+34);
		Lcd_WR_DATA(x2+34);
		Lcd_WR_REG(0x2b);//�е�ַ����
		Lcd_WR_DATA(y1);
		Lcd_WR_DATA(y2);
		Lcd_WR_REG(0x2c);//������д
	}
	else if(USE_HORIZONTAL==2)
	{
		Lcd_WR_REG(0x2a);//�е�ַ����
		Lcd_WR_DATA(x1);
		Lcd_WR_DATA(x2);
		Lcd_WR_REG(0x2b);//�е�ַ����
		Lcd_WR_DATA(y1+34);
		Lcd_WR_DATA(y2+34);
		Lcd_WR_REG(0x2c);//������д
	}
	else
	{
		Lcd_WR_REG(0x2a);//�е�ַ����
		Lcd_WR_DATA(x1);
		Lcd_WR_DATA(x2);
		Lcd_WR_REG(0x2b);//�е�ַ����
		Lcd_WR_DATA(y1+34);
		Lcd_WR_DATA(y2+34);
		Lcd_WR_REG(0x2c);//������д
	}
}

void Lcd_Init(void)
{
	LCD_RES_Clr();//��λ
	HAL_Delay(30);
	LCD_RES_Set();
	HAL_Delay(100);
	LCD_BLK_Set();//�򿪱���
  	HAL_Delay(100);

	Lcd_WR_REG(0x11); 
	Lcd_WR_REG(0x36); 
	if(USE_HORIZONTAL==0)Lcd_WR_DATA8(0x00);
	else if(USE_HORIZONTAL==1)Lcd_WR_DATA8(0xC0);
	else if(USE_HORIZONTAL==2)Lcd_WR_DATA8(0x70);
	else Lcd_WR_DATA8(0xA0);

	Lcd_WR_REG(0x3A);
	Lcd_WR_DATA8(0x05);

	Lcd_WR_REG(0xB2);
	Lcd_WR_DATA8(0x0C);
	Lcd_WR_DATA8(0x0C);
	Lcd_WR_DATA8(0x00);
	Lcd_WR_DATA8(0x33);
	Lcd_WR_DATA8(0x33); 

	Lcd_WR_REG(0xB7); 
	Lcd_WR_DATA8(0x35);  

	Lcd_WR_REG(0xBB);
	Lcd_WR_DATA8(0x35);

	Lcd_WR_REG(0xC0);
	Lcd_WR_DATA8(0x2C);

	Lcd_WR_REG(0xC2);
	Lcd_WR_DATA8(0x01);

	Lcd_WR_REG(0xC3);
	Lcd_WR_DATA8(0x13);   

	Lcd_WR_REG(0xC4);
	Lcd_WR_DATA8(0x20);  

	Lcd_WR_REG(0xC6); 
	Lcd_WR_DATA8(0x0F);    

	Lcd_WR_REG(0xD0); 
	Lcd_WR_DATA8(0xA4);
	Lcd_WR_DATA8(0xA1);

	Lcd_WR_REG(0xD6); 
	Lcd_WR_DATA8(0xA1);

	Lcd_WR_REG(0xE0);
	Lcd_WR_DATA8(0xF0);
	Lcd_WR_DATA8(0x00);
	Lcd_WR_DATA8(0x04);
	Lcd_WR_DATA8(0x04);
	Lcd_WR_DATA8(0x04);
	Lcd_WR_DATA8(0x05);
	Lcd_WR_DATA8(0x29);
	Lcd_WR_DATA8(0x33);
	Lcd_WR_DATA8(0x3E);
	Lcd_WR_DATA8(0x38);
	Lcd_WR_DATA8(0x12);
	Lcd_WR_DATA8(0x12);
	Lcd_WR_DATA8(0x28);
	Lcd_WR_DATA8(0x30);

	Lcd_WR_REG(0xE1);
	Lcd_WR_DATA8(0xF0);
	Lcd_WR_DATA8(0x07);
	Lcd_WR_DATA8(0x0A);
	Lcd_WR_DATA8(0x0D);
	Lcd_WR_DATA8(0x0B);
	Lcd_WR_DATA8(0x07);
	Lcd_WR_DATA8(0x28);
	Lcd_WR_DATA8(0x33);
	Lcd_WR_DATA8(0x3E);
	Lcd_WR_DATA8(0x36);
	Lcd_WR_DATA8(0x14);
	Lcd_WR_DATA8(0x14);
	Lcd_WR_DATA8(0x29);
	Lcd_WR_DATA8(0x32);
	
	Lcd_WR_REG(0x21); 
  
  Lcd_WR_REG(0x11);
  HAL_Delay(120);	
	Lcd_WR_REG(0x29); 
}

void Lcd_Clear(uint16_t Color)
{ 	
		Lcd_Address_Set(0,0,LCD_W-1,LCD_H-1);
	
		for(int i=0; i<LCD_W; i++)
				line[i] = swap_uint16(Color);
	
		LCD_DC_Set();
		for(int i=0; i<LCD_H; i++)
				HAL_SPI_Transmit(&SPI_LCD, (uint8_t *)&line[0], LCD_W*2, 0x100);

}

void Lcd_DrawPoint(uint16_t x,uint16_t y,uint16_t color)
{
		Lcd_Address_Set(x, y, x, y);
		Lcd_WR_DATA(color);
} 	 

/* ��ָ�����������ָ����ɫ */
void Lcd_Fill(uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2,uint16_t color)
{          
		uint16_t i,j; 
		Lcd_Address_Set(x1,y1,x2,y2);      
		for(i=y1;i<=y2;i++)
		{													   	 	
				for(j=x1;j<=x2;j++)
						Lcd_WR_DATA(color);
		} 					  	    
}  

/* x1,y1:������� x2,y2:�յ�����*/
void Lcd_DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
		uint16_t t; 
		int xerr=0,yerr=0,delta_x,delta_y,distance; 
		int incx,incy,uRow,uCol; 

		delta_x=x2-x1; //������������ 
		delta_y=y2-y1; 
		uRow=x1; 
		uCol=y1; 
		if(delta_x>0)incx=1; //���õ������� 
		else if(delta_x==0)incx=0;//��ֱ�� 
		else {incx=-1;delta_x=-delta_x;} 
		if(delta_y>0)incy=1; 
		else if(delta_y==0)incy=0;//ˮƽ�� 
		else{incy=-1;delta_y=-delta_y;} 
		if( delta_x>delta_y)distance=delta_x; //ѡȡ�������������� 
		else distance=delta_y; 
		
		for(t=0;t<=distance+1;t++ )//������� 
		{  
				Lcd_DrawPoint(uRow,uCol, color);//���� 
				xerr+=delta_x ; 
				yerr+=delta_y ; 
				if(xerr>distance) 
				{ 
						xerr-=distance; 
						uRow+=incx; 
				} 
				if(yerr>distance) 
				{ 
						yerr-=distance; 
						uCol+=incy; 
				} 
		}  
}    

void Lcd_DrawRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
		Lcd_DrawLine(x1,y1,x2,y1, color);
		Lcd_DrawLine(x1,y1,x1,y2, color);
		Lcd_DrawLine(x1,y2,x2,y2, color);
		Lcd_DrawLine(x2,y1,x2,y2, color);
}


void Draw_Circle(uint16_t x, uint16_t y, uint16_t r, uint16_t color)
{ 
		int a = 0;
		int b = r;
		int di;
  
		di=3-(r<<1);             //�ж��¸���λ�õı�־
		while(a<=b)
		{
				Lcd_DrawPoint(x-b,y-a, color);             //3           
				Lcd_DrawPoint(x+b,y-a, color);             //0           
				Lcd_DrawPoint(x-a,y+b, color);             //1       
				Lcd_DrawPoint(x-b,y-a, color);             //7           
				Lcd_DrawPoint(x-a,y-b, color);             //2             
				Lcd_DrawPoint(x+b,y+a, color);             //4               
				Lcd_DrawPoint(x+a,y-b, color);             //5
				Lcd_DrawPoint(x+a,y+b, color);             //6 
				Lcd_DrawPoint(x-b,y+a, color);     
				a++;			
			
				//ʹ��Bresenham�㷨��Բ     
				if(di<0)
					di += 4*a+6;	  
				else
				{
						di+= 10+4*(a-b);   
						b--;
				} 
				Lcd_DrawPoint(x+a,y+b, color);
		}
} 

//��ָ��λ����ʾһ���ַ�
//num:Ҫ��ʾ���ַ�:" "--->"~"
void Lcd_ShowChar(uint16_t x,uint16_t y, uint16_t num, uint16_t color)
{
		uint16_t temp;
		uint16_t pos,t;
    
		if(x>LCD_W-16||y>LCD_H-16)
				return;	    
		
		num = num-' ';//�õ�ƫ�ƺ��ֵ
		Lcd_Address_Set(x,y,x+8-1,y+16-1);      //���ù��λ�� 

		for(pos=0;pos<16;pos++)
		{
				temp=ascii_1608[(uint16_t)num*16+pos];		 //����1608����
				for(t=0;t<8;t++)
				{                 
						if(temp&0x01)
								Lcd_DrawPoint(x+t,y+pos, color);  
						temp>>=1; 
				}
		} 	   	 	  
}   

/*** *p:�ַ�����ʼ��ַ ��16���� ***/
void Lcd_ShowString(uint16_t x,uint16_t y,const uint8_t *p,uint16_t color)
{         
    while(*p!='\0')
    {       
        if(x>LCD_W-16){x=0;y+=16;}
        if(y>LCD_H-16){y=x=0;Lcd_Clear(RED);}
        Lcd_ShowChar(x, y, *p, color); 
        x+=8;
        p++;
    }  
}

void Lcd_print(uint16_t x,uint16_t y,uint16_t colar,const char *fmt,...)
{
		static unsigned char buffer[128]={0}; 
		va_list ap;
		
		va_start(ap,fmt);
		vsprintf((char*)buffer, fmt, ap);
		va_end(ap);

		Lcd_ShowString(x, y, buffer, colar);
}

/******************************************************************************
      ����˵������ʾͼƬ
      ������ݣ�x, y 		�������
                width 	ͼƬ����
                height  ͼƬ�߶�
                pic[]  	ͼƬ����    
      ����ֵ��  ��
******************************************************************************/
void Lcd_ShowPicture(uint16_t x,uint16_t y,uint16_t width,uint16_t height,const uint8_t pic[])
{
		for(int i = 0; i < height; i++) {
				Lcd_Address_Set(x, y + i, x + width - 1, y + i);
				Lcd_WR_DATA_chunk((uint16_t *)pic + i * width, width * 2);
		}
}
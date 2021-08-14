#include "bsp_digital.h"

#if BSP_DIGITAL

const char Digital_tube[10]={0x82,0xE7,0x2A,0x26,0x47,0x16,0x12,0xA7,0x02,0x06};


void Digital_tube_Display1(unsigned char num)
{
	DISPLAY_CLOSE;
	DISPLAY1_EN;
	P2=Digital_tube[num];
}
void Digital_tube_Display2(unsigned char num)
{
	DISPLAY_CLOSE;
	DISPLAY2_EN;
	P2=Digital_tube[num];
}
void Digital_tube_Display3(unsigned char num)
{
	DISPLAY_CLOSE;
	DISPLAY3_EN;
	P2=Digital_tube[num];
}
void Digital_tube_Display4(unsigned char num)
{
	DISPLAY_CLOSE;
	DISPLAY4_EN;
	P2=Digital_tube[num];
}
void Digital_tube_DisplayALL(unsigned short num,unsigned char *arr)
{
	arr[0]=num/1000;
	arr[1]=(num-arr[0]*1000)/100;
	arr[2]=(num%100)/10;
	arr[3]=num%10;
}


#endif



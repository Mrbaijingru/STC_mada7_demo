#ifndef _DIGITAL_H



#define _DIGITAL_H

#include "mada7.h"

#define DISPLAY_CLOSE	P3=0XFF
#define DISPLAY1_EN	P3&=0X7F
#define DISPLAY2_EN	P3&=0XBF
#define DISPLAY3_EN	P3&=0XDF
#define DISPLAY4_EN	P3&=0XEF

void Digital_tube_Display1(unsigned char num);
void Digital_tube_Display2(unsigned char num);
void Digital_tube_Display3(unsigned char num);
void Digital_tube_Display4(unsigned char num);
void Digital_tube_DisplayALL(unsigned short num,unsigned char *arr);


#endif


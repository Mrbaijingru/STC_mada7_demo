#ifndef _ADC_H


#define _ADC_H

#include "mada7.h"

/*
if((ADC_CONTR&0x10))
		{
			
			Get_ADC_Value(&ADC_value,3);

		}
*/
#define AD_Channel0 ((unsigned char)0x01)
#define AD_Channel1 ((unsigned char)0x02)
#define AD_Channel2 ((unsigned char)0x04)
#define AD_Channel3 ((unsigned char)0x08)
#define AD_Channel4 ((unsigned char)0x10)
#define AD_Channel5 ((unsigned char)0x20)
#define AD_Channel6 ((unsigned char)0x40)
#define AD_Channel7 ((unsigned char)0x80)
	
#define Speed_veryhigh 	((unsigned char)0x03<<5)
#define Speed_high 			((unsigned char)0x02<<5)
#define Speed_low				((unsigned char)0x01<<5)
#define Speed_verylow   ((unsigned char)0x00<<5)
	
void ADC_Init(unsigned char Channel,unsigned char Speed);
void ADC_Start(void);
void ADC_Close(void);
void Get_ADC_Value(unsigned short *ADC_value,unsigned char CHS);
void Get_ADC_Voltage(float *ADC_voltage,unsigned char CHS);

#endif


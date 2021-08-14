#include "bsp_adc.h"

#if BSP_ADC

void ADC_Init(unsigned char Channel,unsigned char Speed)
{
	P1ASF=Channel;
//	ADC_CONTR=((0x80|Speed)|CHS);
//	P1ASF=0xFF;
	ADC_CONTR=0x80;
	delay_ms(1);
	ADC_CONTR=((0x88|Speed));
	delay_ms(1);
	CLK_DIV|=0x20;
}
void ADC_Start(void)
{
		ADC_CONTR|=0x08;
}
void ADC_Close(void)
{
		ADC_CONTR&=0xF7;
}
void Get_ADC_Value(unsigned short *ADC_value,unsigned char CHS)
{
	ADC_CONTR=((0x88|Speed_verylow)|CHS);
	delay_ms(1);
	*ADC_value=(ADC_RES<<8|ADC_RESL);

}
void Get_ADC_Voltage(float *ADC_voltage,unsigned char CHS)
{
	unsigned short ADC_value;
	Get_ADC_Value(&ADC_value,CHS);
	*ADC_voltage=(ADC_value/1024.0)*5;
}


#endif



#include "bsp_systicks.h"

#if BSP_SYSTICKS

//0.25us  4=1ms  4000=1s;
unsigned int millisecond;
unsigned int second;
static void Systicks_T0_Init(void)
{
	TMOD&=0xf0;
	TMOD|=0x02;
	TH0=0x06;
	TL0=0x06;
	ET0=1;
	EA=1;
	TR0=1;
//	EA|=0x82;
//	TCON&=0xDF;
//	TCON|=0x10;
}

void delay(unsigned int time)
{
	while(time--);
}

void delay_ms(unsigned int timer_ms)
{
	Systicks_T0_Init();
	while(millisecond<timer_ms*4);
//	TCON&=0xCF;
	TR0=0;
	millisecond=0;
}

void delay_s(unsigned int timer_s)
{
	Systicks_T0_Init();
	while(second<timer_s)
	{
		if(millisecond==4000)
		{
			second++;
			millisecond=0;
		}
	}
//	TCON&=0xCF;
	TR0=0;
	millisecond=0;
	second=0;
}


#endif



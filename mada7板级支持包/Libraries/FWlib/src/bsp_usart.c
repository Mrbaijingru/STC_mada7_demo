#include "bsp_usart.h"

#if BSP_USART

void Usart_Init(void)
{
	PCON &= 0x7F;		
	SCON = 0x50;		
	AUXR |= 0x40;		
	AUXR &= 0xFE;		
	TMOD &= 0x0F;		
	TMOD |= 0x20;		
	TL1 = 0xDC;		
	TH1 = 0xDC;		
	ET1 = 0;		
	TR1 = 1;
	TI=1;	

}


void Usart_Senddata(unsigned char character)
{
	SBUF=character;
}


#endif



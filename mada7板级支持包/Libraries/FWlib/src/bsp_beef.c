#include "bsp_beef.h"

#if BSP_BEEF

void Beef_On(void)
{
	P5&=0xEF;
}

void Beef_Off(void)
{
	P5|=0x10;
}
void Beef_Toggle(void)
{
	P5^=0x10;
}

#endif




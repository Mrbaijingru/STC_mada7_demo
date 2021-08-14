#include "bsp_watchdog.h"

#if BSP_WATCHDOG

void Watchdog_Init(void)
{
	WDT_CONTR=0x35;
}
void Feed_dog(void)
{
	WDT_CONTR=0x35;
}


#endif


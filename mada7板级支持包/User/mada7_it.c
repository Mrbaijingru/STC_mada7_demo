#include "mada7_it.h"

extern unsigned int millisecond;
void in1 (void) interrupt 1
{
	millisecond++;
}


void in4 (void) interrupt 4
{
	if(RI)
	{
		 printf("it success\n");
			RI=0; 
	}
  if(TI)
		TI=0;	
}



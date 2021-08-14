#include "bsp_key.h"

#if BSP_KEY

void Key_Init(void)
{
	P33=0;
	P34=1;
	P35=1;
	P36=1;
	P37=1;
}
unsigned char Key_Touch_Detect1(void)
{
	static Key_Touch_State touch_state1=XPT2046_STATE_RELEASE;
	static unsigned int counter1;
	unsigned char detectResult=KEY_UP;
	switch(touch_state1)
	{
		case XPT2046_STATE_RELEASE:
			if(KEY1_STATE==KEY_DOWN)
			{
				touch_state1=XPT2046_STATE_WAITING;
				detectResult=DETECTUP;
			}
			else
			{
				touch_state1=XPT2046_STATE_RELEASE;
				detectResult=DETECTUP;
			}
			break;
		case XPT2046_STATE_WAITING:
			if(KEY1_STATE==KEY_DOWN)
			{
				counter1++;
				if(counter1>2000)
				{
					counter1=0;
					touch_state1=XPT2046_STATE_PRESSED;
					detectResult=DETECTUP;
				}
				else
				{
					touch_state1 = XPT2046_STATE_WAITING;
					detectResult = DETECTUP;
				}
			}
			else
			{
				counter1 = 0;
				touch_state1 = XPT2046_STATE_RELEASE;
				detectResult = DETECTUP;
			}
			break;
		case XPT2046_STATE_PRESSED:
			if(KEY1_STATE==KEY_DOWN)
			{
				touch_state1 = XPT2046_STATE_PRESSED;
				detectResult = DETECTUP;
			}
			else
			{
				touch_state1 = XPT2046_STATE_RELEASE;
				detectResult = DETECTDOWN;
			}
			break;
	}
	return detectResult;
}
unsigned char Key_Touch_Detect2(void)
{
	static Key_Touch_State touch_state2=XPT2046_STATE_RELEASE;
	static unsigned int counter2;
	unsigned char detectResult=KEY_UP;
	switch(touch_state2)
	{
		case XPT2046_STATE_RELEASE:
			if(KEY2_STATE==KEY_DOWN)
			{
				touch_state2=XPT2046_STATE_WAITING;
				detectResult=DETECTUP;
			}
			else
			{
				touch_state2=XPT2046_STATE_RELEASE;
				detectResult=DETECTUP;
			}
			break;
		case XPT2046_STATE_WAITING:
			if(KEY2_STATE==KEY_DOWN)
			{
				counter2++;
				if(counter2>2000)
				{
					counter2=0;
					touch_state2=XPT2046_STATE_PRESSED;
					detectResult=DETECTUP;
				}
				else
				{
					touch_state2 = XPT2046_STATE_WAITING;
					detectResult = DETECTUP;
				}
			}
			else
			{
				counter2 = 0;
				touch_state2 = XPT2046_STATE_RELEASE;
				detectResult = DETECTUP;
			}
			break;
		case XPT2046_STATE_PRESSED:
			if(KEY2_STATE==KEY_DOWN)
			{
				touch_state2 = XPT2046_STATE_PRESSED;
				detectResult = DETECTUP;
			}
			else
			{
				touch_state2 = XPT2046_STATE_RELEASE;
				detectResult = DETECTDOWN;
			}
			break;
	}
	return detectResult;
}

unsigned char Key_Touch_Detect3(void)
{
	static Key_Touch_State touch_state3=XPT2046_STATE_RELEASE;
	static unsigned int counter3;
	unsigned char detectResult=KEY_UP;
	switch(touch_state3)
	{
		case XPT2046_STATE_RELEASE:
			if(KEY3_STATE==KEY_DOWN)
			{
				touch_state3=XPT2046_STATE_WAITING;
				detectResult=DETECTUP;
			}
			else
			{
				touch_state3=XPT2046_STATE_RELEASE;
				detectResult=DETECTUP;
			}
			break;
		case XPT2046_STATE_WAITING:
			if(KEY3_STATE==KEY_DOWN)
			{
				counter3++;
				if(counter3>2000)
				{
					counter3=0;
					touch_state3=XPT2046_STATE_PRESSED;
					detectResult=DETECTUP;
				}
				else
				{
					touch_state3 = XPT2046_STATE_WAITING;
					detectResult = DETECTUP;
				}
			}
			else
			{
				counter3 = 0;
				touch_state3 = XPT2046_STATE_RELEASE;
				detectResult = DETECTUP;
			}
			break;
		case XPT2046_STATE_PRESSED:
			if(KEY3_STATE==KEY_DOWN)
			{
				touch_state3 = XPT2046_STATE_PRESSED;
				detectResult = DETECTUP;
			}
			else
			{
				touch_state3 = XPT2046_STATE_RELEASE;
				detectResult = DETECTDOWN;
			}
			break;
	}
	return detectResult;
}

unsigned char Key_Touch_Detect4(void)
{
	static Key_Touch_State touch_state4=XPT2046_STATE_RELEASE;
	static unsigned int counter4;
	unsigned char detectResult=KEY_UP;
	switch(touch_state4)
	{
		case XPT2046_STATE_RELEASE:
			if(KEY4_STATE==KEY_DOWN)
			{
				touch_state4=XPT2046_STATE_WAITING;
				detectResult=DETECTUP;
			}
			else
			{
				touch_state4=XPT2046_STATE_RELEASE;
				detectResult=DETECTUP;
			}
			break;
		case XPT2046_STATE_WAITING:
			if(KEY4_STATE==KEY_DOWN)
			{
				counter4++;
				if(counter4>2000)
				{
					counter4=0;
					touch_state4=XPT2046_STATE_PRESSED;
					detectResult=DETECTUP;
				}
				else
				{
					touch_state4 = XPT2046_STATE_WAITING;
					detectResult = DETECTUP;
				}
			}
			else
			{
				counter4 = 0;
				touch_state4 = XPT2046_STATE_RELEASE;
				detectResult = DETECTUP;
			}
			break;
		case XPT2046_STATE_PRESSED:
			if(KEY4_STATE==KEY_DOWN)
			{
				touch_state4 = XPT2046_STATE_PRESSED;
				detectResult = DETECTUP;
			}
			else
			{
				touch_state4 = XPT2046_STATE_RELEASE;
				detectResult = DETECTDOWN;
			}
			break;
	}
	return detectResult;
}




#endif



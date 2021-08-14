#ifndef _KEY_H




#define _KEY_H

#include "mada7.h"

#define KEY_DOWN 				0
#define KEY_UP					1
#define KEY1_STATE			P37
#define KEY2_STATE			P36
#define KEY3_STATE			P35
#define KEY4_STATE			P34
#define DETECTDOWN			0
#define DETECTUP				1
typedef enum
{
	XPT2046_STATE_RELEASE=0,
	XPT2046_STATE_WAITING,
	XPT2046_STATE_PRESSED,
}Key_Touch_State;

void Key_Init(void);
unsigned char Key_Touch_Detect1(void);
unsigned char Key_Touch_Detect2(void);
unsigned char Key_Touch_Detect3(void);
unsigned char Key_Touch_Detect4(void);
#endif



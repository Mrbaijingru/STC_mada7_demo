#ifndef _TLC5620_H


#define _TLC5620_H

#include "mada7.h"

#define Clk_On	P0|=0x01
#define Data_On	P0|=0x02
#define Ldac_On	P0|=0x04
#define Load_On	P0|=0x08

#define Clk_Off		P0&=0xFE
#define Data_Off	P0&=0xFD
#define Ldac_Off	P0&=0xFB
#define Load_Off	P0&=0xF7

typedef enum
{ DacA = 0,
  DacB,
	DacC,
	DacD
}TLC5620_Channel;


void	DacX_Channel_write(unsigned char Channel,unsigned char num,unsigned char rng);
void	DacA_write(unsigned char num,unsigned char rng);
void	DacB_write(unsigned char num,unsigned char rng);
void	DacC_write(unsigned char num,unsigned char rng);
void	DacD_write(unsigned char num,unsigned char rng);

#endif




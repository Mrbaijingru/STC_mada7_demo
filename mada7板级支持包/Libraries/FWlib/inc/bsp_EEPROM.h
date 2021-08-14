#ifndef _EEPROM_H



#define _EEPROM_H

#include "mada7.h"


void EEPROM_Disable(); 
void EEPROM_SectorErase(unsigned short eeprom_address); 
void EEPROM_Read(unsigned short eeprom_address,unsigned char *read_data,unsigned char length);
void EEPROM_Write(unsigned short eeprom_address,unsigned char *write_data,unsigned char length);

#endif



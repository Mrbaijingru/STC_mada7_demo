#include "bsp_EEPROM.h"

#if BSP_EEPROM

void EEPROM_Disable()
{
	IAP_CMD=0x00;
	IAP_CONTR=0x00;
}
void EEPROM_SectorErase(unsigned short eeprom_address)
{
	IAP_CMD=0x03;
	IAP_TRIG=0x5A;
	IAP_TRIG=0xA5;
	EEPROM_Disable();
}
void EEPROM_Read(unsigned short eeprom_address,unsigned char *read_data,unsigned char length)
{
	IAP_CMD=0x01;
//	IAP_CONTR=0xC7;
	IAP_CONTR=0x87;
	printf("3");
	do
	{
		IAP_ADDRH=eeprom_address/256;
		IAP_ADDRL=eeprom_address%256;
		IAP_TRIG=0x5A;
		IAP_TRIG=0xA5;
		printf("4");
		if((eeprom_address+length-1)>0xF3FF)
		{
			printf("Out of read range\n");
			EEPROM_Disable();
			break;
		}
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		printf("5");
		*read_data=IAP_DATA;
		length--;
		read_data++;
		eeprom_address++;
	}while(length);
	printf("6");
	EEPROM_Disable();
}
void EEPROM_Write(unsigned short eeprom_address,unsigned char *write_data,unsigned char length)
{
	EEPROM_SectorErase(eeprom_address&0xFE00);
	IAP_CMD=0x02;
//	IAP_CONTR=0xC7;
	IAP_CONTR=0x87;
	do
	{
		IAP_ADDRH=eeprom_address/256;
		IAP_ADDRL=eeprom_address%256;
		IAP_TRIG=0x5A;
		IAP_TRIG=0xA5;
		if((eeprom_address+length-1)>0xF3FF)
		{
			printf("Out of write range\n");
			EEPROM_Disable();
			break;
		}
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		nop();
		IAP_DATA=*write_data;
		length--;
		write_data++;
		eeprom_address++;
	}while(length);
	EEPROM_Disable();
}

#endif



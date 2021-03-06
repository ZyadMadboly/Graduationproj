/*
* SPI_CONFIG.h
*
* Created: 2/19/2021 8:18:36 PM
*  Author: karim
*/


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATIONS.h"
/*
#define SPCR (*(volatile Uint8t*)(0x2D))
#define SPSR (*(volatile Uint8t*)(0x2E))
#define SPDR (*(volatile Uint8t*)(0x2F))
*/

#define MASTER 1
#define SLAVE  0

#define MOSI 5
#define MISO 6
#define CLK  7
#define SS   4

#define SPI_PORT DDRB

#define SPI_MODE MASTER

typedef enum
{
	SPI_NOK= 0 ,
	SPI_OK= 1
}SPI_Status;

#endif /* SPI_CONFIG_H_ */

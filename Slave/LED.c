/*
* LED.c
*
* Created: 2/6/2021 5:09:49 PM
*  Author: karim
*/

/*
1- Macros
2- Functions implementations
*/

#include "LED.h"

void LED0_Init(void)
{
	/*Define direction*/
	//SET_BIT(LED0_DDR, LED0_PIN);
	//SET_BIT(DDRC, 2);
	//DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(LED0_PORT, LED0_PIN, LED0_OUTPUT);
}
void LED0_ON(void)
{
	/*Enable LED0*/
	//SET_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_HIGH);
}
void LED0_OFF(void)
{
	/*Disable LED0*/
	//CLR_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_LOW);
}
void LED0_TGL(void)
{
	/*Toggle LED0*/
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TogglPin(LED0_PORT, LED0_PIN);
}

/*********** EDIT BY KHALED ************/
//LED1
void LED1_Init(void)
{
	DIO_SetPin_Direction(LED1_PORT, LED1_PIN, LED1_OUTPUT);
}
void LED1_ON(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_LOW);
}
void LED1_TGL(void)
{
	DIO_TogglPin(LED1_PORT, LED1_PIN);
}

//LED2
void LED2_Init(void)
{
	DIO_SetPin_Direction(LED2_PORT, LED2_PIN, LED2_OUTPUT);
}
void LED2_ON(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED2_HIGH);
}
void LED2_OFF(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED2_LOW);
}
void LED2_TGL(void)
{
	DIO_TogglPin(LED2_PORT, LED2_PIN);
}
/*********** EDIT END ************/
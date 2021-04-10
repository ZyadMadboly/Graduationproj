
#include "UART.h"
#include "SPI.h"
#include "LED.h"

int main(void)
{
	UART_Init();
	SPI_Init();
	LED0_Init();
	LED1_Init();

	uint8_t data=0;
	while (1)
	{
		data = SPI_Receive();
		if (data == 'a'){
			LED0_ON();
		}else if (data == 'b'){
			LED1_ON();
		}else if (data == 'c'){
			LED0_OFF();
		}else if (data == 'd'){
			LED1_OFF();
		}
		data=0;
	}
}


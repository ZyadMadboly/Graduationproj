
#include "UART.h"
#include "SPI.h"

int main(void)
{
	UART_Init();
	SPI_Init();

	uint8_t data=0;
	while (1)
	{
		data = UART_Receive();
		if (data == 'a'){
			SPI_Transmit('a');
		}else if (data == 'b'){
			SPI_Transmit('b');
		}else if (data == 'c'){
			SPI_Transmit('c');
		}else if (data == 'd'){
			SPI_Transmit('d');
		}
		data=0;
	}
}


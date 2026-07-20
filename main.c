

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "UART.h"
#include "LCD.h"

int main(void)
{
	UART_init(9600);
    LCD_init();
	char x;
	
    while (1) 
    {
		x=UART_receive_data();
		LCD_send_data(x);
		
    }
}


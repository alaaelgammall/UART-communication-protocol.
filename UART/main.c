/*
 * main.c
 *
 *  Created on: Dec 3, 2021
 *      Author: WIN 10
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART.h"
#include "avr/delay.h"
#include "DIO.h"
#include "App.h"
#include "App_config.h"

/* int main(void) {
	App_Int();
	u8 Data;
	u8 Greeting[33] = GreetingSentance;
	UART_SendString(Greeting);
	_delay_ms(500);
	while (1) {
		Data = UART_GetChar();
		_delay_ms(500);
		if (Data == TurnLedOn)
		{
			u8 LightOn[13] =LightONSentance  ;
			DIO_SetPinValue (DIO_PortB, PIN0 , High) ;
			 Servo () ;
			TurnLedPinOn;
			UART_SendString(LightOn);
			_delay_ms(500);
		}
		else if (Data == TurnLedOff)
		{
			u8 LightOff[20] =  LightOffSentance ;
			TurnLedPinOff;
			UART_SendString(LightOff);
			_delay_ms(500);
		}

	}

} */


int main(void) {

	App_Int();
// u8 Greeting[33] = GreetingSentance;
//	UART_SendString(Greeting);
while (1) {
u8 Data[10];
	UART_RecieveString (Data) ;
	UART_SendString(Data);

_delay_ms(500);
}
}

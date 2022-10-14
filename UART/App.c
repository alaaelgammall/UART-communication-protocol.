/*
 * App.c
 *
 *  Created on: Aug 26, 2022
 *      Author: Win 10 5G
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART.h"
#include "avr/delay.h"
#include "DIO.h"
#include "App.h"
#include "App_config.h"

//#include <avr/io.h>
//#include <util/delay.h>
//#define F_CPU 12000000


void App_Int(void) {
	DIO_Int();
	UART_Int();
u8 Greeting[33] = GreetingSentance;
UART_SendString(Greeting);
}

void TurnLed (void) {
	u8 Data;
	Data = UART_GetChar() ;
	if (Data == TurnLedOn)
			{
				u8 LightOn[13] =LightONSentance  ;
				DIO_SetPinValue (DIO_PortB, PIN0 , High) ;
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





/* void Servo (void) {
{
   //Configure TIMER1
   TCCR1A|=(0<<COM1A0)|(1<<COM1A1)|(1<<WGM11)|(0<<WGM10);        //NON Inverted Fast PWM
   TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10)|(0<<CS12); //PRESCALER=64 MODE 14(FAST PWM)

   ICR1=3749;  //fPWM=50Hz (Period = 20ms Standard).
   DDRD=(1<<PD4)|(1<<PD5);   //PWM Pins as Out

while (1)
   {
   		OCR1A = 65;	/* Set servo shaft at -90° position */
   	/*	_delay_ms(1500);
   		OCR1A = 175;	/* Set servo shaft at 0° position */
   	/*	_delay_ms(1500);
   		OCR1A = 300;	/* Set servo at +90° position */
   	/*	_delay_ms(1500); */
/*   	}

} */

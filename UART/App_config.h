/*
 * App_config.h
 *
 *  Created on: Aug 26, 2022
 *      Author: Win 10 5G
 */

#ifndef APP_CONFIG_H_
#define APP_CONFIG_H_

#define GreetingSentance {'H','e','l','l','o', ',', '\n','P','l','e','a','s', 'e' , ',' , '\t', 'c' , 'h' , 'o' , 'o' , 's' , 'e' ,'\t', 'o' , 'p' , 'e' , 'r' , 'a' , 't' , 'i' , 'o' , 'n' ,'.' ,'\n','\0'}


#define TurnLedOn '1'

#define TurnLedPinOn DIO_SetPinValue( DIO_PortB , PIN3 , High )

#define LightONSentance {'\n','L' ,'i' , 'g' , 'h', 't' , '\t' ,'O' ,'n' , '.','\n', '\0' }


#define TurnLedOff '2'

#define TurnLedPinOff  DIO_SetPinValue( DIO_PortB , PIN3 , Low )

#define LightOffSentance {'\n','L' ,'i' , 'g' , 'h', 't' ,'\t' ,'O' ,'f' ,'f' , '.' ,'\n', '\0' }




#endif /* APP_CONFIG_H_ */

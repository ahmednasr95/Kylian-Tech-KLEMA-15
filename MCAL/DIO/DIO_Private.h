/*
 *  DIO_Private.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */
#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "CPU_Configuration.h"

/************************************************************************/
//					  CONFIGURATIONS
/************************************************************************/

typedef enum {
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_Port;

typedef enum {
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}DIO_Pin;

typedef enum{
	DIO_INPUT  = 0,
	DIO_OUTPUT = 1
}DIO_State;

typedef enum {
	DIO_LOW	  = 0,
	DIO_HIGH  = 1
}DIO_Status;

/************************************************************************/
/*                      Functions Initialization                        */
/************************************************************************/

ERROR_STATE DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_State state);
ERROR_STATE DIO_SetPin_Value(DIO_Port port, DIO_Pin pin, DIO_Status status);
ERROR_STATE DIO_TglPin_Value(DIO_Port port, DIO_Pin pin);
ERROR_STATE DIO_GetPin_Value(DIO_Port port, DIO_Pin pin,UINT8_t* pin_value);
ERROR_STATE DIO_SetPin_PULLUP(DIO_Port port, DIO_Pin pin);


#endif /* DIO_PRIVATE_H_ */

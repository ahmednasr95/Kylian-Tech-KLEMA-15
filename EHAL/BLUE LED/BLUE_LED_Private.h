/*
 *  BLUE_LED_Private.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */ 

#ifndef BLUE_LED_PRIVATE_H_
#define BLUE_LED_PRIVATE_H_

// Configuration:
#include "CPU_Configuration.h"

#define BLUE_LED_PIN		DIO_PIN5
#define BLUE_LED_PORT		DIO_PORTA

#define BLUE_LED_OUTPUT		DIO_OUTPUT

#define BLUE_LED_HIGH		DIO_HIGH
#define BLUE_LED_LOW		DIO_LOW

// Function Prototype:
ERROR_STATE BLUE_LED_Initializ(void);
ERROR_STATE BLUE_LED_ON(void);
ERROR_STATE BLUE_LED_OFF(void);
ERROR_STATE BLUE_LED_TGL(void);

#endif /* BLUE_LED_PRIVATE_H_ */
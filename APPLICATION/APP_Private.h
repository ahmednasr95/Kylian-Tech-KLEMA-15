/*
 *  APP_Private.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#ifndef APP_PRIVATE_H_
#define APP_PRIVATE_H_

#include "BLUE_LED_Private.h"
#include "LCD_Private.h"
#include "Potentiometer_Private.h"

#define NB_OF_OVERFLOWS_IN_TIMOUT	1221
#define RANGE_BOUNADRY_1			0
#define RANGE_BOUNADRY_2			50
#define RANGE_BOUNDARY_3			100

typedef enum{
	OFF_State,READY_state,IGNITION
	}Car_State ;


ERROR_STATE app_init(void);

ERROR_STATE app_main(void);

 ERROR_STATE Off_Task(void);

ERROR_STATE Ready_Task(void);

ERROR_STATE Ignition_Task(void);

ERROR_STATE Run(void);

ERROR_STATE Check_State(void);


#endif /* APP_PRIVATE_H_ */
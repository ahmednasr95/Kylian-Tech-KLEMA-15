/*
 *  BLUE_LED_Private.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author:  Azza & Seif & Ali &Ahmed
 */

#include "BLUE_LED_Private.h"
 /*
 * Description:Function to initialize the Blue led
 * input: void
 * return: Error State
 */
ERROR_STATE BLUE_LED_Initializ(void){
	ERROR_STATE state_error = SUCCESS;
	DIO_SetPin_Direction(BLUE_LED_PORT,BLUE_LED_PIN,BLUE_LED_OUTPUT);
	return state_error;
}
 /*
 * Description:function to Set On the led
 * input: void
 * return: Error State
 */
ERROR_STATE BLUE_LED_ON(void){
	ERROR_STATE state_error = SUCCESS;
	DIO_SetPin_Value(BLUE_LED_PORT,BLUE_LED_PIN,BLUE_LED_HIGH);
	return state_error;
}
 /*
 * Description: function to Off the led
 * input: void
 * return: Error State
 */
ERROR_STATE BLUE_LED_OFF(void){
	ERROR_STATE state_error = SUCCESS;
	DIO_SetPin_Value(BLUE_LED_PORT,BLUE_LED_PIN,BLUE_LED_LOW);
	return state_error;
}
 /*
 * Description:function to Toggel the led
 * input: void
 * return: Error State
 */
ERROR_STATE BLUE_LED_TGL(void){
	ERROR_STATE state_error = SUCCESS;
	DIO_TglPin_Value(BLUE_LED_PORT,BLUE_LED_PIN);
	return state_error;
}
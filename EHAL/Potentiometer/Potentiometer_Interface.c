/*
 *  Potentiometer_Interface.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#include "Potentiometer_Private.h"

 /*
 * Description: Function to initialize the Potentiometer
 * input: void
 * return: Error State
 */
ERROR_STATE VR1_init(){
	ERROR_STATE state_error = SUCCESS;
	if(ADC_Initializ()){
		state_error = SUCCESS;
	}else{
		state_error = FAIL;
	}
	return state_error;
}
 /*
 * Description: Function to Get Reading of the Potentiometer
 * input: void
 * return: Error State
 */
ERROR_STATE VR1_Read(UINT16_t* POT_value){
	ERROR_STATE state_error = SUCCESS;
	if(ADC_Read(ADC_PIN0,POT_value)){
		state_error = SUCCESS;
	}else{
		state_error = FAIL;
	}
	return state_error;
}

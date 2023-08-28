/*
 *  ADC_Interface.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#include "ADC_Private.h"

 /*
 * Description: Function to initialize the Adc
 * input: nothing
 * return: Error State
 */
ERROR_STATE ADC_Initializ(){
	CLR_BIT(ADC_REF_voltage,REF_BIT1);SET_BIT(ADC_REF_voltage,REF_BIT0);
	SET_BIT(ADC_CNTR_State,ADC_EN_BIT);
	SET_BIT(ADC_CNTR_State,ADC_PRESCALER_BIT2);SET_BIT(ADC_CNTR_State,ADC_PRESCALER_BIT1);SET_BIT(ADC_CNTR_State,ADC_PRESCALER_BIT0);
	return SUCCESS;
}
 /*
 * Description: Function to get the value of the Adc
 * input: channel & pointer to store the Adc value
 * return: Error State
 */
ERROR_STATE ADC_Read(ADC_PIN channel,UINT16_t* adc_value){
	UINT16_t adc_map=0;
	ADC_REF_voltage &= 0xf0;
	ADC_REF_voltage |= channel;
	CLR_BIT(ADC_CNTR_State,ADC_INTERRUPT_EN);
	CLR_BIT(ADC_CNTR_State,ADC_AUTO_TRIGGER_EN);
	SET_BIT(ADC_CNTR_State,ADC_START_CONVERSION);
	while(GET_BIT(ADC_CNTR_State,ADC_NORMAL_FLAG));
	adc_map |= (UINT16_t)ADCL;
	adc_map |= (UINT16_t)ADCH << 8;
	*adc_value=adc_map;
	return SUCCESS;
}
 /*
 * Description: Function to init read
 * input: channel
 * return: Error State
 */
ERROR_STATE ADC_INT_Read(ADC_PIN channel){
	ERROR_STATE state_error = SUCCESS;
	ADC_REF_voltage &= 0xF0;
	ADC_REF_voltage |= channel;
	SET_BIT(ADC_CNTR_State,ADC_AUTO_TRIGGER_EN);
	ADC_SPECIAL_REG &= 0x0F;
	ADC_SPECIAL_REG |= 0x00;
	if(Set_Global_INT(ON)){
			SET_BIT(ADC_CNTR_State,ADC_INTERRUPT_EN);
			SET_BIT(ADC_CNTR_State,ADC_START_CONVERSION);
	}else{
		state_error = FAIL;
	}

	return state_error;
}
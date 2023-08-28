/*
 *  APP_Private.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#include "APP_Private.h"

Car_State Current_State;
Car_State Previous_State;
volatile UINT16_t OVF_Counter=0;
volatile UINT8_t Interrupt_Flag=false;

 /*
 * Description: function to Initialize the system
 * input: void
 * return: Error State
 */
 
ERROR_STATE app_init(){
		ERROR_STATE state_error = SUCCESS;
		LCD_Initialize();
		BLUE_LED_Initializ();
		VR1_init();
		return state_error;
}
 /*
 * Description: function to call the Algorithm of the system
 * input: void
 * return: Error State
 */
ERROR_STATE app_main(){
		ERROR_STATE state_error = SUCCESS;
		Run();
		return state_error;
}
 /*
 * Description: the Algorithm of the system
 * input: void
 * return: Error State
 */
ERROR_STATE Run(){
	ERROR_STATE state_error = SUCCESS;
	Check_State();
	if(Current_State==OFF_State)
	{
		Off_Task();
	}
	else if( Current_State==READY_state)
	{
		Ready_Task();
	}
	else if(Current_State==IGNITION)
	{
		Ignition_Task();
	}
	else
	{
		state_error=FAIL;
	}
	return state_error;
}
 /*
 * Description: OFF Algorithm of the system
 * input: void
 * return: Error State
 */
 ERROR_STATE Off_Task(void){
	 ERROR_STATE state_error = SUCCESS;
	 Interrupt_Flag=false;
	 if (Previous_State==READY_state){
		 LCD_Clear();
	 } 
	 else {
		 /* Do Nothing*/
	 }
	 LCD_LINE_position(0,0);
	 LCD_Write_String("OFF STATE");
	 timer0_deinit();
	  OVF_Counter=0;
	 BLUE_LED_OFF();
	 Previous_State=OFF;

	 return state_error;
 }
 /*
 * Description:Ready Algorithm of the system
 * input: void
 * return: Error State
 */
 ERROR_STATE Ready_Task(void){
	 ERROR_STATE state_error = SUCCESS;
	 if (Previous_State!=READY_state){
		LCD_Clear();
		 timer0_init();
		 
		 Previous_State=READY_state;
	 }
	 else {
		 /* Do Nothing*/
	 }

		 LCD_LINE_position(0,0);
		 LCD_Write_String("READY STATE");
		 if (Interrupt_Flag==0)
		 BLUE_LED_ON();
	
	 return state_error;
 }
 /*
 * Description:Ignition Algorithm of the system
 * input: void
 * return: Error State
 */
  ERROR_STATE Ignition_Task(void){
	  ERROR_STATE state_error = SUCCESS;
	  Interrupt_Flag=0;
	  if (Previous_State!=IGNITION){
		  LCD_Clear();
	  }
	  else {
		  /* Do Nothing*/
	  }
	   LCD_LINE_position(0,0);
	  LCD_Write_String("IGNITION STATE");
	  timer0_deinit();
	  OVF_Counter=0;
	  BLUE_LED_ON();
	  Previous_State=IGNITION;
	  return state_error;
  }
 /*
 * Description:Algorithm to check the Potentiometer Reading
 * input: void
 * return: Error State
 */
ERROR_STATE Check_State(){
	
	ERROR_STATE state_error = SUCCESS;
	UINT16_t reading;
	state_error=VR1_Read(&reading);
	if (state_error == SUCCESS)
	{
		if (reading>=RANGE_BOUNADRY_1 && reading<RANGE_BOUNADRY_2)
		{
			Current_State=OFF_State;
		} 
		else if (reading>=RANGE_BOUNADRY_2 && reading <RANGE_BOUNDARY_3)
		{
			Current_State=READY_state;
		}
		else if (reading>RANGE_BOUNDARY_3)
		{
			Current_State=IGNITION;
		} 
		else
	    {
			state_error=FAIL;
		}
			
	}
	else 
	{
		state_error=FAIL;
	} 
	
	return state_error;
}

ISR(VECTOR(11)){

	if (OVF_Counter==NB_OF_OVERFLOWS_IN_TIMOUT){
		Current_State=OFF_State;
		BLUE_LED_OFF();
		OVF_Counter=0;
		Interrupt_Flag=true;
		
	}
		OVF_Counter++;

}

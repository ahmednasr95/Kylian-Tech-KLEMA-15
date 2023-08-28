/*
 *  TINER0_Interface.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#include "TIMER0_Private.h"

 /*
 * Description: function to initialize the Timer0
 * input: nothing
 * return: Error State
 */
void timer0_init(){
/*NORMAL OVF*/
TCCR0 = 0x85;
/*OVF interrupt*/
TIMSK = 0X01;
/*TO GENERATE 100 ms*/
TCNT0 = 76;
Set_Global_INT(ON);
}
 /*
 * Description: function to deinitialize timer0
 * input: nothing
 * return: Error State
 */
void timer0_deinit(){
	
	TCCR0=0;
	Set_Global_INT(OFF);
	}

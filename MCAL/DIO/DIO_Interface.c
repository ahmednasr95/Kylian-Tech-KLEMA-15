/*
 *  DIO_Interface.c
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#include "DIO_Private.h"

 /*
 * Description: Function to Set direction of the pin
 * input: port & pin & direction
 * return: Error State
 */
ERROR_STATE DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_State state)
{
	ERROR_STATE state_error = SUCCESS;
	switch (state)
	{
		case DIO_INPUT:
		switch(port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD, pin);
			break;
			default:
			state_error = FAIL;
			break;
		}
		break;
		case DIO_OUTPUT:
		switch(port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD, pin);
			break;
			default:
			state_error = FAIL;
			break;
		}
		break;
	}
	return state_error;
}
 /*
 * Description: Function to Set the value of the pin
 * input: port & pin & value
 * return: Error State
 */
ERROR_STATE DIO_SetPin_Value(DIO_Port port, DIO_Pin pin, DIO_Status status)
{
ERROR_STATE state_error = SUCCESS;
	switch (status)
	{
		case DIO_LOW:
		switch(port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD, pin);
			break;
			default:
			state_error = FAIL;
			break;
		}
		break;
		case DIO_HIGH:
		switch(port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
			default:
			state_error = FAIL;
			break;
		}
		break;
	}
	return state_error;
}
 /*
 * Description: Function to toggel the pin value
 * input: port & pin
 * return: Error State
 */
ERROR_STATE DIO_TglPin_Value(DIO_Port port, DIO_Pin pin)
{
ERROR_STATE state_error = SUCCESS;
	switch(port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD, pin);
		break;
		default:
		state_error = FAIL;
		break;
	}
	return state_error;
}
 /*
 * Description: Function to get the value of the pin
 * input: port & pin & pointer to store the value
 * return: Error State
 */
ERROR_STATE DIO_GetPin_Value(DIO_Port port, DIO_Pin pin,UINT8_t* pin_value)
{
ERROR_STATE state_error = SUCCESS;
	switch (port)
	{
		case DIO_PORTA:
		*pin_value = GET_BIT(PINA, pin);
		break;
		case DIO_PORTB:
		*pin_value = GET_BIT(PINB, pin);
		break;
		case DIO_PORTC:
		*pin_value = GET_BIT(PINC, pin);
		break;
		case DIO_PORTD:
		*pin_value = GET_BIT(PIND, pin);
		break;
		default:
		state_error = FAIL;
		break;
	}
	return state_error;
}
 /*
 * Description: Function to Set pull up on the pin
 * input: port & pin
 * return: Error State
 */
ERROR_STATE DIO_SetPin_PULLUP(DIO_Port port, DIO_Pin pin)
{
ERROR_STATE state_error = SUCCESS;
	switch(port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD, pin);
		break;
		default:
		state_error = FAIL;
		break;
	}
	return state_error;
}

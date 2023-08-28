/*
 *  DIO_Address.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#ifndef DIO_ADDRESS_H_
#define DIO_ADDRESS_H_
/************************************************************/
// PORT REGISTER:
/************************************************************/
#define SREG *((volatile UINT8_t*)0x5F)


// PORT A REGISTER:
#define PORTA *((volatile UINT8_t*)0x3B)
#define DDRA *((volatile UINT8_t*)0x3A)
#define PINA *((volatile UINT8_t*)0x39)

// PORT B REGISTER:
#define PORTB *((volatile UINT8_t*)0x38)
#define DDRB *((volatile UINT8_t*)0x37)
#define PINB *((volatile UINT8_t*)0x36)

// PORT C REGISTER:
#define PORTC *((volatile UINT8_t*)0x35)
#define DDRC *((volatile UINT8_t*)0x34)
#define PINC *((volatile UINT8_t*)0x33)

// PORT D REGISTER:
#define PORTD *((volatile UINT8_t*)0x32)
#define DDRD *((volatile UINT8_t*)0x31)
#define PIND *((volatile UINT8_t*)0x30)



#endif /* DIO_ADDRESS_H_ */

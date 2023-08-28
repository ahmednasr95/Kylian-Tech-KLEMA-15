/*
 *  ADC_Address.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */


#ifndef ADC_ADDRESS_H_
#define ADC_ADDRESS_H_

#define ADMUX	*((volatile UINT8_t*)0x27)
#define ADCSRA	*((volatile UINT8_t*)0x26)
#define ADCH	*((volatile UINT8_t*)0x25)
#define ADCL	*((volatile UINT8_t*)0x24)
#define SFIOR	*((volatile UINT8_t*)0x50)

/* SFIOR */
#define PSR10   0
#define PSR2    1
#define PUD     2
#define ACME    3
#define ADTS0   5
#define ADTS1   6
#define ADTS2   7

/* ADCSRA */
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADPS2   2
#define ADPS1   1
#define ADPS0   0

/* ADMUX */
#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define MUX4    4
#define MUX3    3
#define MUX2    2
#define MUX1    1
#define MUX0    0

#endif /* ADC_ADDRESS_H_ */
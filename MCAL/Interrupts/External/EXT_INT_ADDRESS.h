/*
 *  EXT_INT_ADDRESS.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#ifndef EXT_INT_ADDRESS_H_
#define EXT_INT_ADDRESS_H_

#define GICR *((volatile UINT8_t*)0x5B)
#define MCUCR *((volatile UINT8_t*)0x55)

#define GIFR *((volatile UINT8_t*)0x5A)
#define INTF2   5
#define INTF0   6
#define INTF1   7


#define IVCE    0
#define IVSEL   1
#define INT2    5
#define INT0    6
#define INT1    7

#endif /* EXT_INT_ADDRESS_H_ */
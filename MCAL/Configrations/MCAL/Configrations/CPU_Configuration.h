
#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU
#define F_CPU 16000000

//#include <avr/io.h>
#include <util/delay.h>
#include "avr/interrupt.h"

#include "STD_Types.h"
#include "BIT_MATH.h"

#include "DIO_Private.h"
#include "DIO_Address.h"
#include "EXT_INT_Private.h"

#endif /* CPU_CONFIGURATION_H_ */

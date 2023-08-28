
#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU
#define F_CPU 16000000

#include <util/delay.h>

#include "STD_Types.h"
#include "BIT_MATH.h"

#include "DIO_Private.h"
#include "DIO_Address.h"

#include "ADC_Private.h"
#include "ADC_Address.h"

#include "EXT_INT_Private.h"
#include "EXT_INT_ADDRESS.h"

#include "TIMER0_Private.h"
#include "TIMER0_ADDRESS.h"


#endif /* CPU_CONFIGURATION_H_ */

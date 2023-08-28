/*
 *  Potentiometer_Private.h
 *
 *  Created: 27/8/2023 11 AM
 *  Author: Azza & Seif & Ali &Ahmed
 */

#ifndef POTENTIOMETER_PRIVATE_H_
#define POTENTIOMETER_PRIVATE_H_

#include "CPU_Configuration.h"

#define VR1_PIN		ADC_PIN0

ERROR_STATE VR1_init(void);
ERROR_STATE VR1_Read(UINT16_t* POT_value);

#endif /* POTENTIOMETER_PRIVATE_H_ */
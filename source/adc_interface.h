/*
 * adc_interface.h
 *
 *  Created on: 27 dic. 2023
 *      Author: PLANTIUM
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/* Include ********************************************************************/
#include "include/types.h"

/* Enums **********************************************************************/
/* Defines ********************************************************************/
/* Typedefs *******************************************************************/
typedef enum
{
    // Internal ADC
	ADC_IFACE_V_BATT,
	ADC_IFACE_V_CAP,
	ADC_IFACE_V_PCB_TEMP,
	ADC_IFACE_V_MOTOR_CURRENT,
    ADC_IFACE_V_EXT_VSREF,
    ADC_IFACE_V_INT_VSREF,
	ADC_IFACE_V_GYRO_TEMP_Q,
	ADC_IFACE_V_GYRO_TEMP_R,
	ADC_IFACE_V_GYRO_TEMP_P,
	ADC_IFACE_V_WHEEL_ANGLE,
	ADC_IFACE_V_DISENGAGE_ANALOG_VALUE,
	ADC_IFACE_V_0_6,
	ADC_IFACE_V_0_7,
    ADC_IFACE_HB_A_CURRENT,
    ADC_IFACE_HB_B_CURRENT,
    // ADC 3244
	ADC_IFACE_ACC_X,
	ADC_IFACE_ACC_Y,
	ADC_IFACE_ACC_Z,
	ADC_IFACE_GYR_X,
	ADC_IFACE_GYR_Y,
	ADC_IFACE_GYR_Z,
	ADC_IFACE_V_REF_3V3
} ADC_IFACE_MEASUREMENT;

void        ADC_Iface_Init (void);
real_T      ADC_Iface_Get (ADC_IFACE_MEASUREMENT id);

#endif /* ADC_INTERFACE_H_ */

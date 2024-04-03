/*
 * adc_interface.c
 *
 *  Created on: 27 dic. 2023
 *      Author: PLANTIUM
 */

#include <adc_interface.h>
#include <adc.h>

static bool initialized = false;

/* Prototypes *****************************************************************/
/* Functions ******************************************************************/

/******************************************************************************/
void ADC_Iface_Init (void)
{
    if (initialized)
        return;

    Init_ADC(1,0);
    Init_ADC(1,9);

    ADC_Start(1);

    initialized = true;
}

real_T ADC_Iface_Get (uint8_t id)
{
    real_T ret;

    switch(id) {
        // Internal ADC
        case ADC_IFACE_V_BATT:
        	ret = ADC_Get(1, ADC_IFACE_V_BATT);
        break;
        case ADC_IFACE_V_CAP:
        	ret = ADC_Get(1, ADC_IFACE_V_CAP);
        break;
        case ADC_IFACE_V_PCB_TEMP:
        	ret = ADC_Get(1, ADC_IFACE_V_PCB_TEMP);
        break;
        case ADC_IFACE_V_MOTOR_CURRENT:
        	ret = ADC_Get(1, ADC_IFACE_V_MOTOR_CURRENT);
        break;

        case ADC_IFACE_V_GYRO_TEMP_Q:
        //case ADC_IFACE_V_EXT_VSREF:
        	ret = ADC_Get(1, ADC_IFACE_V_GYRO_TEMP_Q);
        break;
        case ADC_IFACE_V_GYRO_TEMP_R:
        //case ADC_IFACE_V_INT_VSREF:
        	ret = ADC_Get(1, ADC_IFACE_V_GYRO_TEMP_R);
        break;
        case ADC_IFACE_V_GYRO_TEMP_P:
        	ret = ADC_Get(1, ADC_IFACE_V_GYRO_TEMP_P);
        break;
        case ADC_IFACE_V_WHEEL_ANGLE:
            ret = ADC_Get(1, ADC_IFACE_V_WHEEL_ANGLE);
        break;
        case ADC_IFACE_V_DISENGAGE_ANALOG_VALUE:
        	ret = ADC_Get(1, ADC_IFACE_V_DISENGAGE_ANALOG_VALUE);
        break;/*
        // ADC 3244
        case ADC_IFACE_ACC_X:
            //ret = ADC8344_Get()[2];
        break;
        case ADC_IFACE_ACC_Y:
            //ret = ADC8344_Get()[1];
        break;
        case ADC_IFACE_ACC_Z:
            //ret = ADC8344_Get()[0];
        break;
        case ADC_IFACE_GYR_X:
            //ret = ADC8344_Get()[4];
        break;
        case ADC_IFACE_GYR_Y:
            //ret = ADC8344_Get()[5];
        break;
        case ADC_IFACE_GYR_Z:
            //ret = ADC8344_Get()[3];
        break;
        case ADC_IFACE_V_REF_3V3:
            if (CSTEER_GetBoardVersion() == BOARD_VERSION_1_1) {
              	  ret = ADC8344_Get()[7];
            } else {
              	  ret = 3.3;
            }
        break;*/
        default:
            ret = 0.0;
        break;
    }

	return (ret);
}

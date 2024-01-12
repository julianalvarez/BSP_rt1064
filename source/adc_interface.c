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

real_T ADC_Iface_Get (ADC_IFACE_MEASUREMENT id)
{
    real_T ret;

    switch(id) {
        // Internal ADC
        case ADC_IFACE_V_BATT:
            //ret = ADC_Iface_GetAnalogInput(2, 1);
        break;
        case ADC_IFACE_V_CAP:
            //ret = ADC_Iface_GetAnalogInput(2, 0);
        break;
        case ADC_IFACE_V_PCB_TEMP:
            //ret = ADC_Iface_GetAnalogInput(1, 5);
        break;
        case ADC_IFACE_V_MOTOR_CURRENT:
            //ret = ADC_Iface_GetAnalogInput(1, 6);
        break;

        case ADC_IFACE_V_GYRO_TEMP_Q:
        case ADC_IFACE_V_EXT_VSREF:
           // ret = ADC_Iface_GetAnalogInput(1, 2);
        break;
        case ADC_IFACE_V_GYRO_TEMP_R:
        case ADC_IFACE_V_INT_VSREF:
           // ret = ADC_Iface_GetAnalogInput(1, 3);
        break;
        case ADC_IFACE_V_GYRO_TEMP_P:
            //ret = ADC_Iface_GetAnalogInput(1, 7);
        break;
        case ADC_IFACE_V_WHEEL_ANGLE:
            ret = ADC_Get(1, 9);
        break;
        case ADC_IFACE_V_DISENGAGE_ANALOG_VALUE:
           // ret = ADC_Iface_GetAnalogInput(0, 5);
        break;
        case ADC_IFACE_V_0_6:
            //ret = ADC_Iface_GetAnalogInput(0, 6);
        break;
        case ADC_IFACE_V_0_7:
            //ret = ADC_Iface_GetAnalogInput(0, 7);
        break;
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

        break;
        default:
            ret = 0.0;
        break;
    }

	return (ret);
}

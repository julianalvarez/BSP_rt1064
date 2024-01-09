/*
 * adc_interface.c
 *
 *  Created on: 27 dic. 2023
 *      Author: PLANTIUM
 */

#include <adc_interface.h>

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

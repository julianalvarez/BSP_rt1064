/*
 * board_csteer.c
 *
 *  Created on: 9 ene. 2024
 *      Author: PLANTIUM
 */

/* Include ********************************************************************/
#include <board_csteer.h>

/******************************************************************************/
double CSTEER_GetWheelAngleVoltage (void)
{
	double				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_WHEEL_ANGLE);

	return (dfTemp);
}

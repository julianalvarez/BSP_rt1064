/* Include ********************************************************************/
#include <board_csteer.h>

/******************************************************************************/
real_T CSTEER_GetBatteryVoltage (void)
{
	real_T				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_BATT);

	/* Resistor relationships */
	dfTemp *= (1.0 + 97600.0/5110.0);

	return (dfTemp);
}

/******************************************************************************/
real_T CSTEER_GetCapacitorVoltage (void)
{
	real_T				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_CAP);

	/* Resistor relationships */
	dfTemp *= (1.0 + 97600.0/5110.0);

	return (dfTemp);
}

/******************************************************************************/
/* Return  PCB Temperature in °C									     	  */
/******************************************************************************/
real_T CSTEER_GetPcbTemperature (void)
{
	real_T				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_PCB_TEMP);

	/* From datasheet Vout = 6.25mV * Temp °C + 424mV */
	dfTemp -= 0.424;
	dfTemp /= 0.00625;

	return (dfTemp);
}

/******************************************************************************/
real_T CSTEER_GetWheelAngleVoltage (void)
{
	real_T				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_WHEEL_ANGLE);

	return (dfTemp);
}

/******************************************************************************/
real_T CSTEER_GetDisengageAnalogValue (void)
{
	real_T				dfTemp;

	/* Convert to Voltage */
	dfTemp = ADC_Iface_Get(ADC_IFACE_V_DISENGAGE_ANALOG_VALUE);

	return (dfTemp);
}

/******************************************************************************/

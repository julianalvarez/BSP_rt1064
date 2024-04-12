/* Include ********************************************************************/
#include <board_csteer.h>
#include <adc_interface.h>

/******************************************************************************/
int32_t CSTEER_Init (void)
{
	int32_t				dwRetCode;

//	dwRetCode = ERR_NO;
//
//	/* Power Supply */
//	ptLOCK_PWR_SUPPLY = GPIO_Init (	2U, /* Port */
//									8U, /* Pin */
//									1U, /* Output Type */
//									PAD_TYPE_NOPU_NOPD);
//	GPIO_Set (ptLOCK_PWR_SUPPLY, 1);
//
//
//	/* DIGITAL OUTPUTS */
//    ptLED	 = GPIO_Init (	2U, /* Port */
//							9U, /* Pin */
//							1U, /* Output Type */
//							PAD_TYPE_NOPU_NOPD);
//
//	/* Enable Inputs */
//	pt5VSENS = GPIO_Init (	5U, /* Port */
//							2U, /* Pin */
//							1U, /* Output Type */
//							PAD_TYPE_NOPU_NOPD);
//	GPIO_Set (pt5VSENS, 1);
//
//	ptSTAND_BY = GPIO_Init (	5U, /* Port */
//								14U, /* Pin */
//								1U, /* Output Type */
//								PAD_TYPE_NOPU_NOPD);
//
//	GPIO_Set (ptSTAND_BY, 0);
//
//	ptD_0_31 = GPIO_Init (0U, 31U, 0U, PAD_TYPE_NOPU_NOPD);

  ADC_Iface_Init();

//  _CheckBoardVersion();

  return dwRetCode;
}

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

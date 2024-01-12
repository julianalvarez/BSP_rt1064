/*
 * hb.c
 *
 *  Created on: 10 ene. 2024
 *      Author: PLANTIUM
 */

#include "hb.h"
#include "pwm.h"

void HB_Init (uint32_t uFreq)
{
    HB_SetPwmFreq (uFreq);
}
void HB_SetPwmFreq (uint32_t uFreq)
{
    Init_PWM();
    PWM_Start(1);

}
uint32_t HB_GetPwmFreq (void)
{
	return -1;
}
void HB_Set (int32_t sSetPoint, uint8_t bActive)
{
	if (bActive) {
		PWM_Set(0,1,sSetPoint);

	} else {
		PWM_Set(0,1,0);

	}
}

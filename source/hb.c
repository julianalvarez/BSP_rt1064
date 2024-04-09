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
	Init_PWM();
    HB_SetPwmFreq (uFreq);
}
void HB_SetPwmFreq (uint32_t uFreq)
{
	PWM_Stop(1);
	Init_PWM();
    PWM_SetupPwm(BOARD_PWM1_PERIPHERAL, BOARD_PWM1_SM0, BOARD_PWM1_SM0_pwm_function_config, 1U, kPWM_SignedCenterAligned, uFreq, BOARD_PWM1_SM0_SM_CLK_SOURCE_FREQ_HZ);
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

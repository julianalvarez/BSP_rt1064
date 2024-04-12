/*
 * hb.h
 *
 *  Created on: 10 ene. 2024
 *      Author: PLANTIUM
 */

#ifndef HB_H_
#define HB_H_

/* Include ********************************************************************/
#include <stdint.h>

void			HB_Init (uint32_t uFreq);
void			HB_SetPwmFreq (uint32_t uFreq);
uint32_t		HB_GetPwmFreq (void);
void			HB_Set (int32_t sSetPoint, uint8_t bActive);

#endif /* HB_H_ */

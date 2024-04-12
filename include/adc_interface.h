#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/* Include ********************************************************************/
#include "types.h"
#include "peripherals.h"
/* Enums **********************************************************************/
/* Defines ********************************************************************/
/* Typedefs *******************************************************************/


void        ADC_Iface_Init (void);
real_T      ADC_Iface_Get (uint8_t id);

#endif /* ADC_INTERFACE_H_ */

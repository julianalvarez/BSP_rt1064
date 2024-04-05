
#ifndef BOARD_CSTEER_H_
#define BOARD_CSTEER_H_

/* Include ********************************************************************/
//#include "include/types.h"
#include <adc_interface.h>

/* Enums **********************************************************************/
typedef enum {
    BOARD_VERSION_UNKNOWN,
	BOARD_VERSION_1_1,
	BOARD_VERSION_1_2,
} BOARD_VERSION_E;

/* Defines ********************************************************************/
#define EEPROM_ADDRESS_GPS_DATA				(144U)
#define EEPROM_DIMENSION_GPS_DATA			(50U)

#define EEPROM_ADDRESS_CALIB_DATA				    (768U)
#define EEPROM_MAX_DIMENSION_CALIB_DATA			EEPROM_DIM_CALIB_DATA_NEW_HB
//#define EEPROM_MAX_DIMENSION_CALIB_DATA		(48U+72U+16U+16+336+1U)
//#define DEMO_FLAG 								0

#define EEPROM_DIM_CALIB_DATA_OLD_HB                (48U+72U+16U+1U)
#define EEPROM_DIM_CALIB_DATA_NEW_HB                (48U+72U+16U+16U+1U)

//#define EEPROM_ADDRESS_IMU_CALIB_DATA       (EEPROM_ADDRESS_CALIB_DATA + EEPROM_MAX_DIMENSION_CALIB_DATA) // 921
#define EEPROM_ADDRESS_IMU_CALIB_DATA       (1000U)

/* Flash */
#define FLASH_BLOCK_SIZE                          (65536U)
/* Typedefs *******************************************************************/

/* Externs ********************************************************************/

/* Prototypes *****************************************************************/
real_T 			CSTEER_GetWheelAngleVoltage (void);
real_T          CSTEER_GetBatteryVoltage (void);
real_T          CSTEER_GetCapacitorVoltage (void);
real_T          CSTEER_GetPcbTemperature (void);
real_T          CSTEER_GetDisengageAnalogValue (void);

#endif /* BOARD_CSTEER_H_ */

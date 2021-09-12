/* @file : sensor_de_luz.h
 * @author  Jefrey Alvarez
 * @version 0.0.000
 * @date    27/08/2021
 */

#ifndef IOT_SDK_PERIPHERALS_SENSOR_DE_LUZ_H_
#define IOT_SDK_PERIPHERALS_SENSOR_DE_LUZ_H_
/*******************************************************************************
 * incude
 ******************************************************************************/
#include "peripherals.h"
/*******************************************************************************
 * Define
 ******************************************************************************/
#define SENSOR_DE_LUZ_ADC16_BASE          ADC0
#define SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP 0U
#define SENSOR_DE_LUZ_ADC16_USER_CHANNEL  23U /* PTE30, ADC0_SE23 */
/*******************************************************************************
 * Public prototypes
 ******************************************************************************/
float SensorDeLuzObtenerDatoADC(void);

#endif /* IOT_SDK_PERIPHERALS_SENSOR_DE_LUZ_H_ */

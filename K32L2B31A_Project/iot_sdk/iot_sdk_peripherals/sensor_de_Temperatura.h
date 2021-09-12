/*
 * sensor_tem.h
 *
 *  Created on: 11/09/2021
 *      Author: JEFF
 */

#ifndef IOT_SDK_TEMP_SENSOR_DE_TEMPERATURA_H_
#define IOT_SDK_TEMP_SENSOR_DE_TEMPERATURA_H_

#include "peripherals.h"

#define SENSOR_DE_TEMPERATURA_ADC16    ADC0
#define SENSOR_DE_TEMPERATURA_ADC16_CHANNEL_GROUP 0U
#define SENSOR_DE_TEMPERATURA_ADC16_USER_CHANNEL 26U

float SensorDeTemperaturaObtenerDatoADC(void);

#endif /* IOT_SDK_TEMP_SENSOR_DE_TEMPERATURA_H_ */

/* @file : sensor_de_luz.c
 * @author  Jefrey Alvarez
 * @version 0.0.000
 * @date    9/09/2021
 * v0.0.000 Proyecto base creado usando MCUXpresso
 *
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "sensor_de_luz.h"
/*******************************************************************************
 Define
 ******************************************************************************/
#define SENSOR_DE_LUZ_ADC16    ADC0
#define SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP 0U
#define SENSOR_DE_LUZ_ADC16_USER_CHANNEL 3U
/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/
void SensorDeLuzIniciarCaptura(void);
void SensorDeLuzEsperarResultado(void);
/*******************************************************************************
 * Private Source Code
 ******************************************************************************/
void sensorDeLuzIniciarCaptura(){
	ADC16_SetChannelConfig(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP, &ADC0_channelsConfig[0]);// DA INICIO
}
void sensorDeLuzEsperarResultado(){
	while(0U == (kADC16_ChannelConversionDoneFlag & ADC16_GetChannelStatusFlags(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP)))
	{
	}
}
/*******************************************************************************
 * Public Source Code
 ******************************************************************************/
float SensorDeLuzObtenerDatoADC(){
	float resultadoADC;
	sensorDeLuzIniciarCaptura();
	sensorDeLuzEsperarResultado();
	resultadoADC=ADC16_GetChannelConversionValue(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP);
	resultadoADC=(2*(3.3-(3.3/resultadoADC)))*100;
	return (resultadoADC);
}

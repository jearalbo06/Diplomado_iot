/* @file : sensor_tem.c
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
#include "sensor_de_Temperatura.h"
/*******************************************************************************
 * Define
 ******************************************************************************/
#define SENSOR_DE_TEMPERATURA_ADC16_BASE    ADC0
#define SENSOR_DE_TEMPERATURA_ADC16_CHANNEL_GROUP 0U
#define SENSOR_DE_TEMPERATURA_ADC16_USER_CHANNEL 26U
/*******************************************************************************
 * private
 ******************************************************************************/
void SensorDeTemperaturaIniciarCaptura(void);
void SensorDeTemperaturaEsperarResultado(void);
/*******************************************************************************
 * Private Source Code
 ******************************************************************************/
void SensorDeTemperaturaIniciarCaptura(void){
	ADC16_SetChannelConfig(SENSOR_DE_TEMPERATURA_ADC16_BASE, SENSOR_DE_TEMPERATURA_ADC16_CHANNEL_GROUP, &ADC0_channelsConfig[1]);// DA INICIO
}
void SensorDeTemperaturaEsperarResultado(void){
	while(0U == (kADC16_ChannelConversionDoneFlag & ADC16_GetChannelStatusFlags(SENSOR_DE_TEMPERATURA_ADC16_BASE, SENSOR_DE_TEMPERATURA_ADC16_CHANNEL_GROUP)))
	{
	}
}
/*******************************************************************************
 * Public Source Code
 ******************************************************************************/
float SensorDeTemperaturaObtenerDatoADC(){
	float resultadoADC;
	SensorDeTemperaturaIniciarCaptura();
	SensorDeTemperaturaEsperarResultado();
	resultadoADC=ADC16_GetChannelConversionValue(SENSOR_DE_TEMPERATURA_ADC16_BASE, SENSOR_DE_TEMPERATURA_ADC16_CHANNEL_GROUP);
    resultadoADC=(3*resultadoADC)/4095;
	resultadoADC = (resultadoADC*90)/3.3;

	return (resultadoADC);
}

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_adc16.h"
#include "fsl_lptmr.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Alias for ADC0 peripheral */
#define ADC0_PERIPHERAL ADC0
/* Definition of custom name for ADC0 configuration #0 (channel 3, control group 0) */
#define ADC0_SENSOR_DE_LUZ 0U
/* Definition of custom name for ADC0 configuration #1 (channel 26, control group 0) */
#define ADC0_SENSOR_DE_TEMPERATURA 1U
/* ADC0 interrupt vector ID (number). */
#define ADC0_IRQN ADC0_IRQn
/* ADC0 interrupt handler identifier. */
#define ADC0_IRQHANDLER ADC0_IRQHandler
/* Channel 0 (SE.3) conversion control group. */
#define ADC0_CH0_CONTROL_GROUP 0
/* Channel 1 (SE.26) conversion control group. */
#define ADC0_CH1_CONTROL_GROUP 0
/* BOARD_InitPeripherals defines for LPTMR0 */
/* Definition of peripheral ID */
#define LPTMR0_PERIPHERAL LPTMR0
/* Definition of the clock source frequency */
#define LPTMR0_CLK_FREQ 1000UL
/* Definition of the prescaled clock source frequency */
#define LPTMR0_INPUT_FREQ 1000UL
/* Definition of the timer period in us */
#define LPTMR0_USEC_COUNT 2000UL
/* Definition of the timer period in number of ticks */
#define LPTMR0_TICKS 2UL
/* LPTMR0 interrupt vector ID (number). */
#define LPTMR0_IRQN LPTMR0_IRQn
/* LPTMR0 interrupt handler identifier. */
#define LPTMR0_IRQHANDLER LPTMR0_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern adc16_channel_config_t ADC0_channelsConfig[2];
extern const adc16_config_t ADC0_config;
extern const adc16_channel_mux_mode_t ADC0_muxMode;
extern const lptmr_config_t LPTMR0_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */

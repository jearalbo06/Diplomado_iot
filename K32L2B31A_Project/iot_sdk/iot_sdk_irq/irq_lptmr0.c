/* @file : irq_lptmr0.c
 * @author  Jefrey Alvarez
 * @version 0.0.000
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "irq_lptmr0.h"
/*******************************************************************************
 * local vars
 ******************************************************************************/
volatile uint32_t lptmr0_irq_counter=0;
volatile uint32_t flag_led_rojo_irq_counter=0;
volatile uint32_t flag_boton1_presionado=0;
volatile uint32_t flag_boton2_presionado=0;
/*******************************************************************************
 * Private Source Code
 ******************************************************************************/
void LPTMR0_IRQHANDLER(void){
	uint32_t intStatus;
	intStatus = LPTMR_GetStatusFlags(LPTMR0_PERIPHERAL);
	LPTMR_ClearStatusFlags(LPTMR0_PERIPHERAL, intStatus);
	lptmr0_irq_counter++;
	flag_led_rojo_irq_counter +=5;
#if defined __CORTEX_M && (__CORTEX_M == 4U)
__DSB();
#endif
}

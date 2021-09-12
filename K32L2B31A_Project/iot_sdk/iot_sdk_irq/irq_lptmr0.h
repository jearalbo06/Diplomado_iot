/* @file : irq_lptmr0.h
 * @author  Jefrey Alvarez
 * @version 0.0.000
 *
 *
 */

#ifndef IOT_SDK_IRQ_IRQ_LPTMR0_H_
#define IOT_SDK_IRQ_IRQ_LPTMR0_H_

#include "peripherals.h"

extern volatile uint32_t lptmr0_irq_counter;
extern volatile uint32_t flag_led_rojo_irq_counter;
extern volatile uint32_t flag_boton1_presionado;
extern volatile uint32_t flag_boton2_presionado;

#endif /* IOT_SDK_IRQ_IRQ_LPTMR0_H_ */

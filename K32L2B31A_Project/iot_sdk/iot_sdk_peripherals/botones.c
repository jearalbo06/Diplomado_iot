/* @file : botones.c
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
#include "botones.h"
#include "fsl_gpio.h"
/*******************************************************************************
 * Public source code
 ******************************************************************************/
bool boton1LeerEstado(){
uint32_t valor_pin = GPIO_PinRead(GPIOC,3);
return (bool) valor_pin;

}

bool boton2LeerEstado(){
uint32_t valor_pin = GPIO_PinRead(GPIOA,4);

 return (bool) valor_pin;

}

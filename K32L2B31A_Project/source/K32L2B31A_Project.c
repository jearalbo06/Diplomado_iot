/* @file : K32L2B31A_Project.c
 * @author  Jefrey Alvarez
 * @version 0.0.000
 * @date    27/08/2021
 * @brief   Funcion principal main
 * @details
 * v0.0.000 Proyecto base creado usando MCUXpresso
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "K32L2B31A.h"
#include "fsl_debug_console.h"
#include "leds.h"
#include "sensor_de_luz.h"
#include "irq_lptmr0.h"
#include "botones.h"
#include "sensor_de_Temperatura.h"


unsigned int test_global_var=100;
float dato_float=3.1416;

int main(void){
	float sensor_de_luz, sensor_de_Temperatura;
    bool boton1_activado, boton2_activado;


    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    #ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
    #endif

//     PRINTF("Hello World\r\n");
//    printf("test_global_var:%d\r\n",test_global_var);
//    printf("dato_float:%g\r\n",dato_float);
    /* Start counting */
    LPTMR_StartTimer(LPTMR0);

/* TRABAJO A REALIZAR
/
*/


while(1) {
  if(lptmr0_irq_counter != 0){
    lptmr0_irq_counter = 0;
    boton1_activado = !boton1LeerEstado();
    boton2_activado = !boton2LeerEstado();
  if(boton1_activado && !flag_boton1_presionado){
    flag_boton1_presionado = 1;
    sensor_de_luz = SensorDeLuzObtenerDatoADC();
    printf("luminosidad en lux: %.3f\r\n", sensor_de_luz);
  }
  if(!boton1_activado){
    flag_boton1_presionado = 0;
  }
  if(boton2_activado && !flag_boton2_presionado){
    flag_boton2_presionado = 1;
    sensor_de_Temperatura = SensorDeTemperaturaObtenerDatoADC();
    printf("Temperatura en grados: %.3f\r\n", sensor_de_Temperatura);
  }
  if(!boton2_activado){
    flag_boton2_presionado = 0;
  }
}
  if(flag_led_rojo_irq_counter == 1000){
	  flag_led_rojo_irq_counter = 0;
    toggle_led_rojo();
  }
}

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Local vars
 ******************************************************************************/

/*******************************************************************************
 * Private Source Code
 ******************************************************************************/

/*******************************************************************************
 * INICIO CODIGO LED "para activar eliminar del codigo los ///"
 ******************************************************************************/

/*!
 * @brief Genera bloqueo de microcontrolador por tiempo fijo
 *
 *
 *  tiempo de retardo
 */
///void delay_block(void){
///    uint32_t i;
///    for(i=0;i<0xFFFFA;i++){
///    }
///}

///int main(void) {
///    volatile static int i = 0 ;/* Force the counter to be placed into memory. */

/* Init board hardware. */
///    BOARD_InitBootPins();
///    BOARD_InitBootClocks();
///    BOARD_InitBootPeripherals();
///#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
///    BOARD_InitDebugConsole();
///#endif

/* Enter an infinite loop, just incrementing a counter. */

/*--------------------------------------------------------------------------------*/
/*!
 * @brief funcion para Encender y apagar el led rojo
 *
 */
///    unsigned char controlar_led_rojo(){
///        encender_led_rojo();
///        delay_block();
///        apagar_led_rojo();
///        delay_block();

///        return 0;
///    }

//--------------------------------------------------------------------------------*/

/*!
 * @brief funcion para Encender y apagar el led verde
 *
 */
///    unsigned char controlar_led_verde(){
///        encender_led_verde();
///        delay_block();
///        apagar_led_verde();
///        delay_block();

///        return 0;
///    }
// --------------------------------------------------------------------------------*/
// funcion para las veces que enciende cada leds

///   while(1) {
///       i++ ;

///        for(i=0;i<10;i++){
///            controlar_led_rojo();
///            }
///        for(i=0;i<10;i++){
///            controlar_led_verde();
///            }
///   }
    return 0 ;
}

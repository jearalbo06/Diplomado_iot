/*! @file : leds.h
* @author Jefrey Alvarez
* @version 1.0.0
* @date 1/09/2021
* @brief Driver para controlar LEDs de tarjeta FRDM-K32L2B3
* @details
*
*/
#ifndef IOT_SDK_PERIPHERALS_LEDS_H_
#define IOT_SDK_PERIPHERALS_LEDS_H_
/*******************************************************************************
* Includes
******************************************************************************/


/*!
* @addtogroup PERIPHERALS
* @{
*/
/*!
* @addtogroup LEDS
* @{
*/
/*******************************************************************************
* Public Definitions
******************************************************************************/

/*******************************************************************************
* External vars
******************************************************************************/

/*******************************************************************************
* Public vars
******************************************************************************/

/*******************************************************************************
* Public Prototypes
******************************************************************************/

/*--------------------------------------------------------------------------------*/

/*!
* @brief Enciende led verde de tarjeta FRDM-K32L2B3
*
*/
//void encender_led_verde();

/*--------------------------------------------------------------------------------*/

/*!
* @brief Apaga led verde de tarjeta FRDM-K32L2B3
*
*/
//void apagar_led_verde();

/*--------------------------------------------------------------------------------*/

/*!
* @brief Enciende led rojo de tarjeta FRDM-K32L2B3
*
*/
//void encender_led_rojo();

/*--------------------------------------------------------------------------------*/

/*!
* @brief Enciende led verde de tarjeta FRDM-K32L2B3
*
*/
//void apagar_led_rojo();

/*--------------------------------------------------------------------------------*/

/** @} */ // end of X LEDS
/** @} */ // end of X PERIPHERALS

void encender_led_verde();
void apagar_led_verde();

void toggle_led_rojo();
/*!
 * @brief invierte estado del led rojo de tarjeta FRDM-K32L2B3
 *
 */

void toggle_led_rojo();

#endif /* IOT_SDK_PERIPHERALS_LEDS_H_ */

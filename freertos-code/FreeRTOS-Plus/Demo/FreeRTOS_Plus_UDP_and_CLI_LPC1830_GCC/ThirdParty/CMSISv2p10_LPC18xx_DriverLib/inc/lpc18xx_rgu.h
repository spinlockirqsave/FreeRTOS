/**********************************************************************
* $Id$		lpc18xx_rgu.h		2011-06-02
*//**
* @file		lpc18xx_rgu.h
* @brief	Contains all macro definitions and function prototypes
* 			support for RGU firmware library on LPC18xx
* @version	1.0
* @date		02. June. 2011
* @author	NXP MCU SW Application Team
*
* Copyright(C) 2011, NXP Semiconductor
* All rights reserved.
*
***********************************************************************
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* products. This software is supplied "AS IS" without any warranties.
* NXP Semiconductors assumes no responsibility or liability for the
* use of the software, conveys no license or title under any patent,
* copyright, or mask work right to the product. NXP Semiconductors
* reserves the right to make changes in the software without
* notification. NXP Semiconductors also make no representation or
* warranty that such application will be suitable for the specified
* use without further testing or modification.
**********************************************************************/

/* Peripheral group ----------------------------------------------------------- */
/** @defgroup RGU RGU (Reset Generation Unit)
 * @ingroup LPC1800CMSIS_FwLib_Drivers
 * @{
 */

#ifndef LPC18XX_RGU_H_
#define LPC18XX_RGU_H_

/* Includes ------------------------------------------------------------------- */
#include "LPC18xx.h"
#include "lpc_types.h"


#ifdef __cplusplus
extern "C"
{
#endif
/* Public Types --------------------------------------------------------------- */
/** @defgroup RGU_Public_Types RGU Public Types
 * @{
 */

/*********************************************************************//**
 * @brief RGU enumeration
 **********************************************************************/
/** @brief Out Reset Signal Generated by RGU */
typedef enum
{
	RGU_SIG_CORE  = 0,					/**< Core reset signal 			*/
	RGU_SIG_PERIPH,						/**< Peripheral reset signal	*/
	RGU_SIG_MASTER,						/**< Master reset signal		*/
	RGU_SIG_WWDT = 4,					/**< WWDT reset signal			*/
	RGU_SIG_CREG,						/**< CREG reset signal			*/
	RGU_SIG_BUS = 8,					/**< Bus reset signal			*/
	RGU_SIG_SCU,						/**< SCU reset signal			*/
	RGU_SIG_PINMUX,						/**< Pin mux reset signal		*/
	RGU_SIG_M3 = 13,					/**< Cortex-M3 reset signal		*/
	RGU_SIG_LCD = 16,					/**< LCD reset signal			*/
	RGU_SIG_USB0,						/**< USB0 reset signal			*/
	RGU_SIG_USB1,						/**< USB1 reset signal			*/
	RGU_SIG_DMA,						/**< DMA reset signal			*/
	RGU_SIG_SDIO,						/**< SDIO reset signal			*/
	RGU_SIG_EMC,						/**< EMC reset signal			*/
	RGU_SIG_ETHERNET,					/**< Ethernet reset signal		*/
	RGU_SIG_AES,						/**< AES reset signal			*/
	RGU_SIG_GPIO = 28,					/**< GPIO reset signal			*/
	RGU_SIG_TIMER0 = 32,				/**< TIMER 0 reset signal		*/
	RGU_SIG_TIMER1,						/**< TIMER 1 reset signal		*/
	RGU_SIG_TIMER2,						/**< TIMER 2 reset signal		*/
	RGU_SIG_TIMER3,						/**< TIMER 3 reset signal		*/
	RGU_SIG_RITIMER,					/**< RIT timer reset signal		*/
	RGU_SIG_SCT,						/**< SCT reset signal			*/
	RGU_SIG_MOTOCONPWM,					/**< Motor control reset signal	*/
	RGU_SIG_QEI,						/**< QEI reset signal			*/
	RGU_SIG_ADC0,						/**< ADC0 reset signal			*/
	RGU_SIG_ADC1,						/**< ADC1 reset signal			*/
	RGU_SIG_DAC,						/**< DAC reset signal			*/
	RGU_SIG_UART0 = 44,					/**< UART0 reset signal			*/
	RGU_SIG_UART1,						/**< UART1 reset signal			*/
	RGU_SIG_UART2,						/**< UART2 reset signal			*/
	RGU_SIG_UART3,						/**< UART3 reset signal			*/
	RGU_SIG_I2C0,						/**< I2C0 reset signal			*/
	RGU_SIG_I2C1,						/**< I2C1 reset signal			*/
	RGU_SIG_SSP0,						/**< SSP0 reset signal			*/
	RGU_SIG_SSP1,						/**< SSP1 reset signal			*/
	RGU_SIG_I2S,						/**< I2S reset signal			*/
	RGU_SIG_SPIFI,						/**< SPIFI reset signal			*/
	RGU_SIG_CAN = 55					/**< CAN reset signal			*/
}RGU_SIG;

/** @brief Reset Cause Source */
typedef enum {
	RGU_SRC_NONE,						/**< No source				*/
	RGU_SRC_SOFT,						/**< Software reset source	*/
	RGU_SRC_EXT,						/**< External reset source	*/
	RGU_SRC_CORE,						/**< Core reset source		*/
	RGU_SRC_PERIPH,						/**< Peripheral reset source*/
	RGU_SRC_MASTER,						/**< Master reset source	*/
	RGU_SRC_BOD,						/**< BOD reset source		*/
	RGU_SRC_WWDT						/**< WWDT reset source		*/
}RGU_SRC;
/**
 * @}
 */


/* Public Functions ----------------------------------------------------------- */
/** @defgroup RGU_Public_Functions RGU Public Functions
 * @{
 */
/* RGU peripheral control function ----------------*/
void RGU_SoftReset(RGU_SIG ResetSignal);
RGU_SRC RGU_GetSource(RGU_SIG ResetSignal);
Bool RGU_GetSignalStatus(RGU_SIG ResetSignal);

/**
 * @}
 */


#ifdef __cplusplus
}
#endif


#endif /* LPC18XX_RGU_H_ */

/**
 * @}
 */

/* --------------------------------- End Of File ------------------------------ */

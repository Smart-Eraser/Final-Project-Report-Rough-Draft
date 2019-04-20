/*****************************************************************************
* File Name: 	 main.c
*
* Version: 		1.0
*
* Description:	Uses SPI and I2C communication to receive image form Arducam,
* 				process the image to find edges, translate detected edges to
* 				coordinates for stepper motors, and	sends coordinate information
* 				to stepper motor modules on a white board.
*
*    			This code was modified from a template provided by Cypress
*    			Semiconductor Corporation -> TFTemWin example
*
* Author:		Chris Quesada
*******************************************************************************/

#ifndef SOURCE_SPIMASTER_H_
#define SOURCE_SPIMASTER_H_

#include "cy_pdl.h"
#include "cycfg.h"

/***************************************
*                Macros
****************************************/
#define MASTER_ERROR_MASK  (CY_SCB_SPI_SLAVE_TRANSFER_ERR  | CY_SCB_SPI_TRANSFER_OVERFLOW    | \
                            CY_SCB_SPI_TRANSFER_UNDERFLOW)

/* -------------Transmit and receive packet information------------------ */
#define NUMBER_OF_SPI_ELEMENTS		(1UL)
#define SIZE_OF_SPI_PACKET			(NUMBER_OF_SPI_ELEMENTS * SIZE_OF_SPI_ELEMENT)
#define SIZE_OF_SPI_ELEMENT			(16UL)

/* ------Delay between successive SPI Master command transmissions------- */
#define CMD_DELAY					(1000)
#define TIMEOUT_1_MS        		(1000ul)

/***************************************
*         Function Prototypes
****************************************/
uint32 initSPIMaster(void);
uint16_t Write_SPI(uint16_t txBuffer);


#endif /* SOURCE_SPIMASTER_H_ */

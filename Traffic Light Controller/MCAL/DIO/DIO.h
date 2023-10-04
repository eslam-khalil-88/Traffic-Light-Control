/*
 * DIO.h
 *
 *  Created on: May 20, 2017
 *      Author: Eslam Khalil
 */

#ifndef DIO_H_
 #define DIO_H_

#include "../Utilites/stdtypes.h"
#include "../Utilites/registers.h"



#define SET_BIT(PORT,BIT) PORT |= (1<<BIT)
#define CLR_BIT(PORT,BIT) PORT &= ~(1<<BIT)

#define INPUT 0
#define OUTPUT 1

#define A 1
#define B 2
#define C 3
#define D 4

void DIO_SET_PINDIRECTION(uint8_t port, uint8_t pin, uint8_t direction);
void DIO_WRITE_PIN(uint8_t port,uint8_t pin,uint8_t pvalue);
uint8_t DIO_READ_PIN(uint8_t port , uint8_t pin);

void DIO_SET_PORTDIRECTION(uint8_t port,uint8_t direction);
uint8_t DIO_READ_PORT(uint8_t port);
void DIO_WRITE_PORT(uint8_t port , uint8_t data);



#endif /* DIO_H_ */

/*
 * ExtINT.h
 *
 * Created: 11/09/2022 11:22:59
 *  Author: Eslam
 */ 


#ifndef EXTINT_H_
#define EXTINT_H_

//#include <avr/io.h>
#include "../Utilites/registers.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/Timer0/Timer0.h"


#define EDGE 0
#define LEVEL 1




void ExtINT_Init(uint8_t INT_PIN , uint8_t TYPE);
void ExtINT_ENABLE(uint8_t INT_PIN);
void ExtINT_DISABLE(uint8_t INT_PIN);
uint8_t GET_EXTINT_STATUS(void);
void CLEAR_EXTINT_STATUS(void);

#endif /* EXTINT_H_ */
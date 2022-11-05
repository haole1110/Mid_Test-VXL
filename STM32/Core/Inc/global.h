/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

#define INIT			0
#define BASE			1
#define RESET_			2
#define INCREASE		3
#define DECREASE		4

#define AUTO			11
#define MODE_2			12
#define MODE_3			13
#define MODE_4			14

#define INCR_RED 		21
#define INCR_YELLOW 	22
#define INCR_GREEN 		23

extern int status;
extern int clock_buffer[4];
extern int index_7seg;
extern int traffic_count[3];
extern int count[3];
extern int temp;


void display7segment(int num);
void decrease_1sec();

#endif /* INC_GLOBAL_H_ */

/*
 * software_timer.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag; //Blinky
extern int timer2_flag; // Auto_Mode
extern int timer3_flag; //Count_Down
extern int timer4_flag;

void setTimer1(int duration);

void setTimer2(int duration);

void setTimer3(int duration);

void setTimer4(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

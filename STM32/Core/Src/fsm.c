/*
 * fsm.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#include "fsm.h"

void fsm_auto_run(){
	switch(status){
	case INIT:
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		display7segment(temp);
		status = BASE;
		break;
	case AUTO:
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		display7segment(temp);
		if (timer3_flag == 1 && temp > 0){
			temp--;
			status = AUTO;
			setTimer3(1000);
		}

		if (isButton1Pressed() == 1){
			status = RESET_;
			if (temp < 0) temp = 0;
		}
		if (isButton2Pressed() == 1){
			status = INCREASE;
			if (temp < 0) temp = 0;
		}
		if (isButton3Pressed() == 1){
			status = DECREASE;
			if (temp < 0) temp = 0;
		}
		break;
	default:
		break;
	}
}

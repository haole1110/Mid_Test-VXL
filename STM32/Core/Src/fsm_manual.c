/*
 * fsm_manual.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */


#include "fsm_manual.h"

void fsm_simple_button_run(){
	switch (status){
	case BASE:
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		display7segment(temp);

		if (timer2_flag == 1){
			status = AUTO;
		}
		if (isButton1Pressed()){
			status = RESET_;
			setTimer3(1000);
		}
		if (isButton2Pressed()){
			status = INCREASE;
			setTimer3(1000);
		}
		if (isButton3Pressed()){
			status = DECREASE;
			setTimer3(1000);
		}
		break;
	case RESET_:
		setTimer2(10000);
		temp = 0;
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		display7segment(temp);
		status = BASE;
		break;
	case INCREASE:
		setTimer2(10000);
		temp++;
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		if (temp >= 10) temp = 0;
		display7segment(temp);
		status = BASE;

		break;
	case DECREASE:
		setTimer2(10000);
		temp--;
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer1(1000);
		}
		if (temp <= -1) temp = 9;
		display7segment(temp);
		status = BASE;

		break;
	default:
		break;
	}
}

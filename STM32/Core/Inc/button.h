/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE 1
#define PRESSED_STATE 0

int isButton1Pressed(); //RESET BUTTON
void getKeyInput1();

int isButton2Pressed(); //INCREASE BUTTON
void getKeyInput2();

int isButton3Pressed(); //DECREASE BUTTON
void getKeyInput3();

#endif /* INC_BUTTON_H_ */

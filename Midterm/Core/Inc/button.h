/*
 * button.h
 *
 *  Created on: 31 Oct 2022
 *      Author: duvan
 */
#include "main.h"

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE 1
#define PRESSED_STATE 0

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;
void getkeyInput();

int isButtonPressed();
#endif /* INC_BUTTON_H_ */

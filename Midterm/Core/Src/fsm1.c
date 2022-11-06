/*
 * fsm1.c
 *
 *  Created on: Nov 5, 2022
 *      Author: duvan
 */
#include "fsm1.h"

int counter = 9 ;

void fsm_simple_buttons_run(){
	if(isButtonPressed(0)==1){
		counter = 0;
	}
	if(isButtonPressed(1)==1){
		counter++;
		if(counter>9) counter=0;
	}
	if(isButtonPressed(2)==1){
		counter--;
		if(counter<0) counter=9;
	}
	display7SEG(counter);
}

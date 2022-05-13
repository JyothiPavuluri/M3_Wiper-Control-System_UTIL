/**
 * @file   : main.c
 * @author : jyothi pavuluri
 * @Date   : 11/5/2022
 * @Generated in STMCUBE IDE
 * @Project Title: Wiper Control System
 * @copyright Copyright (c) 2022
 */


#include "own_drivers_and_func.h"
#include <stdio.h>

static void ignition_ON(void);			   // here this function will Turn on all RED LED's 
static void status(void);		   // here this function will Turn off all the LED's at once
static void door_status(void);  // here this function will on and off LED's with a certain delay (in anti-clockwise)
static void ignition_OFF(void); // here this function will on RED LED's 

static void ignition_ON(void) 
{
	
	led_ON(LED_RED);
	
}

static void ignition_OFF(void) 
{
           
	led_OFF(LED_RED);
}

static void car_battery_info(void) 
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}

static void door_status(void) // This function is done by Varun S with help of Nyalam Praveenraj
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}


int main(void)


	led_init_all();
	button_init();

	while (1)
	{
		volatile int btncnt = btn_press();
		if (btncnt == 1)
		{ // comparing the no of counts of button
			ignition_ON();
			btncnt = 0;
		}
		else if (btncnt == 2)
		{ // comparing the no of counts of button
			ignition_Off();
			btncnt = 0;
		}
		else if (btncnt == 3)
		{ // comparing the no of counts of button
			car_battery_info();

			btncnt = 0;
		}
		else if (btncnt == 4)
		{ // comparing the no of counts of button
			door_status();
			btncnt = 0;
		}
	}
}

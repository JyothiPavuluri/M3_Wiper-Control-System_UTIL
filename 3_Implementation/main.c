/**
 * @file   : main.c
 * @author : jyothi pavuluri
 * @Date   : 11/5/2022
 * @Generated in STMCUBE IDE
 * @Project Title: Wiper Control System
 * @copyright Copyright (c) 2022
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "own_drivers_and_func.h"
#include <stdio.h>

static void ignition_ON(void);			   // here this function will Turn ON all RED LED's 
static void wiper_cycle1(void);		   // here this function will Turn ON all the LED's at 1HZ
static void wiper_cycle2(void);            // here this function will Turn ON all LEDs with 4HZ
static void wiper_cycle3(void);          // here this function will Turn ON all LEDs with 8HZ
static void wiper_cycle4(void);                // here this function will Turn OFF LEDs glow pattern
static void ignition_OFF(void);          // here this function will OFF RED LED's 

static void ignition_ON(void) 
{
	
	led_ON(LED_RED);
	
}

static void ignition_OFF(void) 
{
           
	led_OFF(LED_RED);
}

static void wiper_cycle1(void) 
{

	led_on(LED_BLUE);
	my_delay_ms(1000);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(1000);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(1000);
	led_off(LED_ORANGE);
	
}

static void  wiper_cycle2(void) 
{
        led_on(LED_BLUE);
	my_delay_ms(250);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(250);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(250);
	led_off(LED_ORANGE);
	
}
 static void wiper_cycle3(void) 
{

	led_on(LED_BLUE);
	my_delay_ms(125);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(125);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(125);
	led_off(LED_ORANGE);
	
	
}
static void wiper_cycle4(void) 
{

             led_OFF(LED_BLUE);
	     led_OFF(LED_GREEN);
	     led_OFF(LED_ORANGE);
}

int main(void)

{
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
			 wiper_cycle1();
			 btncnt = 0;
		}
		else if (btncnt == 4)
		{ // comparing the no of counts of button
		         wiper_cycle2();
			 btncnt = 0;
		}
		else if (btncnt == 5)
		{ // comparing the no of counts of button
		         wiper_cycle3();
			 btncnt = 0;
		}
		else if (btncnt == 6)
		{ // comparing the no of counts of button
		         wiper_cycle4();
			 btncnt = 0;
			
		}
	}

}

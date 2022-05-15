/*PROJECT :- WIPER CONTROL SYSTEM*/

//DEFINING all  Required pins

#define GPIOD_BASE_ADDR 0x40020C00	//Defining Base address for GPIO//for LESDs
#define GPIOD_ODR_OFFSET 0x14       //LED are outputs so we are using ODR //Defining Offset Address for LEDs
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)

//Adding Base address and offset address for LEDs

#define RCC_BASE_ADDR 0x40023800 //Defining RCC Address
#define RCC_AHB1ENR_OFFSET 0x30   //Defining Offset for RCC
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

//Adding Base address and offset address for RCC

#define GPIOA_BASE_ADDR 0x40020000  //Defining Base address for switch
#define GPIOA_IDR_OFFSET 0x10 //switch is input so we are using IDR //Defining Offset of Switch
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)

//Adding Base address and offset address for SWITCH

#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)

//Adding Base address and offset address To clear Previous for LEDs

#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)
//Adding Base address and offset address to clear Previous Switch settings


//STARTING of Main PROGRAM
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

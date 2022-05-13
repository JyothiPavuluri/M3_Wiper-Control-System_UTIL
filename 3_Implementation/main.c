/**
 * authors Shirisha , Deepika , Ravi , Navin
 * Date : 12/3/2022
 * Generated in STMCUBE IDE
 * Project Title: Bicom system
 */

#include "MyStm32f407xx.h"
#define BTN_PRESSED ENABLE
#define BTN_RELEASED DISABLE
const int delay_ms = 100000;
void delay(uint32_t tdelay) // used to create time delay  by Shirisha
{
	for(uint32_t i=0;i<((tdelay * delay_ms)/2);i++)
{
}

}


int main(void)
{
    GPIO_Handle_t GpiogLed,GpiooLed,GpiorLed,GpiobLed,GpioBtn;
    GpiogLed.pGPIOx = GPIOD;                                  // Initialise pin for green led by Shirisha
    GpiogLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GpiogLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpiogLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
    GpiogLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GpiogLed);

        GpiooLed.pGPIOx = GPIOD;                             // Initialise pin for orange led by Deepika
    	GpiooLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
        GpiooLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
        GpiooLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
        GpiooLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
        GPIO_PeriClockControl(GPIOD, ENABLE);
        GPIO_Init(&GpiooLed);

            GpiorLed.pGPIOx = GPIOD;                         // Initialise pin for red led by Ravi
            GpiorLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
            GpiorLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
            GpiorLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
            GpiorLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
            GPIO_PeriClockControl(GPIOD, ENABLE);
            GPIO_Init(&GpiorLed);

                GpiobLed.pGPIOx = GPIOD;                      // Initialise pin for blue led by Navin
            	GpiobLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
                GpiobLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
                GpiobLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
                GpiobLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
                GPIO_PeriClockControl(GPIOD, ENABLE);
                GPIO_Init(&GpiobLed);




    GpioBtn.pGPIOx = GPIOA;  // Initialise pin for blue switch by Navin
    GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
    GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&GpioBtn);

int btn_count(void) // to calculate Button count by Deepika
{
int count =0;
int n = 5;
while(n!=0)
{
 n--;
 if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)==BTN_RELEASED)
{
delay(5);
count++;
if(count>4)
{
count=0;
}
}
}
return count;
}
void window_status(void) // for window status by Shirisha
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
}

void car_battinfo(void) // for car battery info by Deepika
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
}

void door_status(void) // for door status by Ravi
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
}

void alarm_status(void) // for alarm status by Navin
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
}
while (1) // for calling the functions by Navin
{
     volatile int bcnt = btn_count();
     if(bcnt == 1)
     {
    	window_status();
    	bcnt = 0;
     }

       if(bcnt == 2)
         {
    	   alarm_status();
        	bcnt = 0;
         }
        if(bcnt == 3)
         {
        	car_battinfo();
        	bcnt = 0;
         }
          if(bcnt == 4)
          {
        	  door_status();
        	bcnt = 0;
          }
}
}

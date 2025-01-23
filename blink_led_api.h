#ifndef __BLINK_LED_H__ 
#define __BLINK_LED_H__

#include <time.h>

#define LED_OFF                 0x0000 
#define LED_ON                  0x0001
#define LED_BLINK               0x0002 //The LED can be in blinking state and in LED_OFF state of LED_ON state at the same time
#define LED_LEVEL_FLAG          0x0001


/*We define a structure for one led but we can use
to define several blinking leds (portability 
of structures)*/

/* blinkInterval is the 
time during which the led is OFF 
timeOn is the time during which the led is ON */
struct led {
    int gpio; // pin connected to the led
    unsigned long timeOff; // ms, the interval between 2 events: led off and led on
    unsigned long timeOn; // ms, time during which the led is on
    uint16_t flags, status;
};

/*To create a LED structure and set 
the parameters of the LED*/
extern int* led_set(int pin, unsigned long chosenTimeOn, unsigned long chosenTimeOff);


/*Return 0 or 1 according to the 
status of the led if it's ON or OFF*/
extern int led_get(struct chosenLed*);

/*Updating the state of the led after
the defined timeOff or timeOn
This function is called when the LED is in blinking
state no matter if the LED is ON or OFF
*/
extern void led_update(struct chosenLed*);


/*Put the LED in blinking mode if it is not 
or remove the LED from blinking mode if it
is in blinking state*/
extern void led_change_blink_state()


#endif __BLINK_LED_H__ 

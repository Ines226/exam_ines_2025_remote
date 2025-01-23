#ifndef __NEOPIXELS_H__ 
#define __NEOPIXELS_H__

#include <time.h>
#include <neopixels.h>

#define STRING_ON               0x0000 
#define STRING_OFF              0x0001
#define DISPLAY_ENABLE          0x0002 
#define STRING_LEVEL_FLAG       0x0001


/*We define a RGB structure to ease any changes
of values and to ease the reading for
the neopixel function*/
struct rgb_pixel {
    int red; // red value
    int green; // green value
    int blue; // blue value 
    unsigned long delay; //ms, delay during which the pixel should be ON
};


/*A function to read a rgb structure and display
it thanks to the neopixel function which should be 
used inside*/
extern void rgb_neopixel_display(struct rgbPixel*);

/*A function to change the delay between two "displaying" events
with different set of rgb values*/
extern void rgb_neopixel_set_udelay(unsigned long ms);

/*A function to change the the display state
If DISPLAY_ENABLE is true put on false. If DISPLAY_ENABLE
is false put on true.*/
extern void rgb_neopixel_change_display_enable();

#endif __NEOPIXELS_H__ 

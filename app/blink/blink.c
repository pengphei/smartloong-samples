#include <stdio.h>
#include "util_gpio.h"

static int gpio_blink = 0;

int main()
{
    int gpio_state = 0;
    printf("start blinking!\n");
    gpio_ctrl_init();
    gpio_ctrl_export(gpio_blink);
    gpio_ctrl_enable_out(gpio_blink);

    while(1)
    {
        gpio_ctrl_set_out(gpio_blink, gpio_state);
        gpio_state = (0 == gpio_state)?1:0;
        sleep(2);
    }

    gpio_ctrl_fini();
    return 0;
}

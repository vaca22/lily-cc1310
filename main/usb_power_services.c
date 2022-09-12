//
// Created by vaca on 9/11/22.
//

#include "usb_power_services.h"
#include <driver/gpio.h>
#define GPIO_OUTPUT_IO_USB_POWER    4

#define GPIO_OUTPUT_PIN_SEL_USB_POWER  ((1ULL<<GPIO_OUTPUT_IO_USB_POWER ))

void setup_usb_power() {
    gpio_config_t io_conf = {};
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL_USB_POWER;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);
    gpio_set_level(GPIO_OUTPUT_IO_USB_POWER , 1);
}
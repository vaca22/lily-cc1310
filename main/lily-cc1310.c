#include <stdio.h>
#include "usb_power_services.h"
#include "uart_services.h"

void app_main(void)
{
    setup_usb_power();
    init_uart();
    while (1){
        write_uart("fuck\n",5);
        vTaskDelay(100);
    }
}

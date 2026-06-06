#include <stdio.h>

#include "constants.h"
#include "esp_log.h"
#include "pin_assign.h"

static const char *TAG = "gpio num";
void app_main(void)
{
    //assign gpio pins to each SPI pin
   display_pins_t phil; 
   pin_assign(&phil); //assign SPI labels to each gpio pin
   ESP_LOGI(TAG, "MOSI = %d\n", phil.mosi);
   ESP_LOGI(TAG, "SCK = %d\n", phil.sck);
   ESP_LOGI(TAG, "RES = %d\n", phil.res);
   ESP_LOGI(TAG, "DC = %d\n", phil.dc);
   ESP_LOGI(TAG, "CS = %d\n", phil.cs);
}

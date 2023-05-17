#include <Arduino.h>
#include "pico/cyw43_arch.h"

void setup() {
   Serial.begin(115200);
     if (cyw43_arch_init()) 
        printf("Wi-Fi init failed");
}
   
#define CYW43_WL_GPIO_LED_PIN 0

void loop() {
  // Serial.print("Hello World!\r\n"); 
  // delay(1000);
  Serial.print("ON\n");
  cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
  delay(1000);
  printf("OFF\n");
  cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
  sleep_ms(1000);
}
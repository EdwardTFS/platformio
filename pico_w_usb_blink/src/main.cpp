#include <Arduino.h>
#include "pico/cyw43_arch.h"


void setup() {
  Serial.begin(115200);
  if (cyw43_arch_init()) 
    Serial.println("Wi-Fi init failed");
}
   
#define CYW43_WL_GPIO_LED_PIN 0
#define DELAY 1000

void loop() {
  //Serial.print("ON\r\n");
  Serial.println("ON");
  cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
  sleep_ms(DELAY);
  //Serial.print("ON\r\n");
  Serial.println("OFF");
  cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
  sleep_ms(DELAY);
}
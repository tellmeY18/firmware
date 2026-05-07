#pragma once

#define HW_VENDOR meshtastic_HardwareModel_HELTEC_V2_1

#define USE_SX1276

// I2C - OLED
#define I2C_SDA      4
#define I2C_SCL      15
#define RESET_OLED   16
#define VEXT_ENABLE  21  // active LOW, powers the OLED

// SPI - LoRa SX1276
#define LORA_SCK     5
#define LORA_MISO    19
#define LORA_MOSI    27
#define LORA_CS      18
#define LORA_RESET   14
#define LORA_DIO0    26
#define LORA_DIO1    33
#define LORA_DIO2    32

// Board
#define BUTTON_PIN   0
#define BATTERY_PIN  35
#define ADC_CHANNEL  ADC1_GPIO35_CHANNEL

// Display
#define USE_SSD1306

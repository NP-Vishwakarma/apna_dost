#pragma once

// OLED Hardware Pins (GP6 = SDA, GP7 = SCL)
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

// OLED display settings
#define OLED_DRIVER_ENABLE
#define OLED_MAX_COLUMNS 128
#define OLED_MAX_ROWS 32
#define OLED_TIMEOUT 30000 

// RGB and Encoder settings
#define WS2812_DI_PIN GP16
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LED_COUNT 2
#define RGBLIGHT_LIMIT_VAL 165 // 65% Brightness Limit (255 * 0.65 = 165)
#define ENCODER_RESOLUTION 4

// Hue change
#define RGBLIGHT_HUE_STEP 2  // Default 10 make less to increase more

// USB settings
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    "ApnaDost"
#define PRODUCT         "apna_dost"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
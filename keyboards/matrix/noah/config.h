/**
 * config.h
 *
 */

#pragma once

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// i2c setting
#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
#define PAL_MODE_STM32_ALTERNATE_OPENDRAIN (PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN)

// rgb matrix setting
#define IS31FL3731_I2C_ADDRESS_1 IS31FL3731_I2C_ADDRESS_GND
#define IS31FL3731_I2C_ADDRESS_2 IS31FL3731_I2C_ADDRESS_SDA
#define RGB_MATRIX_LED_COUNT 72

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// pico_cmake_set PICO_PLATFORM=rp2350

#ifndef _BOARDS_TWIBBY_RP2050_H
#define _BOARDS_TWIBBY_RP2050_H

#define TWIBBY_RP2050_BOARD

// Allow GPIO 2 and 25
#define GPIO_VALID_PINS_BASE 0b00000010000000000000000000000100

#define PICO_DEFAULT_PIO_USB_DP_PIN 26

// --- RP2350 VARIANT ---
#define PICO_RP2350A 1

// --- LED ---
#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN 25
#endif

// --- FLASH ---

#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

// pico_cmake_set_default PICO_FLASH_SIZE_BYTES = (2 * 1024 * 1024)
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024)
#endif

#ifndef PICO_RP2350_A2_SUPPORTED
#define PICO_RP2350_A2_SUPPORTED 1
#endif

#endif

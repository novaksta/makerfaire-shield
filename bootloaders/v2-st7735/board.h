#ifndef BOARD_H
#define BOARD_H

#define OSC_FREQ 8
#define USBDEVICESTRING "Arcade F401"
#define USBMFGSTRING "Contoso Ltd."
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)

#define BL_F412 1

#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    513675505, 539130489, // magic
    62, 100,  // used entries, total entries
    4, 0x18, // PIN_BTN_A = PB8
    5, 0x19, // PIN_BTN_B = PB9
    32, 0x5, // PIN_DISPLAY_SCK = PA5
    33, 0x6, // PIN_DISPLAY_MISO = PA6
    34, 0x7, // PIN_DISPLAY_MOSI = PA7
    35, 0x14, // PIN_DISPLAY_CS = generic B4, board to GND
    36, 0x3e, // PIN_DISPLAY_DC = alternate -- PD14
    37, 0xa0, // DISPLAY_WIDTH = 160
    38, 0x80, // DISPLAY_HEIGHT = 128
    39, 0X80, // DISPLAY_CFG0 = 0x80 ST7735(160x128 GreenTAB) was 0x020180
    40, 0x603, // DISPLAY_CFG1 = 0x603
    41, 0x16, // DISPLAY_CFG2 = 0x16
    43, 0x3f, // PIN_DISPLAY_RST = Pd15
    47, 0x20, // PIN_BTN_LEFT = PC0
    48, 0x23, // PIN_BTN_RIGHT = PC3
    49, 0x21, // PIN_BTN_UP = PC1
    50, 0x3, // PIN_BTN_DOWN = PA3
    51, 0x2d, // PIN_BTN_MENU = PC13
    204, 0x100000, // FLASH_BYTES = 0x100000
    205, 0x40000, // RAM_BYTES = 0x40000
    208, 0x59ea3b60, // BOOTLOADER_BOARD_ID = 0x59ea3b60
    209, 0x57755a57, // UF2_FAMILY = STM32F401
    210, 0x10, // PINS_PORT_SIZE = PA_16
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif

#endif /* BOARD_H */


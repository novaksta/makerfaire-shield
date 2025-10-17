#ifndef BOARD_H
#define BOARD_H

#define OSC_FREQ 8
#define USBDEVICESTRING "Arcade F401"
#define USBMFGSTRING "Contoso Ltd."
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)


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
    35, 0x16, // PIN_DISPLAY_CS = PB6
    36, 0x9, // PIN_DISPLAY_DC = PA9
    37, 320,    // DISPLAY_WIDTH = 320
    38, 240,    // DISPLAY_HEIGHT = 240
    39, 0x08,   // DISPLAY_CFG0 = 0x08
    40, 0x0010ff,   // DISPLAY_CFG1 = 0x10ff
    41, 50,         // DISPLAY_CFG2 = 0x50
    78, 9341,   // DISPLAY_TYPE = ILI9341
    43, 0x27, // PIN_DISPLAY_RST = PC7
    47, 0x1, // PIN_BTN_LEFT = PA1
    48, 0x4, // PIN_BTN_RIGHT = PA4
    49, 0x10, // PIN_BTN_UP = PB0
    50, 0x0, // PIN_BTN_DOWN = PA0
    51, 0x2d, // PIN_BTN_MENU = PC13
    204, 0x80000, // FLASH_BYTES = 0x80000
    205, 0x18000, // RAM_BYTES = 0x18000
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

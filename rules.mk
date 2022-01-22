# MCU name
MCU = STM32F103
MCU_LDSCRIPT = STM32F103x8_0x08005800_bootloader
BOARD = STM32_F103_STM32DUINO
DFU_ARGS = -d 0483:df11 -a 0 -s 0x08005800
DFU_SUFFIX_ARGS = -v 0483 -p DF11
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306






















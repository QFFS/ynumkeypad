# ynumkeypad

![ynumkeypad](https://s3.bmp.ovh/imgs/2022/01/9fc75b675100e1dd.jpg)

A STM32F103 based numpad with a rotary encoder, and a 128x32 OLED display. 

* Keyboard Maintainer: [QFFS](https://github.com/QFFS)
* Hardware Supported: [PCB V1.0](https://oshwhub.com/lylyyhb/numkeyboard)
* Hardware Availability: taobao

Make default keymaps for this keyboard (after setting up your build environment):

    make ynumkeypad:default

Flashing default keymaps for this keyboard:

    make ynumkeypad:default:flash
    
Make via keymaps for this keyboard (after setting up your build environment):

    make ynumkeypad:via

Flashing via keymaps for this keyboard:

    make ynumkeypad:via:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

You can find bootloader at bootloader_hex folder, you should flash it to the mcu with stlink or jlink or dap-link etc. 

Enter the bootloader in followe way:
* **Keycode in layout**: Press the key mapped to `Enter`, then plug into usb.

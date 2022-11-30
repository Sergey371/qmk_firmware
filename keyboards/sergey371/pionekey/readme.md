# sergey371/pionekey

![sergey371/pionekey](imgur.com image replace me!)

Mini keyboard based on RP2040 controller with additional user button (GP24) and RGB LED (GP23, WS2812B).

* Keyboard Maintainer: [Sergey A. Kozlov](https://github.com/Sergey371)
* Hardware Supported: Raspberry Pi Pico like clone on RP2040
* Hardware Availability: AliExpress & etc.

Make example for this keyboard (after setting up your build environment):

    make sergey371/pionekey:default

For flashing for this keyboard need copy .uf2 file to flash disk on controller.


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

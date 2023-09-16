# handwired/illera16

![handwired/illera16](imgur.com image replace me!)

*"First Foray into Macro Pad Creation: This handwired keyboard represents my initial venture into the creation of macro pads, blending ideas and techniques from other passionate creators."*

* Keyboard Maintainer: [victor_illera](https://github.com/villeramassana)
* Hardware Supported: *Pro Micro*
* Hardware Availability: *aliexpress.com // amazon.com*

Make example for this keyboard (after setting up your build environment):

    make handwired/illera16:default

Flashing example for this keyboard:

    make handwired/illera16:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

# Macropad

The PCB used the following libs:

- https://github.com/perigoso/keyswitch-kicad-library
- https://github.com/gauntface/kicad-libraries

## Arduino

1. Install the Arduino IDE
    1. Fedora should use flathub to avoid [this issue](https://github.com/arduino/Arduino/issues/11150)
        ```
        flatpak remote-add --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo
        flatpak install flathub cc.arduino.arduinoide
        ```
1. Install the following libraries under `Tools > Manage Libraries`:
    - HID-Project
    - Adafruit GFX Library
    - Adafruit SSD1306
1. Install board in Arduino - [see Sparkfuns guide for pro micro](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/installing-mac--linux)
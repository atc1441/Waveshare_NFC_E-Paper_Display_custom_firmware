# Waveshare_NFC_E-Paper_Display_custom_firmware
A basic custom firmware to show a running example on the TN2115S2 SoC inside of the Passive NFC E-Paper Displays from Waveshare

https://www.waveshare.com/2.13inch-nfc-powered-e-paper.htm


This Repository is created together with this video: (Click on it to view)
https://youtu.be/wsSWYC06b_U

[![YoutubeVideo](https://img.youtube.com/vi/wsSWYC06b_U/0.jpg)](https://www.youtube.com/watch?v=wsSWYC06b_U)


To flash the custom firmware use Segger J-Flash Lite and use an Cortex-M0 as device
Open the Segger Commander and connect to it as well.
Enter: 
Write4 0x40000600 0x93a57b28
to enable the writing to flash and then click on Program Device inside the J-Flash Lite software, try it a few times if it fails


To Compile the custom firmware use a terminal to enter the "Custom_firmware" folder and enter make, you need to have MinGW installed (Tested on Windows)
Thanks and Credit to this Repo for the minimal Cortex-M0 basis: https://github.com/vfinotti/cortex-m0-blinky-c





General TN2115S2 Infos:

32KB Flash 0x00000000 - 0x00007fff = Can be written from 0x00 to 0xff

8KB RAM 0x20000000 - 0x20002000

2KB EEPROM 0x60000000 - 0x60000800 = Can be written from 0x00 to 0xff


To enable Memory writing:
0x40000600 = 0x93A57B28
to disable again = 0x0

# Olimexino-85 temperature and humidity monitor with OLED display (DHT22 sensor)

### Hardware list:
- [Olimexino-85BC](https://github.com/OLIMEX/OLIMEXINO-85) (ATTINY85-based Digispark clone)
- 128x32 I2C SSD1306 OLED display
- DHT22 humidity and temperature sensor

### Olimexino-85 board data conections:
- 0 - SDA OLED
- 2 - SCL OLED
- 4 - Signal DHT22

### Details
A simple sketch to display temperature and humidity readings on an OLED screen using the standard [TinyWireM](https://github.com/adafruit/TinyWireM), [Tiny4kOLED](https://github.com/datacute/Tiny4kOLED) and TinyDHT libraries. 

I had noise and other artifacts on my 128x32 OLED so had to change the display buffer in the TinyWireM.h library file to 30 (found the hint [here](https://github.com/OLIMEX/OLIMEXINO-85/blob/master/SOFTWARE/O85-examples/O85_MOD_LCD_1x9/O85_MOD_LCD_1x9.ino)):

``#define USI_BUF_SIZE 30 //!< bytes in message buffer``



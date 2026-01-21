# TFT_eSPI-SpotPear
Configuration for the Spotpear ESP32 S3 Development Board T Dongle S3 0.96inch display screen ST7735 LCD Display for use with the TFT_eSPI library

[https://spotpear.com/index/product/detail/id/1235.html](https://spotpear.com/index/product/detail/id/1235.html)

## How to use
1. Install the TFT_eSPI library using Arduino IDE
2. Go to the where the library is installed (Windows: `Documents/Arduino/libraries/TFT_eSPI`)
3. Download [Setup1000_spotpear_T.h](./Setup1000_spotpear_T.h) into User_Setups folder
4. Edit `User_Setup_Select.h` 
	- Add `#include <User_Setups/Setup1000_spotpear_T.h>`
	- Ensure `#include <User_Setup.h>` is **commented out**

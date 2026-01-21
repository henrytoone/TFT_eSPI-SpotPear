// Setup for Spotpear ESP32-S3 T-Dongle + ST7735 0.96" 80x160 IPS LCD
#define USER_SETUP_ID 1000

#define ST7735_DRIVER

// Display resolution
#define TFT_WIDTH   80
#define TFT_HEIGHT  160

// ST7735 variant - try this one first
#define ST7735_GREENTAB160x80
//#define ST7735_REDTAB160x80
//#define ST7735_GREENTAB
//#define ST7735_BLACKTAB

// Color order
#define TFT_RGB_ORDER TFT_BGR
//#define TFT_RGB_ORDER TFT_RGB

// Try uncommenting ONE of these if display stays blank:
//#define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF

// ===== ESP32-S3 PINOUT =====
#define TFT_MOSI   11    // TFT_SDA_PIN IO03
#define TFT_SCLK   10    // TFT_SCL_PIN IO05
#define TFT_CS     12    // TFT_CS_PIN  IO04
#define TFT_DC     13    // TFT_DC_PIN  IO02
#define TFT_RST    14    // TFT_RES_PIN IO01

// Backlight
//#define TFT_BL     38   // TFT_LED_PIN IO38
//#define TFT_BACKLIGHT_ON HIGH

// MISO not connected
#define TFT_MISO  -1

// ===== CRITICAL ESP32-S3 SPI SETTINGS =====
// ESP32-S3 needs explicit SPI port definition
// Use FSPI (SPI2) as it's more stable than HSPI
#define USE_HSPI_PORT

// More conservative SPI speed for stability
#define SPI_FREQUENCY  20000000  // 20MHz - more stable
#define SPI_READ_FREQUENCY  16000000

// Enable SPI transactions for ESP32-S3
#define SUPPORT_TRANSACTIONS

// ===== FONTS =====
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
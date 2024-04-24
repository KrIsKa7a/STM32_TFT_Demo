#ifndef _ST7735_CFG_H_
#define _ST7735_CFG_H_

#include "main.h"

extern SPI_HandleTypeDef hspi1;
#define ST7735_SPI_PORT hspi1

//#define ST7735_1_8_DEFAULT_ORIENTATION  // AliExpress/eBay 1.8" display, default orientation
//#define ST7735S_1_8_DEFAULT_ORIENTATION   // WaveShare ST7735S-based 1.8" display, default orientation
#define ST7735_1_44_DEFAULT_ORIENTATION   // 1.44" display, default orientation
//#define ST7735_MINI_DEFAULT_ORIENTATION   // mini 160x80 display (it's unlikely you want the default orientation)

#ifndef ST7735_RES_PIN
#define ST7735_RES_PIN 		GPIO_PIN_7
#endif

#ifndef ST7735_RES_PORT
#define ST7735_RES_PORT 	GPIOC
#endif

#ifndef ST7735_DC_PIN
#define ST7735_DC_PIN 		GPIO_PIN_9
#endif

#ifndef ST7735_DC_PORT
#define ST7735_DC_PORT 		GPIOA
#endif

#ifndef ST7735_CS_PIN
#define ST7735_CS_PIN 		GPIO_PIN_6
#endif

#ifndef ST7735_CS_PORT
#define ST7735_CS_PORT		GPIOB
#endif

// TODO: Add pin for backlight control

#endif /* _ST7735_CFG_H_ */

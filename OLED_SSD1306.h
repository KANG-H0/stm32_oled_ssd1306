#ifndef __OLED_SSD1306_H__
#define __OLED_SSD1306_H__

#ifdef __cplusplus
extern "C"{
#endif

#define USING_HARDWARE_I2C //使用硬件i2c
// #define USING_SOFTWARE_I2C //使用软件i2c

#ifdef USING_HARDWARE_I2C
#include "i2c.h"
#include "FontLib.h"
#endif
#ifdef USING_SOFTWARE_I2C
#include "software_i2c.h"
#include "FontLib.h"
#endif

// #define OLED_INVERSE_COLOR //显示颜色翻转反相

#define OLED_Addr 0x78 //OLED器件地址(bit0=1读，bit0=0写)
#define CmdReg 0x00    //表示写入的是指令
#define DataReg 0x40   //表示写入的是数据
#define OLED_Width 128 //OLED宽度128像素
#define OLED_High 64   //OLED高度64像素
#define Bright 0xFF    //亮(表示写入部分像素是亮的)
#define Dark 0x00      //暗(表示写入部分像素是暗的)
#define FontSize6x8 1  //选择字体尺寸6X8
#define FontSize8x16 2 //选择字体尺寸8X16

#define OLED_Delay_ms(__xms) HAL_Delay(__xms)

void OLED_Fill(uint8_t Fill_Data);
void OLED_LocalFill(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t LocalFillData);
void OLED_Init(void);
void OLED_ShowChar(uint8_t x, uint8_t y, uint8_t DisplayChar, uint8_t FontSize, uint8_t Color_Turn);
void OLED_ShowStr(uint8_t x, uint8_t y, uint8_t *DisplayStr, uint8_t FontSize, uint8_t Color_Turn);
void OLED_ShowCN(uint8_t x, uint8_t y, uint8_t Num, uint8_t Color_Turn);
void OLED_ShowNum20X40(uint8_t x, uint8_t y, uint8_t Num, uint8_t Color_Turn);
void OLED_ShowBMP(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t *BMP);

#ifdef __cplusplus
}
#endif

#endif //__OLED_SSD1306_H__

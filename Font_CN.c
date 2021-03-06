#include "FontLib.h"

/**--16*16汉字--**/
const unsigned char FontCN[][32] =
    {
        //标(0) 准(1) 洗(2) 快(3) 速(4) 单(5) 漂(6) 脱(7) 水(8)

        {0x10, 0x10, 0xD0, 0xFF, 0x90, 0x10, 0x20, 0x22, 0x22, 0x22, 0xE2, 0x22, 0x22, 0x22, 0x20, 0x00},
        {0x04, 0x03, 0x00, 0xFF, 0x00, 0x13, 0x0C, 0x03, 0x40, 0x80, 0x7F, 0x00, 0x01, 0x06, 0x18, 0x00}, /*"标",0*/
        /* (16 X 16 , 宋体 )*/

        {0x00, 0x02, 0x0C, 0xE0, 0x40, 0x20, 0xF8, 0x4F, 0x48, 0x49, 0xFE, 0x48, 0x48, 0x48, 0x08, 0x00},
        {0x04, 0x04, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x22, 0x22, 0x22, 0x3F, 0x22, 0x22, 0x22, 0x20, 0x00}, /*"准",1*/
        /* (16 X 16 , 宋体 )*/

        {0x10, 0x60, 0x02, 0x8C, 0x20, 0x90, 0x8E, 0x88, 0x88, 0xFF, 0x88, 0x88, 0x88, 0x88, 0x80, 0x00},
        {0x04, 0x04, 0x7E, 0x01, 0x80, 0x40, 0x30, 0x0F, 0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x70, 0x00}, /*"洗",2*/
        /* (16 X 16 , 宋体 )*/

        {0x00, 0xE0, 0x00, 0xFF, 0x10, 0x20, 0x08, 0x08, 0x08, 0xFF, 0x08, 0x08, 0xF8, 0x00, 0x00, 0x00},
        {0x01, 0x00, 0x00, 0xFF, 0x00, 0x81, 0x41, 0x31, 0x0D, 0x03, 0x0D, 0x31, 0x41, 0x81, 0x81, 0x00}, /*"快",3*/
        /* (16 X 16 , 宋体 )*/

        {0x40, 0x40, 0x42, 0xCC, 0x00, 0x04, 0xF4, 0x94, 0x94, 0xFF, 0x94, 0x94, 0xF4, 0x04, 0x00, 0x00},
        {0x00, 0x40, 0x20, 0x1F, 0x20, 0x48, 0x44, 0x42, 0x41, 0x5F, 0x41, 0x42, 0x44, 0x48, 0x40, 0x00}, /*"速",4*/
        /* (16 X 16 , 宋体 )*/

        {0x00, 0x00, 0xF8, 0x49, 0x4A, 0x4C, 0x48, 0xF8, 0x48, 0x4C, 0x4A, 0x49, 0xF8, 0x00, 0x00, 0x00},
        {0x10, 0x10, 0x13, 0x12, 0x12, 0x12, 0x12, 0xFF, 0x12, 0x12, 0x12, 0x12, 0x13, 0x10, 0x10, 0x00}, /*"单",5*/
        /* (16 X 16 , 宋体 )*/

        {0x20, 0xC2, 0x0C, 0x80, 0x02, 0x7A, 0x4A, 0x4A, 0x7E, 0x4A, 0x7E, 0x4A, 0x4A, 0x7A, 0x02, 0x00},
        {0x04, 0x04, 0x7E, 0x01, 0x44, 0x25, 0x15, 0x45, 0x85, 0x7D, 0x05, 0x05, 0x15, 0x25, 0x44, 0x00}, /*"漂",6*/
        /* (16 X 16 , 宋体 )*/

        {0x00, 0xFE, 0x22, 0x22, 0xFE, 0x00, 0x00, 0xF1, 0x16, 0x10, 0x10, 0x18, 0x14, 0xF3, 0x00, 0x00},
        {0x80, 0x7F, 0x02, 0x82, 0xFF, 0x80, 0x40, 0x21, 0x19, 0x07, 0x01, 0x3F, 0x41, 0x41, 0x70, 0x00}, /*"脱",7*/
        /* (16 X 16 , 宋体 )*/

        {0x00, 0x20, 0x20, 0x20, 0xA0, 0x60, 0x00, 0xFF, 0x60, 0x80, 0x40, 0x20, 0x18, 0x00, 0x00, 0x00},
        {0x20, 0x10, 0x08, 0x06, 0x01, 0x40, 0x80, 0x7F, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x10, 0x00}, /*"水",8*/

};

const unsigned char Num20X40[][100] =
    {
        // 0(0)1(1)2(2)3(3)4(4)5(5)6(6)7(7)8(8)9(9):(10)

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFE, 0xFF, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01,
         0x03, 0x0F, 0x7F, 0xFF, 0xFE, 0xF8, 0xC0, 0x00, 0x00, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0x3F,
         0x7F, 0xFF, 0xF8, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0xFE, 0xFF, 0x7F, 0x1F, 0x01, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"0",0*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x3C, 0x1E, 0x1F, 0xFF, 0xFF, 0xFF,
         0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"1",1*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x1E, 0x1F, 0x1F, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01,
         0x03, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x80, 0xC0, 0xE0, 0xF8, 0xFC, 0x7F, 0x3F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0,
         0xF0, 0xF8, 0xFC, 0xFF, 0xDF, 0xCF, 0xC7, 0xC1, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00,
         0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
         0x01, 0x01, 0x01, 0x00}, /*"2",2*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x3F, 0x3F, 0x0F, 0x03, 0x01, 0x01, 0x01, 0x01,
         0x03, 0x87, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x0C, 0x0C, 0x1C, 0x1E, 0x3E, 0x7F, 0xFF, 0xF3, 0xF1, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x7C,
         0xFC, 0xFC, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0xFF, 0xFF, 0x7F, 0x3F, 0x07, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"3",3*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF8, 0xFC, 0x7E,
         0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F,
         0x07, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07,
         0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,
         0x00, 0x00, 0x00, 0x00}, /*"4",4*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
         0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF8, 0xFF, 0xFF, 0x7F, 0x87, 0x81, 0x81, 0x81, 0x81,
         0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03,
         0x03, 0x03, 0x03, 0x03, 0x07, 0x0F, 0xFF, 0xFE, 0xFC, 0xF8, 0xC0, 0x00, 0x00, 0x1C, 0x7C, 0xFC,
         0xFC, 0xF0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"5",5*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xFC, 0xFF, 0x3F, 0x1F,
         0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFF, 0xFF, 0x3F, 0x0F,
         0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x7E, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x1F, 0x7F,
         0xFF, 0xFF, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xFC, 0xFF, 0x7F, 0x3F, 0x0F,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01,
         0x00, 0x00, 0x00, 0x00}, /*"6",6*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
         0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
         0xC1, 0xF1, 0xF9, 0xFF, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x80, 0xF0, 0xFC, 0xFF, 0x7F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0xE0, 0xFC, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"7",7*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0xFF, 0x87, 0x03, 0x01, 0x01, 0x01, 0x01,
         0x03, 0x87, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF3, 0xFB, 0xFF, 0x3F, 0x3E,
         0x1E, 0x1E, 0x1E, 0x1E, 0x3F, 0x3F, 0xFF, 0xF3, 0xF1, 0xE0, 0x80, 0x00, 0x00, 0x1F, 0x7F, 0xFF,
         0xFF, 0xF8, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF8, 0xFF, 0xFF, 0x3F, 0x1F, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"8",8*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01, 0x03,
         0x03, 0x07, 0xFF, 0xFF, 0xFE, 0xFC, 0xF0, 0x00, 0x00, 0x07, 0x1F, 0x3F, 0x3F, 0x7E, 0x78, 0x70,
         0x70, 0x60, 0xF0, 0xF0, 0xF8, 0xFE, 0xFF, 0x7F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 0xFF, 0x3F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"9",9*/
        /* (20 X 40 , 楷体, 加粗 )*/

        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xFC, 0xFC, 0xFC, 0xFC,
         0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
         0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00}, /*"10",:*/
        /* (20 X 40 )*/
};

# STM32的HAL库实现OLED_SSD1306显示
### 已通过STM32F407ZGT6+STM32Cube_FW_F4_V1.25.2实现

> 通过 `OLED_SSD1306.h` 的宏定义实现软/硬件i2c的切换
---
> 硬件I2C
> - 基于hal库实现，直接通过CubeMX配置i2c即可
> - 默认使用i2c1，课直接在 `OLED_SSD1306.c` 中如下函数更改i2c端口
> ```C
> static void OLED_Write_Byte(uint8_t WData, uint8_t cmd_or_data)
> {
>    HAL_I2C_Mem_Write(&hi2c1, OLED_Addr, cmd_or_data, I2C_MEMADD_SIZE_8BIT, &WData, 1, HAL_MAX_DELAY);
> }
> ```
> 注：需要将i2c中断打开，优先级最高
---
> 软件I2C
> - 基于HAL库 `software_i2c.h` 中更改相关GPIO端口和引脚即可
> - 默认使用GPIOG端口，可在 `Software_I2C/software_i2c.h` 中更改相关GPIO引脚
> PG13 ------> Software_I2C_SCL 
> PG14 ------> Software_I2C_SDA 

#ifndef __USR_H__
#define __USR_H__

#include "stdint.h"
#include "sys.h"

typedef struct{
  GPIO_Type* GPIO;
  uint16_t Pin;
} gpioPinTypeDef;

void PWM_userInit(const uint8_t* pwmArray, uint8_t len, uint32_t maxPwmDuty);

//ADC初始化函数
void ADC_userInit(void);
uint32_t ADC_GetValue(uint8_t chl);
//======================================================================
//获取ADC口信号函数
//入口：通道(channel):
//	0,1,2: 加速度计的Z、X、Y
//	3,4,5 : 陀螺仪X、Z、Y
//	6,7,8,9: 电磁传感器
//返回：信号值
//======================================================================

//GPIO初始化函数
void GPIO_userInit(void);
//PIT初始化函数
void PIT_userInit(void);
//DMA初始化函数
void DMA_userInit(void);
#endif

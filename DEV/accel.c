//==================================================================
//本文件通过采集MMA7361的信号来演示如何初始化ADC并进行采集
//但有些模拟传感器需要特定的时序或适当的时延来进行采集，此
//类传感器请严格根据数据手册进行代码的编写。
//更多的ACD函数请参考adc.c
//
//==================================================================

#include "accel.h"

//==================================================================
//加速度计采集初始化
//入口参数：AD采集端口：ADCx
//          精度：Pre
//返回：无
//
//==================================================================
void mmaInit(uint32_t ADCx , uint32_t Pre)
{
	ADC_InitTypeDef accelInitStruct;         //定义mma7361采集初始化结构体	
	accelInitStruct.ADCxMap = ADCx;          //端口
	accelInitStruct.ADC_Precision = Pre;     //精度
	ADC_Init(&accelInitStruct);              //地址映射
	
}



//==================================================================
//加速度计采集函数
//入口参数：AD采集端口：ADCx
//返回：加速度计当前值：mmaValue
//
//==================================================================
uint32_t mmaCollect(uint32_t ADCx)
{
	
	uint32_t mmaValue;
  mmaValue=ADC_GetConversionValue(ADCx);
	return mmaValue;
	
}














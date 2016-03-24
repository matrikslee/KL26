//======================================================================
//本文件通过闪烁LED灯来演示如何对GPIO初始化并翻转电平
//更多的GPIO函数请参考gpio.c
//
//======================================================================

#include "led.h"

//======================================================================
// 入口参数：GPIO:PTA:A端口 PTB:B端口 PTC:C端口 PTD:D端口 PTE:E端口
//			 Pin：数字	 	
// 返回参数：无
// 实现LED闪烁前IO口的初始化
//======================================================================
void ledInit(GPIO_Type *GPIO,uint16_t Pin){
	
	GPIO_InitTypeDef GPIO_InitStruct1;
	
	GPIO_InitStruct1.GPIO_Pin = Pin;
	GPIO_InitStruct1.GPIO_InitState = Bit_RESET;
	GPIO_InitStruct1.GPIO_IRQMode = GPIO_IT_DISABLE;
	GPIO_InitStruct1.GPIO_Mode = GPIO_Mode_OPP;
	GPIO_InitStruct1.GPIOx = GPIO;
	GPIO_Init(&GPIO_InitStruct1);
	
}



//======================================================================
// 入口参数：GPIO:PTA:A端口 PTB:B端口 PTC:C端口 PTD:D端口 PTE:E端口
//			 Pin：数字	 	
// 返回参数：无
// 实现LED闪烁
//========================================================================
void twinkleLed(GPIO_Type *GPIO,uint16_t Pin){
	
	GPIO_ToggleBit(GPIO,Pin);
	
}



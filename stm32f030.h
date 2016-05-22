#ifndef __STM32F030_H_
#define __STM32F030_H_

#define REG_L(X,Y) ((long*)((void*)((X) + (Y))))[0]

#define RCC_BASE 0x40021000

#define GPIOA_BASE 0x48000000
#define GPIOB_BASE 0x48000400

#define USART_BASE 0x40013800
#define ADC_BASE 0x40012400

#define RCC_AHBENR 0x14
#define RCC_AHB2ENR 0x18
#define RCC_AHB1ENR 0x1C

#define GPIO_MODER 0x00
#define GPIO_BSRR 0x18

#endif



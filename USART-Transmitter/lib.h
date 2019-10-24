#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include <string.h>
#include "stm32f10x_usart.h"

int UART_open(USART_TypeDef* USARTx, uint32_t baud, uint32_t flags);
int UART_putc(USART_TypeDef* USARTx, char c);
void delay_ms( long Val);
void GPIOA_Init_0_7_i(void);
void led_toggle(void);
void led_init_out_c13 (void);
void btn_init_in_c15 (void);
void led_toggle(void);
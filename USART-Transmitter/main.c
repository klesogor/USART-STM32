#include "lib.h"

char getInput(){
	if(!GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0)){
		return '3';
	}
	if(!GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1)){
		return '6';
	}
	return '0';
}

int main(){
 btn_init_in_c15 ();
 led_init_out_c13 ();
 GPIOA_Init_0_7_i();
	
 UART_open(USART1, 9600, USART_Mode_Rx | USART_Mode_Tx);
	while(1){
		const char input = getInput();
		if(input != '0'){
			GPIO_ResetBits(GPIOC, GPIO_Pin_13);
			UART_putc(USART1, input);
		} else {
			GPIO_SetBits(GPIOC, GPIO_Pin_13);
		}
		delay_ms(10);
	}
	return 0;
}
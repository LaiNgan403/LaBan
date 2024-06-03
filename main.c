#include "MKL46Z4.h"
#include "I2C.h"
#include "delay.h"
#include "uart.h"
#include "mag.h"
#include<math.h>
#include "lcd.h"
//#include "switch.h"
//#include "led.h"

volatile uint8_t operation;

int main() {
	UART_Init();
	led_Init();
	switch_Init();
	Init_Systick();
	I2C_init();
	mag_Init();
	Delay(1);
	
	while(1){
	}
}
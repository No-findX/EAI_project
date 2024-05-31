#include "stm32f10x.h"
#include "dht11.h"

int main(void) {
  RCC_Configuration();
  // 初始化串口
Serial_Init();

// 发送字符串
Serial_SendString("Hello World!");
}

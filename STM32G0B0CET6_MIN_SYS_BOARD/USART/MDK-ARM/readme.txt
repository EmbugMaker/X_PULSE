实验现象：
	PB9 TX
	PB10 RX
	usart1 @115200bps 8 n 1
	程序每隔500ms交替发送字符串 X Pulse STM32G0B0CET6 usart test... 与 X Pulse STM32G0B0CET6 printf usart test...
	程序接收到串口数据后立刻通过串口发送该数据
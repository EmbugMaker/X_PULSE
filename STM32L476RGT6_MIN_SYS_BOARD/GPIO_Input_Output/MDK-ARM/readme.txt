	连接GPIOA 1 与 GPIOA 0。使用GPIOA 0作为电平变化输出脚，使用 GPIOA 0 采集GPIOA 1的信号
然后再将读取到的电平型号送给GPIOC 13，最后GPIOC 13输出采集到的电平信号。
	
	实现现象：LED灯由于GPIOA 1输出信号的变化而闪烁。
	
	
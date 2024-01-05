实现现象：
	连接USB后电脑提示U盘插入，需要格式化U盘。
	本例程使用单片机内部RAM作为U盘存储介质，断电或复位后U盘存储的数据消失。
	若使用SD卡或内部FLASH实现U盘，需要修改usbd_storage_if.c中三个函数即可：
	STORAGE_GetCapacity_FS
	STORAGE_Read_FS
	STORAGE_Write_FS
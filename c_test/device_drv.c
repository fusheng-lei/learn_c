#include <stdio.h>
#include <stdlib.h>
#include "device_drv.h"

static device_op_st devices[] = {
	{
	//定义一个UART设备
	.open = uart_open,
	.close = uart_close,
	.write = uart_write,
	.read = uart_read
	},
	{
	//定义一个spi备
	.open = spi_open,
	.close = spi_close,
	.write = spi_write,
	.read = spi_read
	},
};

void uart_open(void* args)
{
	printf("打开串口\r\n");
}

void uart_close ()
{
	printf("关闭串口\r\n");
}

void uart_write(void* args)
{
	char *p = args;
	printf("写入串口\r\n");
	printf("传入参数：%s\r\n",p);
}

void uart_read(void* args)
{
	printf("读取串口\r\n");
}

void spi_open(void* args)
{
	printf("打开SPI\r\n");
}

void spi_close ()
{
	printf("关闭SPI\r\n");
}

void spi_write(void* args)
{
	printf("写入SPI\r\n");
}

void spi_read(void* args)
{
	printf("读取SPI\r\n");
}

void read_device_revdto_buff (void)
{
	int size = sizeof(devices) / sizeof(devices[0]);
	char buff[4096] = "Hello World!";
	for (int i = 0;i< size;i++)
	{
		devices[i].open (NULL) ;
		devices[i].read (buff) ;
		devices[i].write (buff) ;
		devices[i]. close () ;
	}
}

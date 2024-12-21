/**
  ******************************************************************************
  * @file           : device_drv.c
  * @author         : Administrator
  * @brief          : 通过函数指针实现设备驱动
  * @attention      : None
  * @date           : 2024/12/21
  ******************************************************************************
  */

#include <stdio.h>
#include <stdlib.h>
#include "../inc/device_drv.h"

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
    printf("open uart\r\n");
}

void uart_close ()
{
    printf("close uart\r\n");
}

void uart_write(void* args)
{
    char *p = args;
    printf("write to uart\r\n");
    printf("the args:%s\r\n",p);
}

void uart_read(void* args)
{
    printf("read from uart\r\n");
}

void spi_open(void* args)
{
    printf("open SPI\r\n");
}

void spi_close ()
{
    printf("close SPI\r\n");
}

void spi_write(void* args)
{
    printf("write to SPI\r\n");
}

void spi_read(void* args)
{
    printf("read from PI\r\n");
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
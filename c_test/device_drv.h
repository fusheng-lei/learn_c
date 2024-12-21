//抽象化统一接口语言
typedef struct DEVICE_OP_ST
{
	void (*open) (void *args);//打开外设
	void (*close) ();//关闭外设
	void (*write) (void* args);//写入外设
	void (*read) (void* args);//读取外设
}device_op_st;

void read_device_revdto_buff (void);
void uart_open(void* args);
void uart_close ();
void uart_write(void* args);
void uart_read(void* args);
void spi_open(void* args);
void spi_close ();
void spi_write(void* args);
void spi_read(void* args);


//����ͳһ�ӿ�����
typedef struct DEVICE_OP_ST
{
	void (*open) (void *args);//������
	void (*close) ();//�ر�����
	void (*write) (void* args);//д������
	void (*read) (void* args);//��ȡ����
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


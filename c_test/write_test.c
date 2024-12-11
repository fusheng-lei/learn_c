#include <stdio.h>
#include <stdlib.h>

int fputs_test(void) 
{
    FILE *file; // ����һ��FILE���͵�ָ�룬�����ļ�����
    const char *filename = "output.txt"; // Ҫд����ļ���
    const char *text = "Hello, World! This is a text written by a C program.\n"; // Ҫд����ı�

    // ���ļ���"w"ģʽ��ʾд�룬����ļ������򸲸ǣ��������򴴽�
    file = fopen(filename, "a+");
    if (file == NULL) {
        perror("Error opening file"); // ����ļ���ʧ�ܣ���ӡ������Ϣ
        return EXIT_FAILURE; // ���ط�0ֵ��ʾ�����쳣�˳�
    }

    // д���ı����ļ�
    fputs(text, file); // fputs�������ڽ��ַ���д���ļ�

    // �ر��ļ�
    fclose(file); // �ر��ļ����ͷ���Դ

    printf("Text has been written to %s\n", filename); // ��ӡ�ɹ���Ϣ

    return EXIT_SUCCESS; // ����0ֵ��ʾ���������˳�
}


int fwrite_test(void) 
{
    FILE *file;
    int number = 123; // Ҫд�������
    char buffer[50]; // ���ڴ洢���ֵ��ַ�����ʾ

    // ������ת��Ϊ�ַ���
    sprintf(buffer, "%d", number);

    // ��дģʽ���ļ�
    file = fopen("fwrite.txt", "a+");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // ʹ��fwriteд���ַ���
    fwrite(buffer, sizeof(char), strlen(buffer), file);

    // �ر��ļ�
    fclose(file);

    printf("Number has been written to output.txt\n");

    return EXIT_SUCCESS;
}

int fwrite_bin(void) 
{
    FILE *file;
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // �Զ�����дģʽ���ļ�
    file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // д������
    size_t written = fwrite(numbers, sizeof(int), arraySize, file);
    if (written < arraySize) {
        perror("Error writing to file");
    }

    // �ر��ļ�
    fclose(file);

    return EXIT_SUCCESS;
}

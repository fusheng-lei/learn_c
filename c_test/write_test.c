#include <stdio.h>
#include <stdlib.h>

int fputs_test(void) 
{
    FILE *file; // 声明一个FILE类型的指针，用于文件操作
    const char *filename = "output.txt"; // 要写入的文件名
    const char *text = "Hello, World! This is a text written by a C program.\n"; // 要写入的文本

    // 打开文件，"w"模式表示写入，如果文件存在则覆盖，不存在则创建
    file = fopen(filename, "a+");
    if (file == NULL) {
        perror("Error opening file"); // 如果文件打开失败，打印错误信息
        return EXIT_FAILURE; // 返回非0值表示程序异常退出
    }

    // 写入文本到文件
    fputs(text, file); // fputs函数用于将字符串写入文件

    // 关闭文件
    fclose(file); // 关闭文件并释放资源

    printf("Text has been written to %s\n", filename); // 打印成功信息

    return EXIT_SUCCESS; // 返回0值表示程序正常退出
}


int fwrite_test(void) 
{
    FILE *file;
    int number = 123; // 要写入的数字
    char buffer[50]; // 用于存储数字的字符串表示

    // 将数字转换为字符串
    sprintf(buffer, "%d", number);

    // 以写模式打开文件
    file = fopen("fwrite.txt", "a+");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // 使用fwrite写入字符串
    fwrite(buffer, sizeof(char), strlen(buffer), file);

    // 关闭文件
    fclose(file);

    printf("Number has been written to output.txt\n");

    return EXIT_SUCCESS;
}

int fwrite_bin(void) 
{
    FILE *file;
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // 以二进制写模式打开文件
    file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // 写入数据
    size_t written = fwrite(numbers, sizeof(int), arraySize, file);
    if (written < arraySize) {
        perror("Error writing to file");
    }

    // 关闭文件
    fclose(file);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_KEYWORD_LENGTH 32

int main(int argc, char *argv[]) {
    char *filename = argv[1]; // 获取文件名
    char *keyword_list[] = {"BYPASS", "BBB", "CCC"}; // 定义关键字列表
    int num_keywords = 3; // 关键字数量
    int keyword_indices[num_keywords]; // 记录关键字在列表中的索引
    int i, j, found;
    char current_keyword[MAX_KEYWORD_LENGTH];
    FILE *fp;
    char line[MAX_LINE_LENGTH];

    // 打开文件
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Failed to open file %s\n", filename);
        return -1;
    }

    // 初始化关键字索引
    for (i = 0; i < num_keywords; i++) {
        keyword_indices[i] = -1;
    }

    // 读取文件内容
    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        found = 0;
        // 判断当前行是否为关键字
        for (i = 0; i < num_keywords; i++) {
            if (strstr(line, keyword_list[i]) != NULL) {
                keyword_indices[i] = 1;
                found = 1;
                strcpy(current_keyword, keyword_list[i]);
                break;
            }
        }
        // 输出不是关键字或者不是当前关键字的行
        if (!found || strcmp(current_keyword, keyword_list[i]) != 0) {
            printf("%s", line);
        }
    }

    // 关闭文件
    fclose(fp);

    return 0;
}

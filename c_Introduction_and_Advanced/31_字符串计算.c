#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // char word[8];
    // printf("请输入一个字符串：");
    // scanf("%s",word);

    // printf("你输入的字符串是：%s##\n",word);

    char line[] = "hello,world";
    printf("sizeof(line) = %lu\n",sizeof(line));
    printf("strlen(line) = %lu\n",strlen(line));

    char word1[] = "abc";
    char word2[] = "Abc ";
    printf("strcmp(word1,word2) = %d\n",strcmp(word1,word2));
    printf("a-A = %d\n",'a'-'A');//单引号表示字符，双引号表示字符串
    return 0;
}

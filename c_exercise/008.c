// 题目：输出9*9口诀。
// 程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,j,result;
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j <= i; j++)
        {
            result = i*j;
            printf("%d*%d=%-5d",i,j,result);
            //\t是制表符，可以使输出对齐
            //%-5d表示左对齐，占5位
            // if(j == i)
            // {
            //     printf("\n");
            // }
        }
        printf("\n");
    }

    return 0;
}

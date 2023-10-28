// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
// 程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,month;
    int f1 = 1, f2 = 1;
    printf("请输入月数：");
    scanf("%d",&month);
    for ( i = 1; i <= month; i++)
    {
        printf("%12d%12d",f1,f2);
        if (i % 2 == 0)
            printf("\n");
            f1 = f1 + f2;
            f2 = f1 + f2;
    }

    return 0;
}

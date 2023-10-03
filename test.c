//文件里边就以C语言的规范写
//文件内容例：
#include<stdio.h>
#include<stdlib.h>
int main()
{
    for (int i = 1; i<= 9; i++)
    {
        for (int j= 1; j<=i;j++)
        {
            printf("%d*%d=%-3d", i, j, i*j);
        }
        printf("\n");
    }
    // system("pause");
    // system("read");
    return 0;
}
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b ,t;

    // printf("请输入两个整数(a b):");
    // scanf("%d %d", &a, &b);
    a = 12; b = 18;

    while(b != 0)
    {
        t = a % b;
        a = b;
        b = t;
        printf("a = %d, b = %d, t = %d\n", a, b, t);
    }

    printf("最大公约数为:%d\n", a);

    return 0;
}

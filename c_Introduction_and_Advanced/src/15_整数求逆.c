#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    printf("请输入一个需要求逆的整数:");
    scanf("%d",&x);

    int digit;
    int ret = 0;

    while (x > 0)
    {
        digit = x % 10;
        // printf("%d\n", digit);
        ret = ret * 10 + digit;
        printf("x=%d,digit=%d,ret = %d\n", x,digit,ret);
        x = x / 10;
    }

    printf("逆序数为：%d\n", ret);
    return 0;
}

#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int a;
//     int b;

//     printf("请输入两个数字，格式a b\n");
//     //scanf("%d %d", &a, &b);
//     scanf("price%d %d", &a, &b);

//     printf("a = %d, b = %d\n", a, b);

//     return 0;
// }

int main()
{
    const int AMOUNT = 100;
    int price = 0;

    printf("请输入金额（元）:\n");
    scanf("%d", &price);
    // scanf("price%d %d", &a, &b);

    int change = AMOUNT - price;
    printf("找您%d元。\n", change);

    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int price = 0;
    int bill = 0;

    printf("请输入金额（元）:");
    scanf("%d",&price);
    printf("请输入票面（元）:");
    scanf("%d",&bill);

    if(bill < price)
    {
        printf("票面金额不足\n");
    }
    else
    {
        int change = bill - price;
        printf("找您%d元。\n", change);
    }

    return 0;
}

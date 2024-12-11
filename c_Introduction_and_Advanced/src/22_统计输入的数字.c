#include <stdio.h>

int main(int argc, char *argv[])
{
    const int number = 10;
    int x;
    int count[number];

    int i;
    for(i = 0; i < number; i++)
    {
        count[i] = 0;
    }

    printf("请输入数字(0~9之间):");
    scanf("%d", &x);
    while(x != -1)
    {
        if(x >= 0 && x <= 9)
        {
            count[x]++;
            scanf("%d", &x);
        }
        else
        {
            printf("输入数字不在0-9之间\n");
            scanf("%d", &x);
        }
    }
    for(i = 0; i < number; i++)
    {
        printf("数字%d出现的次数为%d\n", i, count[i]);
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    int ret = 0;

    printf("Please input a number: ");
    scanf("%d", &x);
    int orign = x;
    while(x > 1)
    {
        x = x / 2;
        ret++;
    }

    printf("log2(%d) = %d\n", orign, ret);

    return 0;
}

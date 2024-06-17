#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int i;
    double sum = 0;

    printf("请输入n的值:");
    // scanf("%d", &n);
    n= 5;
    for(i = 1; i <= n; i++)
    {
        sum += 1.0/i;
    }
    printf("f(%d)=%f\n", n, sum);

    return 0;
}

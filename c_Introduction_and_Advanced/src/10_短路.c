#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = -1;
    if(a > 0 && a++ > 1)//a>0不满足，则a++不执行
    {
        printf("OK!\n");
    }

    printf("a = %d\n", a);

    return 0;
}

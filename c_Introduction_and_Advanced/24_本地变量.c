#include <stdio.h>

void swap(int a, int b);
int main(int argc, char *argv[])
{
    int a = 5;
    int b = 10;
    printf("a = %d, b = %d\n", a, b);

    swap(a,b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = &a;
    a = &b;
    b = temp;
    printf("in swap:a = %d, b = %d\n", a, b);

    return a, b;
}
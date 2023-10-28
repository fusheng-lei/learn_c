#include <stdio.h>
// int func(int n)
// {
//     if (n == 0|| n == 1) return n;
//     else
//     return func(n - 1) + func(n - 2);
// }


void foo(void)
{
    unsigned int a =6;int b=-20; 
    (a+b>6)? puts(">6"):puts("<=6"); 
}

int main()
{
    // printf( "%d\n", func(5));
    foo();

    return 0;
}
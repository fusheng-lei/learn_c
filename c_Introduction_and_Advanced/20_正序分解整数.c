#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    // scanf("%d", &x);

    x = 1462;

    int cnt = 0;
    int mask = 1;
    while(x >9)
    {
        x = x/10;
        mask = mask * 10;
        cnt++;
    }
    printf("cnt=%d,mask=%d\n", cnt, mask);

    do
    {
        int d = x / mask;
        x %= mask;
        mask /= 10;
        printf("x=%d,mask=%d,d=%d\n", x, mask, d);
    } while (mask > 0);
    

    return 0;
}

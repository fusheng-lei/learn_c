#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个数：\n");
    scanf("%d",&a);
    printf("a++ = %d\n",a++);
    printf("a = %d\n",a);
    printf("++a = %d\n",++a);
    printf("a = %d\n",a);
    return 0;
} 
#include <stdio.h>

int main() 
{
    int a,b;
    printf("请输入两个整数(格式a b):");
    scanf("%d %d",&a,&b);
    double c = (a+b) /2.0;
    printf("%d和%d的均值=%f\n",a,b,c);
    return 0;
}

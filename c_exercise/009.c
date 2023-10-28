// 题目：要求输出国际象棋棋盘。
// 程序分析：国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,j;
    char a[2] = "BW";
    char* b = "BW";//与上面等价
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c",b[0]);
            else printf("%c",b[1]);
        printf("\n");
    } 
    printf("&b：%d\n",&b); //取指针b的地址
    printf("b：%d\n",b); //"BW"的地址中"B"的地址
    printf("b+1：%d\n",b+1);
    printf("*b：%d\n",*b); //"B"的ASCII码
    printf("*b+1：%d\n",*b+1); //"B"的ASCII码+1
    printf("*(b+1)：%d\n",*(b+1)); //首地址+1，指向下一个字符："W"
    printf("b[0]：%d\n",b[0]);
    printf("b[1]：%d\n",b[1]);

    return 0;
}

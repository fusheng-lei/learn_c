// 题目：判断 101 到 200 之间的素数。
// 程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

// 优化原理：素数是因子为1和本身， 如果num不是素数，则还有其他因子，其中的因子，假如为a,b.其中必有一个大于sqrt(num) ，一个小于sqrt（num） 。
// 所以必有一个小于或等于其平方根的因数，那么验证素数时就只需要验证到其平方根就可以了。即一个合数一定含有小于它平方根的质因子。

#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int i,j;
    int count=0;
    int num1,num2;
    printf("请输入要检测素数的区间(格式3,10):");
    scanf("%d,%d",&num1,&num2);
    for(i = num1; i <= num2; i++)
    {
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
                break;
        }

        //判断循环是否正常结束，如果正常结束则是素数，提前结束则不是素数
        if(j > sqrt(i))
        {
            count++;
            printf("%d ",i);
            if(count % 5 == 0)
                printf("\n");
        }
    }

    return 0;
}

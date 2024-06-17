/*
 * @Author       : ziky
 * @Date         : 2024-06-17 16:00:37
 * @Version      : V1.0.0
 * @LastEditTime : 2024-06-17 16:11:34
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\c_Introduction_and_Advanced\23_函数.c
 * @Description  : 素数求和
 */
#include <stdio.h>

int isPrime(int i)
{
    int ret = 1;
    int k;
    for( k = 2; k < i-1; k++)
    {
        if(k % i == 0)
            {
                ret = 0;
                break;
            }
    }
    return ret;
}

int main(int argc, char *argv[])
{
    int m,n;
    int sum = 0;
    int cnt = 0;
    int i;

    printf("请输入两个数(m n):");
    scanf("%d %d", &m, &n);

    if(m == 1)  m = 2;
    for( i = m; i <= n; i++)
    {
        if(isPrime(i) == 1)
        {
            sum = sum + i;
            cnt++;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("%d %d\n",cnt, sum);

    return 0;
}


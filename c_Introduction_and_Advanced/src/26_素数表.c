#include <stdio.h>

int isPrime(int x, int knownPrimes[], int numberofknownPrimes);
int main(int argc, char *argv[])
{
    const int number = 10;
    // int prime[number] = {2};//对于可变数组，需要先定义数组，然后初始化
    int prime[number];
    prime[0] = 2;
    int count = 1;
    int i = 3;
    while(count < number)
    {
        if(isPrime(i, prime, count))
        {
            prime[count++] = i;
        }
        //调试代码
        {
            printf("i = %d\tcount = %d\t", i,count);
            int i;
            for(i = 0; i < count; i++)
            {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
        //
        i++;
    }
    for(i = 0; i < number; i++)
    {
        printf("%d ", prime[i]);
        if((i+1) % 5 == 0)
        {
            printf("\t\n");
        }
    }

    return 0;
}

int isPrime(int x, int knownPrimes[], int numberofknownPrimes)
{
    int ret = 1;
    int i;
    for(i = 0; i < numberofknownPrimes; i++)
    {
        if(x % knownPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

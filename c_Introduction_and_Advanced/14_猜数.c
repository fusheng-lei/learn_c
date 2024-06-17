#include <stdio.h>

int main(int argc, char *argv[])
{
    srand(time(0)); //随机数种子
    int number = rand() % 100 + 1;  //产生1-100的随机数
    int count = 0;
    int guess = 0;
    
    printf("我已经想好了一个1到100之间的数。");
    do{
        printf("请猜这个数：");
        scanf("%d", &guess);
        count++;
        if(guess > number)
        {
            printf("你猜的数大了。\n");
        }
        else if(guess < number)
        {
            printf("你猜的数小了。\n");
        }
    } while(guess != number);
        printf("恭喜你，猜对了！你一共猜了%d次。\n", count);
        
    return 0;
}

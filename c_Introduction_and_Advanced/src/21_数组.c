#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    double sum = 0;
    int cnt; 
    int number[100];

    printf("请输入数字(小于100个):");
    scanf("%d", &x);
    while(x != -1)
    {
        number[cnt] = x;
        //调试代码
        {
            int i;
            printf("%d\t",cnt);
            for(i = 0; i <= cnt; i++)
            {
                printf("%d ", number[i]);
            }
            printf("\n");
        }
        //
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if(cnt > 0)
    {
        printf("平均值=%f\n", sum/cnt);
        int i;
        for( i = 0; i < cnt; i++)
        {
            if(number[i] > sum/cnt)
                printf("%d ", number[i]);
        }
        printf("\n");
    }
    else
    {
        printf("没有输入数字\n");
    }

    return 0;
}

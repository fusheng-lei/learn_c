/*
 * @Author       : ziky
 * @Date         : 2024-06-12 13:26:19
 * @Version      : V1.0.0
 * @LastEditTime : 2024-06-12 16:42:19
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\c_Introduction_and_Advanced\8_count.c
 * @Description  : 用循环语句计算输入的数字有多少位
 */

#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int num = 0;
//     int count = 0;

//     printf("请输入一个数字:");
//     scanf("%d", &num);

//     num = num / 10; //输入的数是0时
//     count++;
//     while(num != 0)
//     {
//         printf("in loop\n");
//         num /= 10;
//         count++;
//     }

//     printf("这个数字有%d位\n", count);
    
//     return 0;
// }

int main()
{
    int num = 0;
    int count = 0;

    printf("请输入一个数字：");
    scanf("%d",&num);

    do{
        num /= 10;
        count++;
    } while(num != 0);

    printf("这个数字有%d位\n", count);
    
    return 0;
}
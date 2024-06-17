/*
 * @Author       : ziky
 * @Date         : 2024-06-11 15:30:40
 * @Version      : V1.0.0
 * @LastEditTime : 2024-06-11 16:14:59
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\c_Introduction_and_Advanced\5_time.c
 * @Description  : 计算时间差
 */
#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int hour1, minute1;
//     int hour2, minute2;

//     printf("请输入两个时间(小时 分钟):\n");
//     scanf("%d %d", &hour1, &minute1);
//     scanf("%d %d", &hour2, &minute2);

//     int t1 = hour1 * 60 + minute1;
//     int t2 = hour2 * 60 + minute2;

//     int t = t2 - t1;
//     printf("时间差是%d小时%d分钟。\n", t / 60, t % 60);

//     return 0;
// }

int main()
{
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入两个时间(小时 分钟):\n");
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int th = hour2 - hour1;
    int tm = minute2 - minute1;
    if(tm < 0)
    {
        th--;
        tm = tm + 60;
    }
    printf("时间差是%d小时%d分钟。\n", th, tm);

    return 0;
}
/*
 * @Author       : ziky
 * @Date         : 2024-06-11 15:15:51
 * @Version      : V1.0.0
 * @LastEditTime : 2024-06-11 15:22:46
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\c_Introduction_and_Advanced\4_height.c
 * @Description  : 英尺转变为米
 */
#include <stdio.h>

int main()
{
    printf("请输入您的身高(英尺 英寸):\n");
    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("您的身高是%f米。\n", ((foot + inch / 12) * 0.3048));

    return 0;
}

// 题目：输入某年某月某日，判断这一天是这一年的第几天？
// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

#include <stdio.h>

int main(int argc, char *argv[])
{
    int year, month, day;
    printf("请输入年,月,日,格式为：年,月,日(2020,9,13)(英文输入模式)\n");
    scanf("%d,%d,%d",&year,&month,&day);
    int sum,leap;
    switch (month)  //先计算某月以前月份的总天数
    {
    case 1:sum = 0;break;
    case 2:sum = 31;break;
    case 3:sum = 59;break;
    case 4:sum = 90;break;
    case 5:sum = 120;break;
    case 6:sum = 151;break;
    case 7:sum = 181;break;
    case 8:sum = 212;break;
    case 9:sum = 243;break;
    case 10:sum = 273;break;
    case 11:sum = 304;break;
    case 12:sum = 334;break;
    
    default:printf("data error(输入格式错误)\n");
        break;
    } 

    sum = sum +day; //再加上某天的天数
    //判断是不是闰年，正常年份只要除以4,整百年的时候就要除以400
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
    {
        leap = 1;
    }else{
        leap = 0;
    }

    if(leap == 1 && month > 2)
    {
        sum++;  //闰年且月份大于2月时，总天数应该加一天
    }

    printf("%d年%d月%d日是这一年的第%d天\n",year,month,day,sum);

    return 0;
}

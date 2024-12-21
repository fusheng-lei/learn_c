/**
  ******************************************************************************
  * @file           : void_retrun.c
  * @author         : Administrator
  * @brief          : None
  * @attention      : None
  * @date           : 2024/12/21
  ******************************************************************************
  */

#include <stdlib.h>
#include <stdio.h>
#include "../Test/inc/main.h"

void reInt(int);
void* reIntp(int*);
void* reChar(char*);
int main(int argc, char *argv[])
{
    int num=10;
    int *nump;
    char str[10]="CSDN";
    char* strp;
    reInt(num);
    nump = (int*) reIntp(&num); //强制类型转化不能忘！
    strp = (char*)reChar(str); //强制类型转化不能忘！
    printf("主函数输出:%d\n",*nump);
    printf("主函数输出:%s\n",strp);
    // system("pause");

//    print_argc(argc, argv);
    return 0;
}
//一般返回类型的函数
void reInt(int a)
{
    printf("void返回类型的函数的输出:%d\n",a);
    return; // 没有返回值
}
//void*返回类型的函数 返回int*
void* reIntp(int *a)
{
    printf("void*返回类型返回int*的函数的输出:%d\n", *a);
    return a; // 返回 int *
}
//void*返回类型的函数 返回char*
void* reChar(char* str)
{
    printf("void*返回类型返回char*的函数的输出:%s\n",str);
    return str;
}

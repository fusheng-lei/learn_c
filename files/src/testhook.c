/*
 * @Author       : ziky
 * @Date         : 2024-12-11 20:45:52
 * @Version      : V1.0.0
 * @LastEditTime : 2024-12-11 20:58:52
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\files\src\testhook.c
 * @Description  : 钩子函数测试
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义一个全局函数指针 g_pFun，用于指向不同的函数实现
int (*g_pFun)(int a, int b);

// 执行已注册的函数指针 g_pFun
void ExeFun(){
    int x = 1; // 定义第一个参数 x
    printf("This is ExeFun 1!\n");
    int y = 2; // 定义第二个参数 y
    int ret;   // 定义返回值 ret
    printf("This is ExeFun 2!\n");
    // 调用已注册的函数指针 g_pFun，并传入参数 x 和 y
    ret = g_pFun(x, y);
    // 打印函数调用的返回值
    printf("%d\n",ret);
}

// 注册函数指针，将传入的函数指针赋值给全局函数指针 g_pFun
int RegFun(int (*pFun)(int a, int b)){
    g_pFun = pFun; // 将传入的函数指针 pFun 赋值给全局函数指针 g_pFun
    printf("This is RegFun!\n");
    return 0;
}

// 返回两个整数中的较大值
int max(int a, int b){
    printf("This is max!\n");
    if(a > b)
        return a;
    return b;
}

// 返回两个整数中的较小值
int min(int a, int b){
    printf("This is min!\n");
    if(a > b)
        return b;
    return a;
}

int main(int argc, char **argv){
    printf("This is main 1!\n");
    // 注册 max 函数
    RegFun(max);
    printf("This is main 2!\n");
    // 执行已注册的函数
    ExeFun();
    printf("This is main 3!\n");
    // 注册 min 函数
    RegFun(min);
    printf("This is main 4!\n");
    // 执行已注册的函数
    ExeFun();
    printf("This is main 5!\n");
    return 0;
}
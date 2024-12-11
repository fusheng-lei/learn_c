#include <stdio.h>
//函数原型声明
//指针就是保存地址的变量
void f(int *p);
void g(int k);

int main(void){
    int i = 6;
    printf("&i = %p\n",&i);
    f(&i);
    g(i);

    int a = 3, b = 5;
    printf("a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d, b = %d\n",a,b);

    return 0;
}

void f(int *p){
    printf("p = %p\n",p);
    printf("*p = %d\n",*p);
    *p = 26;
}

void g(int k){
    printf("k = %d\n",k);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

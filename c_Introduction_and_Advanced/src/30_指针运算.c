#include <stdio.h>

int main(int argc, char *argv[])
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9,};
    char *p = ac;
    char *p1 = &ac[5];
    printf("p   = %p\n", p);//%p是指针的格式化输出
    printf("p+1 = %p\n", p+1);
    printf("*(p+1) = %d\n", *(p+1));
    //*(p+n) <--> p[n]
    printf("p1-p = %d\n", p1-p);//得到是两个指针之间的元素个数

    int ai[] = {0,1,2,3,4,5,6,7,8,9,};
    int *q = ai;
    int *q1 = &ai[5];
    printf("q   = %p\n", q);
    printf("q+1 = %p\n", q+1);
    printf("*(q+1) = %d\n", *(q+1));
    printf("*q+5 = %d\n", *q+5);
    printf("q1-q = %d\n", q1-q);


    return 0;
}

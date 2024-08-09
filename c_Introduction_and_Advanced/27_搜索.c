/*
 * @Author       : ziky
 * @Date         : 2024-06-24 14:46:06
 * @Version      : V1.0.0
 * @LastEditTime : 2024-06-24 16:55:04
 * @LastEditors  : ziky
 * @FilePath     : \c_prj\c_Introduction_and_Advanced\27_搜索.c
 * @Description  : 数组排序，搜索
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[] = {35,32,20,12,30,9,65,15,13,18,46,31,55};
    int len = sizeof(a)/sizeof(a[0]);
    int i,j,tmp;
    int maxid = 0;
    for(i = len-1; i > 0; i--)
    {
        for(j = 1; j < i+1; j++)
        {
            if(a[j] > a[maxid])
            {
                maxid = j;
            }
        }
        tmp = a[maxid];
        a[maxid] = a[i];
        a[i] = tmp;
        maxid = 0;
    }

    for(j = 0; j < len; j++)
    {
        printf("%d ", a[j]);
    }


    return 0;
}


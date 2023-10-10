// //文件里边就以C语言的规范写
// //文件内容例：
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     for (int i = 1; i<= 9; i++)
//     {
//         for (int j= 1; j<=i;j++)
//         {
//             printf("%d*%d=%-3d", i, j, i*j);
//         }
//         printf("\n");
//     }
//     // system("pause");
//     // system("read");
//     return 0;
// // 
#include<stdio.h>

void main() 
{
    int k=11;
    
    printf("k=%d,k=%o,k=%x\n",k,k,k);
    int x=1,y=1,z=1; 
    x+=y+=z;
    printf("%d\n",x<y?y:x);

    int a[5]={1,2,3,4,5}; 
    int b[5];
    int*ptr=(int*)(&a+1);
    printf("%d,%d\n",*(a+1),*(ptr-1));
    // return 0;
}
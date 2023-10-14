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
    // int k=11;
    // printf("k=%d,k=%o,k=%x\n",k,k,k);

    // int x=1,y=1,z=1; 
    // x+=y+=z;
    // printf("%d\n",x<y?y:x);

    // int a[5]={1,2,3,4,5}; 
    // int b[5];
    // int*ptr=(int*)(&a+1);
    // printf("%d,%d\n",*(a+1),*(ptr-1));
    // // return 0;

    // int x = 0x13;
    // printf("INT;%d\n",x+1);

    // int t = 072;
    // printf("%d\n",t+1);

    int a;
    a = (int)((double)(3/2)+0.5);
    printf("a = %d\n",a);

}

// 7．下面代码有什么问题，请指出并进行修改。
#include<stdio.h>
int main(){
    char*src="hello,world";
    char*dest=NULL;
    int len=strlen(src);
    dest=(char*)malloc(len);
    char*d=dest;
    char*s=src(len);
    while(len--!=0)
        d++ =s--;
        printf("%s",dest);
        return 0;
}


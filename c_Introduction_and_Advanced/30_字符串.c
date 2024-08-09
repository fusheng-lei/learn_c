#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     char c;
//     char d;
//     c = 1;
//     d = '1';

//     if(c == d)
//     {
//         printf("相等\n");
//     }
//     else{
//         printf("不相等\n");

//     }
//     printf("c = %d\n",c);
//     printf("d = %d\n",d);


//     char x;
//     int i;
//     printf("请输入一个字符：");
//     scanf("%d",&i);
//     x = i;
//     printf("x = %d\n",x);//输出整数
//     printf("x = '%c'\n",x);//输出字符

//     //逃逸字符
//     printf("hello\nworld\n");
//     printf("hello\bA\nworld\n");

//     return 0;
// }

int main(int argc, char *argv[])
{
    int i;
    char *s = "hello,world";
    char *s2 = "hello,world";
    char s3[] = "hello,world";

    printf("i = %p\n",&i);
    printf("s = %p\n",s);
    printf("s2 = %p\n",s2);
    printf("s3 = %p\n",s3);

    s3[0] = 'H';
    printf("Here,s3[0]is:%c\n",s3[0]);

    return 0;
}
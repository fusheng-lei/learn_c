#include<stdio.h> 

int main() 
{
    // int x=19; x&=0x1f;
    // printf("%d，%d\n",x<<1,x>>1); 

    // char s[]="hello"; 
    // char*p=s;
    // printf("%d\n",sizeof(s)); 
    // printf("%d\n",sizeof(p));


    // int a=10; int b=20; int c;
    // c=a++ + ++b;
    // printf("a = %d,b = %d c= %d\n",a,b,c); 

    // unsigned char i=1;
    // printf("%d\n",i-=3); 

    // 18．若有定义：则可以表示字符'h'的表达式是（）
    char *say[]={"hi","hello","hey"};
    char **p=say;
    printf("*say+2=%s\n",*say+3);
    printf("*say[2]=%c\n",*say[2]);
    printf("*(say+1)=%s\n",*(say+1));
    // printf("**++say=%d\n",**++say);

    return 0;
} 


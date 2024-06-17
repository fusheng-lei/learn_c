#include <stdio.h>

int main(int argc, char *argv[])
{
    const int PASS = 60;
    int score = 0;
    
    printf("请输入分数:");
    scanf("%d", &score);

    printf("您的成绩是%d\n", score);    //输出以检验输入的数字是否正确读入
    if(score < PASS)
    {
        printf("很遗憾，您的成绩不及格！\n");
    }
    else
    {
        printf("恭喜，您的成绩及格！\n");
    }
    printf("再见！\n");

    return 0;
}

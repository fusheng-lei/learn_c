#include <stdio.h>

int main(int argc, char *argv[])
{
    int number;
    int sum = 0;
    int count = 0;

    printf("Please input a number(-1 stop): ");
    scanf("%d",&number);
    while(number != -1)
    {
        sum += number;
        count++;
        scanf("%d",&number);
    }

    printf("Average: %f\n", 1.0 * sum / count);

    return 0;
}

// malloc函数和free配对
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int *a;
    int i;
    printf("请输入数量：");
    scanf("%d",&num);
    a = (int *)malloc(num * sizeof(int));
    
    for(i = 1;i < num ; i++){
        scanf("%d",&a[i]);
    }
    for(i = i-1; i>0; i--){
        printf("%d",a[i]);
    }

    free(a);
    return 0;
}
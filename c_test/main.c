#include <stdio.h>		//电脑环境变量里面的incLude文件夹里面，存在该头文件
#include <stdlib.h>

#include "write_test.h"		//一般表示工程文件夹下面的头文件.h
#include "main.h"		//一般表示工程文件夹下面的头文件.h
#include "Queue.h"		//一般表示工程文件夹下面的头文件.h

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int print_argc(int argc, char *argv[]) 
{
    // 打印程序名和参数个数
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);

    // 遍历并打印所有参数
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}

int main(int argc, char *argv[])
//int main()
{
    Queue* q = createQueue(); // 创建队列

    enqueue(q, 1); // 入队
    enqueue(q, 2);
    enqueue(q, 3);

    printf("Front element is: %d\n", front(q)); // 查看队头元素

    while (!isEmpty(q)) {
        printf("%d ", dequeue(q)); // 出队并打印元素
    }
    if (isEmpty(q))
    	printf("\n");

    freeQueue(q); // 释放队列占用的内存


	//	fputs_test();
	//	fwrite_test() ;
	//	fwrite_bin() ;
	
	print_argc(argc, argv);
	
    return 0;
}

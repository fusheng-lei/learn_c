#include <stdio.h>		//电脑环境变量里面的incLude文件夹里面，存在该头文件
#include <stdlib.h>

#include "./Test/inc/main.h"		//一般表示工程文件夹下面的头文件.h

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

    //Queue_test();
    //	fputs_test();
    //	fwrite_test() ;
    //	fwrite_bin() ;

    print_argc(argc, argv);

    read_device_revdto_buff();

    printf("The end of main!\n");
    return 0;
}

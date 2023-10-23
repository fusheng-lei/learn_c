// 题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// 程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。

#include<stdio.h>
int main()
{
	int i,j,k;
    int num = 0;
	printf("\n");
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			for(k=1;k<5;k++)
				if(i!=k && i!=j && j!=k)
                {
                    num = num+1;    
					printf("第%d的数字为：%d%d%d\n",num,i,j,k);
                }
	printf("\n");
	return 0;
}


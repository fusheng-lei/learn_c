#include <stdio.h>

int main(int argc, char const *argv[])
{
	// printf("%9d\n",123);
	// printf ("%-9d\n",123);
	// printf("%+9d\n",123);
	// printf ("%+-9d\n",-123);
	// printf("%09d\n",123);
	// printf ("%-9d\n",123);
	
	// printf("%9.2f\n",123.0);
	// printf("%*d\n",6,123);
	
	// printf("%hhd\n",(char)12345);
	// int num;
	// printf("%d%n\n",12345,&num);
	// printf("%d\n",num);
	// printf("%dty%n\n",12345,&num);
	// printf("%d\n",num);
	
	int number;
	scanf("%*d%d",&number);
	printf("%d\n",number);
	
	return 0;
}

#include<stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d",j,i,j*i);//   \t:制表符，长度可变的大空格 
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}

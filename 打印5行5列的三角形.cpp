#include<stdio.h>
int main()
{
	//正向三角形 
	for (int i=1; i<=5; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	//反向三角形 
	for (int i=1; i<=5; i++)
	{
		for (int j =i; j<=5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

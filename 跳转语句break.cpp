#include<stdio.h>
int main()
{
	for(int i=1;i<=100;i++)
	{
		if(i%15==0)
		{
			printf("1到100之间第一个既能被3有能被5整除的数字为%d",i);
			break; 
		}
	 } 
	return 0;
 } 

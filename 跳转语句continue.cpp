#include<stdio.h>
int main()
{
	int i=1;
	for(int i=1;i<=5;i++)
	{
		printf("吃第%d个包子\n",i);
		if(i==3)
		{
			printf("发现包子坏了，扔掉,继续吃下一个包子");
			continue; 
		}
	}
	return 0;
 } 

#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
int main()
{
	//c语言中随机数是根据给定的初始值（种子）进行计算出来的
	//设置种子srand()
	srand(time(NULL));
	//获取随机数
	for(int i=1;i<=10;i++) 
	{ 
	int num = rand();
	printf("%d\n", num);
    }
	return 0;
}

#include<stdio.h>
int main()
{
	//跳出循环嵌套break和goto
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("你好你好%d\n", j);
			//break跳出内层循环 
			//break;
			goto a;                                       //goto可以跳转到任意位置 
		}
			printf("-------------\n");
	}
	a: printf("------看看我是否执行-----\n");
	return 0;
}

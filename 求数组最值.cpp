#include<stdio.h>  

int main()
{
	int arr[5] = { 33,5,22,44,55 };
	//使用变量存储
	int maxnum = arr[0];
	//求数组长
	int len = sizeof(arr) / sizeof(arr[0]);
	//遍历数组
	for (int i = 0; i <= len ; i++)
	{
		//挨个进行比较
		if (arr[i] > maxnum)
		{
			//遇到更大的值再进行赋值 
			maxnum = arr[i];
		}
	}
	printf("数组中最大的是%d",maxnum);
	return 0;
}

#include<stdio.h> 
int main()
{
	//冒泡排序：相邻的数据两两比较，小的放前面，大的放后面
	//定义数组
	int arr[5] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int j = 1; j < len; j++)
	{
		for (int i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	//再次遍历，确定结果

	for (int i = 0; i < len ; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}


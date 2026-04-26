#include<stdio.h> 

int binarySearch(int arr[], int len, int num);
int main()
{
	/*二分查找
	前提条件：数组必须有顺序
	如果找到了，就会返回对应的索引
	如果没有找到，则返回-1*/

	//1.定义数组
	int arr[] = {1,22,67,121,567,890,996 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.定义一个变量表示要查找的数据
	int num = 890;

	//3.调用函数，返回对应值的索引
	int index = binarySearch(arr, len, num);
	printf("%d\n", index);

	return 0;
}
//作用：查找数据
int binarySearch(int arr[],int len,int num)
{
	int min = 0;
	int max = len - 1;
	//寻找数据过程
	
	while (min<=max)
	{
		int mid=(min+max)/2;
		if (arr[mid] < num)
		{
			min = mid + 1;
		}
		else if (arr[mid] > num)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	//未找到
	return -1;
}

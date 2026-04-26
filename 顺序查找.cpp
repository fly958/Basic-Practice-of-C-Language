#include<stdio.h> 
int checkData(int arr[], int len, int num);
int main()
{
	/*数组的基本查找/顺序查找
	核心思路：从数组的零索引开始，依次往后查找
	如果找到了，就会返回对应的索引
	如果没有找到，则返回-1*/

	//1.定义数组
	int arr[] = { 11,22,55,77,66 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.定义一个变量表示要查找的数据
	int num = 66;

	//3.调用函数，返回对应值的索引
	int index = checkData(arr, len, num);
	printf("%d\n", index);

	return 0;
}
//作用：查找数据
int checkData(int arr[], int len,int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
   }
   return -1; 
}

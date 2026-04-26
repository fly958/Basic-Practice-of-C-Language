#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
int main()
{
	//打乱数组
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//遍历数组，并与随机索引处的数据进行交换
     srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		//1.得到随机索引数0-4

		int num = rand() % 5 ;
		//对数据进行交换
		int temp = arr[i];
		arr[i] = arr[num];
		arr[num] = temp;
	}
	//再次遍历，进行确定
	printf("打乱后的数组为：\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d",arr[i]);
		printf("  ");
	}
	return 0;
}


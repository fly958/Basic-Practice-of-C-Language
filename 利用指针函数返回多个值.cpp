#include<stdio.h>
void getMaxAndMin(int arr[], int len, int* max, int* min); 
int main()
{
	//函数返回多个值
	//定义一个函数，求数组的最大和最小值，并进行返回
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	int min = arr[0];
	getMaxAndMin(arr, len,&max,&min);                   //传入最大最小值的地址 
	printf("最大值是%d:\n最小值是%d:\n",max, min);      //地址里的数已经更改 

	return 0;
}
//函数确定最大最小值 
void getMaxAndMin(int arr[], int len, int* max, int* min)//定义俩个地址 
{
	*max=arr[0];
	*min=arr[0];                                         //地址里存的数先暂定为数组的第一个数 
	
	for (int i = 1; i < len; i++)                        //遇到大的，地址里的数更改 
	{
		//求最大值 
		if (arr[i] > *max)
		{
			*max=arr[i];
		}
		//求最小值 
		if (arr[i] < *min)                                //遇到小的同样如此 
		{
				*min=arr[i];
		}
	}
}

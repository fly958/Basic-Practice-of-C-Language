#include<stdio.h> 
#include <time.h>
#include<stdlib.h>
int checkNum(int arr[],int num,int len);
int main()
{
	//遍历数组求和（升级版）
		srand(time(NULL));
	//定义数组
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//存入数据，重复的数据舍弃
	for (int i = 0; i < len; )
	{
		//生成10个1到10的随机数	
		int num = rand() % 10 + 1;
		int judge=checkNum(arr,num,len);
		if(judge==0)
	{
		arr[i]=num;
		i++;
	}
	}
	//再次遍历，确定数组
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
//设置判断数据是否重复的函数
//重复返回 1
//不重复返回 0
int checkNum(int arr[],int num,int len)
{
	//判断是需要遍历前面的所有数字看是否重复 
	for(int i=0;i<len;i++)
	{
	if(arr[i]==num)
	{
		//注意：return结束代码的范围在函数间，即函数内得到return就会结束这个函数 
		return 1;
	}
	}
	return 0;
  }  

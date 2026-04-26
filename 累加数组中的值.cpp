#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
int main()
{
	//生成随机数1---100
	//种种子
	srand(time(NULL));
	int num = rand() % 100 - 1;
	//定义数组
	int arr[10] = {0};
	//计算数组长度
	int len = sizeof(arr)/sizeof(arr[0]);
    //将数据存入
	for (int i = 0; i <len; i++)
	{
		//重复生成10个随机数并赋值 
		int num = rand() % 100 - 1;
		arr[i] = num;
	}
	//遍历数组并累加 
	int sum=0; 
	for (int j = 0; j < len; j++)
	{
		printf("%d\n", arr[j]);
		sum+=arr[j]; 
		
	}
	//得到结果
	printf("以上数组中的数字和为%d",sum); 
	
	return 0;
}

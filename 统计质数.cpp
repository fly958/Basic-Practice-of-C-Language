#include<stdio.h>
int main()
{
	//判断一个数是不是质数：即判断它除了1和自己还有没有其他因子--->两数相除，余数是否为0
    int maxnum;
	int count=0;
	int zhishu=0;
	printf("请输入一个数字，我来判断1到这个数之间有几个质数：\n");
	scanf("%d", &maxnum);
	for(int j=1;j<=maxnum;j++)
{
	
	//判断一个数是不是质数
	for (int i = 2; i < j; i++)
	{
		if (j % i == 0)
		{
			count++;  
			break;  //找到一个数能被num整除
		}
	}
	if (count == 0)
	{
		
		zhishu++;
		
	}

}
printf("1到%d之间有%d个质数",maxnum,zhishu);
	return 0;
}

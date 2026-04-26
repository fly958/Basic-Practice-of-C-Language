#include<stdio.h>
int getRemainder(int num1,int num2,int *res);
int main()
{
	//函数的结果和计算状态分开
	//定义一个函数，将两数相除，获取他们的余数
	int a = 17;
	int b = 3;
	int res =0;                                              //暂存res的值
	//调用函数并判断状态 
	int judge= getRemainder(a, b,&res);
	if(judge==1)
	{
		printf("余数为：%d\n",res);
	}
	
	return 0;
}
//因为存在除数为0的违规情况，计算无法进行，这时余数没有返回值
//可以利用指针来改变res里的数据，使其在外部也能被改变     0不正常         1正常
//此时函数既可以用于判断状态，又同时计算出了余数 
int getRemainder(int num1,int num2,int *res)
{
	if(num2==0 )
	{
		return 0;
	}
	* res = num1 % num2;
	return 1 ;
}



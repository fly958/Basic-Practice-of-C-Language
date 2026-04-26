#include<stdio.h> 
#include<string.h>

//定义一个共用体
union moneyType
{
    int moneyi;
	double moneyd;
	char moneystr[100];	
 }; 
int main()
{
	//共用体
	//       核心：一种数据可能有多种类型
	//            例如：钱的类型可能有整数，小数，字符串
	
	//创建一个共用体实例
	union moneyType money1;
	
	//初始化   一次只能赋值一个 
    money1.moneyi =99999;
    money1.moneyd =122.11;
    strcpy(money1.moneystr,"100万");
    
    //打印结果
	printf("%d\n",money1.moneyi ); 
	printf("%lf\n",money1.moneyd  ); 
	printf("%s\n",money1.moneystr  ); 
	return 0;
}


#include<stdio.h> 
//定义一个函数返回地址 
int*method()
{
	static int a=10;
	//返回a的地址 
	return &a; 
 } 

int main()
{
	//函数中变量的生命周期和函数相关，函数结束了，变量也会消失
	//如果不想函数中的变量回收，可以在变量前面加static关键字
	 int *p=method();
	 printf("拖延时间\n"); 
	 printf("拖延时间\n"); 
	 printf("拖延时间\n"); 
	 printf("拖延时间\n"); 
	 printf("拖延时间\n"); 
	 printf("拖延时间\n"); 
     printf("拖延时间\n"); 
     printf("拖延时间\n"); 
     printf("拖延时间\n"); 
	 printf("%d",*p); 
	
	return 0;
}


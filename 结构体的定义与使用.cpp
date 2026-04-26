#include<stdio.h> 
#include<string.h>
/*       结构体：
               自定义的数据类型
               就是由很多的数据组合成的一个整体
			   每一个数据，都是结构体的成员
			   
		 书写的位置：
		       函数的里面：局部位置，只能在本函数里使用
			   函数的外面：全局位置，在所有的函数中都能使用
			   
*/			   
//结构定义 
struct Pubby
{
	char name[100];
	int age;
	double height; 
} ; 
		   	     
int main()
{
	  //结构体的使用
	  struct Pubby pubby1;
	  strcpy(pubby1.name,"煤炭");                      //复制字符串 
	   pubby1.age=1;
	   pubby1.height=36.6;
	   
	   //输出信息
	   printf("小狗%s的年龄为%d岁，它身长%lfcm\n",pubby1.name,pubby1.age,pubby1.height); 
	   
	   
	   struct Pubby pubby2;
	  strcpy(pubby2.name,"旺财");                      //复制字符串 
	   pubby2.age=2;
	   pubby2.height=50.6;
	   
	   //输出信息
	   printf("小狗%s的年龄为%d岁，它身长%lfcm\n",pubby2.name,pubby2.age,pubby2.height); 
	  
	return 0;
}

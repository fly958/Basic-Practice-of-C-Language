#include<stdio.h>

int main()
{
	//二级指针：一级指针的内存地址
	
	int a=10;
	int b=2;
	
	//一级指针 
	int* p=&a;
	printf("%d\n",p);                    //a的地址 
	printf("%d\n",*p);                   //a的值
	
	//1.利用二级指针修改一级指针里面记录的内存地址 
	int* * pp=&p;                         //p的地址，即指针的地址   
	//修改指针的地址
	 *pp=&b;
	 
	 printf("%d\n",*pp);                    //修改后的地址 ，即b的地址
	 printf("%d\n",&b);    
	 
	 //2.利用二级指针获取到变量中记录的数据            
	 printf("%d\n",**pp);                   //修改后的地址里存的值成为了b 
	 return 0;
}

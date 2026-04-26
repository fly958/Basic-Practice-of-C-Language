#include<stdio.h> 
int main()
{
	//利用指针获取变量中的数据/存储数据
	int a=10;
	//1.定义一个指针去指向变量           这里的*p代表存了a的内存地址
	int* p=&a;
	//2. 这里的*是解引用运算符，通过内存地址获取内里的数据 
	printf("%d\n",*p);
	// 3.修改a的值为200
	*p=200;
	 	printf("%d\n",a);
	return 0;
}


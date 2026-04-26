#include<stdio.h> 
//*p1  *p2只是临时变量，用完即毁 
void swap(int *p1, int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main()
{
	//定义两个变量，要求交换变量中记录的值
	//注意：交换的代码写在一个新的函数swap中
	int a = 10;
	int b = 20;
	printf("调用前a的值为%d,b的值为%d\n", a, b);
	//传入a和b的地址 
	swap(&a, &b);
	
	printf("调用后a的值为%d,b的值为%d\n", a, b);
	return 0;
}


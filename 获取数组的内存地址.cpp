#include<stdio.h>


int main()
{
   //获取数组的内存地址
   int arr[]={1,2,3};
   printf("%p\n",&arr); 
   printf("%p\n",&arr[0]); 
   printf("%p\n",&arr[1]); 
   printf("%p\n",&arr[2]); 
	return 0;
}

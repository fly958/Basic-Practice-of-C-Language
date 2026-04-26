#include<stdio.h>

int main()
{
	//数组指针
	///定义数组
	int arr[]={10,20,30,40,50,60};
	int len=sizeof(arr)/sizeof(arr[0]);
	
	//定义数组指针(通用)
	int* p=arr;                      //获取到数组的首地址 
	 
	 //通过指针遍历数组
	 for(int i=0;i<len;i++)
	 {
	 	printf("%d  ",*p++);          //先用后加 
		  
	  } 
	 return 0;
}

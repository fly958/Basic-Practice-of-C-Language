#include<stdio.h>
#include<stdlib.h> 

int main()
{
	//当malloc申请过多空间时，会产生虚拟内存
	//表示单词申请空间的大小 
	int number=1024*1024*1024;  //1G
	
	int count=0;
	
	//循环申请，失败返回NULL,成功返回首地址
	while(1)
	{
		int*p=(int*)malloc(number) ;
		
		if(p==NULL)
		{
			printf("申请失败\n");
			break;
		}
		
		count++;
		printf("内存%d申请成功%p\n",count,p); 
	 
	 } 
	  
	 
	return 0;
}

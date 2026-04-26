#include<stdio.h>
int main()
{
	/*
	    打开文件：fopen
		关闭文件：fclose
		
		写出数据：fgetc 读一个
		          fgets 读一行    读不到返回NULL 
				  fgetd 读多行
	*/
	
	//打开文件
    FILE*file=fopen("E:\\word.txt","r");		 //只读	  
			
	//读取数据
	//fgets 读一行    读不到返回NULL 
	char arr[1024]; 
	fgets(arr,1024,file);                         //参数依次为：数组（装数据的容器），数组长（装数据的容器大小），文件（对象）， 
	printf("%s",arr);                             //读取到的自动赋值给数组 
				
					    
	return 0;
 } 

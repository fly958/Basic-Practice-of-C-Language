#include<stdio.h>
int main()
{
	/*
	    打开文件：fopen
		关闭文件：fclose
		
		写出数据：fgetc 读一个
		          fgets 读一行    读不到返回NULL 
				  fread 读多行
	*/
	
	//打开文件
    FILE*file=fopen("E:\\word.txt","r");		 //只读	  
			
	//读取数据
	//fread 读多行    读不到返回  
	char arr[6];
	int c;		
	while((c=fread(arr,1,6,file))!=0)           //文件指针会记住上一次读取到的位置 
	{
		printf("%s",arr);
		}	
					    
	return 0;
 } 

#include<stdio.h>
int main()
{
	/*
	    打开文件：fopen
		关闭文件：fclose
		
		写出数据：fgetc 读一个
		          fgets 读一行
				  fgetd 读多行
	*/
	
	//打开文件
    FILE*file=fopen("E:\\word.txt","r");		 //只读	  
			
	//读取数据
	//fgetc:一次读一个字符，读不到返回-1
	int c;
	while((c=fgetc(file))	!=-1)
	{
		printf("%c",c); 
	}	
				
					    
	return 0;
 } 

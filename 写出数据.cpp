#include<stdio.h>
int main()
{
	/*
	    打开文件：fopen
		关闭文件：fclose
		
		写入数据：fputc   字符 
		          fputs    字符串 
				  fwrite     任意 
		          
				  
	*/
	
	//打开文件
    FILE*file=fopen("C:\\Users\\XIFEI\\Desktop\\aaa","w");		 //只写        w没有创建，已有覆盖，a追加 
			
	//写入数据
	//1.fputc    a------97 
	int n=fputc(97,file);
	printf("%c\n",n);
	
	//2.fputs   成功返回非负数，一般忽略返回值
	int m=fputs("你好",file);
	printf("%d\n",m); 
	
	//3.fwrite   返回写出的字节个数
	char str[]="你好";
	char arr[]={97,98,99,100,101}; 
	int b=fwrite(str,2,2,file);        //这里的第一个参数类型是void，与上面不一样，必须明确告诉 
    int a=fwrite(str,1,5,file); 
	printf("%d\n",b); 
	printf("%d\n",a); 
	return 0;
 } 

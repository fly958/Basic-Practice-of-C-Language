#include<stdio.h>
int main()
{
	/*
	    练习：利用代码拷贝文件(图片)
		要求：
		      把桌面的a.wmv文件拷贝到桌面的aaa文件夹中
		      
		      纯文本文件可以被记事本打开并且读懂，一般有txt,md,lrc         r  w  a
			  这里的a.wmv是二进制文件                                      rb wb ab
	*/
	
	//1.打开要复制的文件(数据源)
    FILE* file1=	fopen("D:\\微信图片_20260309102427_36_10.jpg","rb");
	 
	 //2.打开aaa(目的地) 
	FILE* file2=    fopen("C:\\Users\\XIFEI\\Desktop\\aaa\\copy.jpg","wb");          //路径必须是具体的文件，而不是文件夹 
	 
	 //读取数据源并写入目的地
	  char arr[1024];                       //字符数组，存放读取的数据 
	  int n;                                //要读的数组数量 
	  while((n=fread(arr,1,1024,file1))!=0)             //参数依次为：数组（装数据的容器），数据项，数据项的个数（装数据的容器大小），文件（对象），
	  {
	  	fwrite(arr,1,n,file2); 
	  	
	  }
	  
	  //关闭文件
	  fclose(file1);
	  fclose(file2); 
	return 0;		   
 } 

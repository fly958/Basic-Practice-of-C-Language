#include <stdio.h>
int main()
{
	//转义字符  \
	//转义字符\表示改变后面这个符号原本的含义，把他变成一个普通的符号
	
	//打印一个双引号"
	printf("\"");
	
	/*   打印一个斜杠 \    */
	printf ("\\");
	
	printf("\n");
	
	
	//定义字符串表示路径  需要打印的：C:\aaa\a.txt 
	char*file="C:\\aaa\\a.txt";
	
	//打印 
	printf("%s\n",file);
	 
	return 0;
}

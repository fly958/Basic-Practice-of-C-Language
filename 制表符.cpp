#include<stdio.h>                          //\t:制表符，长度可变的大空格 
int main()                                  //会根据前面字母的个数在后面补空格，让整体的长度达到8或8的倍数，最少补1个，最多补8个 
{
	printf("name\t\tage\tgender\thobby\n") ;
	printf("zhangsan\t23\t男\t篮球");
	return 0;
}

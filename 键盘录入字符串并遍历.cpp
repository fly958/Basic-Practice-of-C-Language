#include<stdio.h>
int main()
{
	//字符串的定义
	//1
	char str1[]="abc";
	
	//2
	char*str2="abcd";
	
	//遍历字符串
	//char*str3   需要初始化，但是后续应该进行字符串存入，相当于修改，但是此方法将初始化值存入只读常量区，不能进行修改                    此方法不行 
	char str3[100]; 
	printf("请输入字符串：\n");
	scanf("%s",str3);                          //此处str3已为地址 
	
	
	printf("输入的字符串为：%s\n",str3);
	
	//遍历字符串得到每一个字符
	
	char*p=str3;
	
	while(1)
	{
	   //利用指针获取字符串中的每一个字符
	   char c=*p;
	   if(*p=='\0')                            //遇到结束标记，退出循环 
	   break;
	   
	    //打印每一个得到的字符 
	    printf("%c",c);
	    p++; 
	 	
	 } 
	 
	
	
	 return 0;
 }
 

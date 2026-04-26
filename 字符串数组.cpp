#include<stdio.h>
int main()
{
	
    //字符串数组   定义一个数组储存5个学生的名字并进行遍历 
	//1.字符数组形式(本身字符串就是以数组的形式进行定义的，此处5个名字就是5个数组)    
	char strArr[5][100]=
	{
		{"zhangsan"}, 
		{"lisi"}, 
		{"wangwu"}, 
		{"zhaoliu"},                                   //大括号可去 
		{"qianqi"} 
	 } ; 
	 
	 //遍历
	 for(int i=0;i<5;i++)
	 {
	 	char*str=strArr[i];               //明确表示“我拿到了一个字符串指针” 
	 	printf("%s\n",strArr[i]);         //%s的参数必须是一个char*类型的指针 
	  } 
	 
	 //2.第二种方式
	 //把五个字符串的指针，放入一个数组中（指针数组） 
	 char*strArr1[5]=
	 {
	 	
	"zhangsan",                                         //“zhangsan”本身代表这个字符串第一个字符的地址 
	"lisi", 
	"wangwu", 
	"zhaoliu",
	"qianqi" 
	  } ;
	  
	  //遍历
	  for(int i=0;i<5;i++)
	  {
	  	char*str=strArr[i];               //明确表示“我拿到了一个字符串指针” 
	 	printf("%s\n",strArr[i]);         //%s的参数必须是一个char*类型的指针 
	   } 
	
	
	 return 0;
 }
 

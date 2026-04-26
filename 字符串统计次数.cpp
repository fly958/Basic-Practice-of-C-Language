#include<stdio.h> 
#include<string.h>
int main()
{
	//键盘录入一个字符串，统计该字符中大小字母字符，数字字符出现的次数（不考虑其他字符）
	//录入字符 
	printf("请输入一串字符：\n");
	char str[100];
	scanf("%s",str);
	printf("你输入的字符为：%s\n",str); 
	 
	 int bigCount=0;
	 int smallCount=0;
	 int numberCount=0;
	 
	 //遍历字符并进行判断
	  for(int i=0;i<strlen(str);i++)
	  {
	     if(str[i]>='a'&&str[i]<='z')
		 {
		 	bigCount++;
	     }  
		else if(str[i]>='A'&&str[i]<='Z')
		 {
		 	smallCount++;
	     }  
	    else if(str[i]>='0'&&str[i]<='9')                           //str就是一个字符数组，str[i]即是访问每一个字符 
		 {
		 	numberCount++;
	     }  
	  }
	  
	  //输出结果
	  printf("输入的字符中有%d个大写字符\n",bigCount); 
	   printf("输入的字符中有%d个小写字符\n",smallCount); 
	    printf("输入的字符中有%d个数字字符\n",numberCount); 
	return 0;
}

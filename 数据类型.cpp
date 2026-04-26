#include<stdio.h>
int main()
{
	//利用sizeof测量每一位数据类型占用多少字节
	printf("%zu\n",sizeof(short)) ;
	printf("%zu\n",sizeof(10)) ;
	printf("%zu\n",sizeof(long));
	printf("%zu\n",sizeof(long long));
	
	
	
	/*
	signed有符号整数  正数  负数
	unsigned无符号整数 
	小数类型无法与unsigned使用*/
	signed int a=-100;
	//定义一个变量表示序号
	unsigned int f=999;
	printf("%u\n",f);
	
	//定义小数
	float b=3.14F;
	printf("%.2f\n",b);
	double c=1.78;
	printf("%.2lf\n",c);//小数默认用double
	printf("%zu\n",sizeof(b));  
	 
	 
	 //定义char类型
	 char c1='a';
	 char c2='A';
	 char c3='1';
	 char c4=',';
      printf("%c\n",c1);
	  
	 
	return 0;  
	
}

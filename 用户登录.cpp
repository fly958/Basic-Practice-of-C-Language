#include<stdio.h>
#include<string.h>
int main()
{
	
    //需求：已知正确的用户名和密码，请用程序实现模拟用户登录，一共3次机会，登录之后，给出相应的提示
	//设置正确信息 
	char*strName="xx";
	char*strKey="123456";

	
	
	
	
	for(int i=1;i<=3;i++)
	{
			
	//提示用户输入信息 
	printf("请输入用户名：\n");
	char name[100];
	scanf("%s",name);
	 printf("请输入密码：\n");
	char key[100];
	scanf("%s",key);
	
	//对用户名和密码进行判断，一致返回0，不一致返回其他 
    int flag1=strcmp(strName,name);
	int flag2=strcmp(strKey,key);
	
	//进行循环判断 
		if(flag1==0&&flag2==0)
	{
		printf("登录成功\n");
		break;
	}
	else
	{
	
		printf("登录失败，还有%d次机会\n",3-i);
	
	}
	}
	 return 0;
 }
 

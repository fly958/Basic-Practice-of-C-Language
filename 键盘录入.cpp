#include<stdio.h>
int main()
{
	/*键盘录入 
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	*/
	
	//字符串定义
    char name[100];    //[100]表示大小，可大于实际大小 
    printf("请输入您的名字：\n");
	scanf("%s",&name);
	printf("您的名字是：%s\n",name) ;
	
	//记录年龄
    //定义变量记录年龄 
	int age;
	 //录入年龄
	 printf("请输入你的年龄："); 
	scanf("%d",&age);                       //这里的" "中代表你要输入的东西，不要乱加，不要忘记& 
	printf("我的年龄是：%d岁\n",age); 
	
	//两数相加
	double num1;
	double num2;
	printf("请输入数字1：\n");
	scanf("%lf",&num1); 
	printf("请输入数字2：\n");
	scanf("%lf",&num2); 
	printf("%lf和%lf相加的结果是%lf\n",num1,num2,num1+num2);
	
	
	//信息输出
	char name1[100];
	int age1;
	double height; 
	printf("请输入你的名字");
	scanf("%S",&name1);
	 printf("请输入你的年龄");
	 scanf("%d",&age1);
	 printf("请输入你的身高");
	 scanf("%lf",&height);
	 printf("你的名字是%s，\n年龄是%d,\n身高是%.2lf",name1,age1,height);
	
	return 0;
}

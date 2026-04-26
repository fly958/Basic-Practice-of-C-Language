#include<stdio.h>
#include<string.h>

struct Message
{
	char phone[12];
	char email[100];
}; 

//定义结构体
struct Student 
{
	char name[100];
	int age;
	char gender;
	double height;
	struct Message msg;
 } ;

int main()
{ 
    //定义一个结构体表示学生
	//学生的属性：姓名，年龄，性别，身高，联系方式 
	//联系方式也是一个结构体，成员有：手机号，邮箱 
	 
	 //创建学生对象并初始化
	 struct Student stu1={"张三",17,'F',169.9,{"13112345678","39102678@qq.com"}}; 
	  
	  //打印学生信息
	  
	  printf("学生%s，年龄%d,性别%c,身高%lf,手机号%s,邮箱%s",stu1.name ,stu1.age ,stu1.gender ,stu1.height ,stu1.msg.phone,stu1.msg.email); 
   
	return 0;
 } 
 
 

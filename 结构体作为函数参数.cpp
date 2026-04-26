#include<stdio.h>
#include<string.h>

//定义结构体并起别名  
typedef struct Student 
{
	char name[100];
	int age;
}s;

 //因为函数中用到了结构体，所以应该声明在结构体下面 
void Modify(s* p);    

int main()
{ 
    //定义一个结构体表示学生
	//学生的属性：姓名，年龄
	//要求：定义一个函数，修改学生中的数据
	 
	 //创建学生并初始化
	 s student1={"aaa",0};
	 printf("学生%s的年龄为%d\n",student1.name ,student1.age ); 
	 
	 //调用函数修改数据 
	 Modify(&student1);
	 printf("修改后学生%s的年龄为%d\n",student1.name ,student1.age ); 
	  
	return 0;
 } 
 
 //定义函数以修改数据
 void Modify(s* p)                             //传入需要修改对象的地址 
 {
 	//通过键盘录入修改数据  
   printf("请输入你的名字："); 
   scanf("%s",p->name);                       //*(p).name          字符数组（字符串）name被隐式转换为数组首元素的指针，所以不用加& 
   printf("请输入你的年龄："); 
   scanf("%d",&(p->age) );                    //&(*(p).age) 
  } 

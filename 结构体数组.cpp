#include<stdio.h>
#include<string.h> 

struct Student
{
	char name[100];
	int age;
};

int main()
{
      //结构体数组
      //定义一个学生数组并创建3个学生，放入一个数组中，并进行遍历
      struct Student student1;
	  strcpy(student1.name ,"张三");
	  student1.age =17;	  
	  
	  struct Student student2;
	  strcpy(student2.name ,"李四");
	  student2.age =18;
	  
	  struct Student student3={"王五",19};             //此处是结构体初始化操作，特殊，可以直接写 
	  	   
	  //定义数组
	  struct Student stuArr[3]=
	  {
	  	student1,
	  	student2,
	  	student3
	  };	   
	
	
	//遍历数组
	for(int i=0;i<3;i++)
	{
		printf("学生%s年龄%d\n",stuArr[i].name ,stuArr[i].age );   //访问数组中第i个元素的姓名和年龄 
	 } 
	 
	 
	 return 0;
 }
 

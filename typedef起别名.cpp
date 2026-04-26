#include<stdio.h>
#include<string.h> 

//定义结构体
typedef struct Character
{
	char name[100];
	int attack;
	int defense;
	double blood;
 }people; 

int main()
{
      //游戏人物
	  /*
	  定义一个结构体表示游戏人物
	  属性：姓名，攻击力，防御力，血量
	  要求：把三个游戏人物放入数组中，并进行遍历
	 */ 
	 
	 //创建游戏人物
	 struct Character people1={"孙权",2000,200,99.9};
	 people people2={"沈梦溪",1500,200,88.8};               //typedef起别名后，people 相当于 struct Character,可用于简便替代 
	 people people3={"奕星",1000,190,100.0};
	 
	 //存入数组
	 people peopleArr[3]=
	 {
	 	people1,
	 	people2,
	 	people3
     };
	 
	 //遍历数组并输出
	 for(int i=0;i<3;i++)
	 {
	 	printf("%s的攻击力为%d,防御力为%d,血量为%lf\n",peopleArr[i].name ,peopleArr[i].attack ,peopleArr[i].defense ,peopleArr[i].blood );
	  } 
	  
	 return 0;
 }
 

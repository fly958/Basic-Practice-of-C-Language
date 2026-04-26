#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//将四个景点用结构体表示，成员有景点名称，得票数
struct Spot
{
	char name[100];
	int score;
 }; 

int main()
{ 
    /*
	   某班级组织野外郊游，进行班级投票，
	   班上有80名同学进行投票，找出票数最多的景点
	   
	   Ps:
	      1.学生投票用随机数表示
		  2.如果多个景点票数一样多，A优先于B，B优先于C，C优先于D
    */		   
    
    //将四个景点放入一个数组中,并进行数据初始化 
	struct Spot spotArr[4]={{"A",0},{"B",0},{"C",0},{"D",0}}; 
	
	//设置1-4的随机数，依次代表ABCD景点
	srand(time(NULL));//种子 
	
	//循环80次，代表80个同学投票
	for(int i=0;i<80;i++)
	{
		//生成80个0到3的随机数，以代表景点数组的索引，便于进行修改数据 
		int flag=rand()%4;
		 
		 //当生成的随机数为0的时候，代表有一个学生选了景点A，这时景点A的票数即加1，其他同理 
	    spotArr[flag].score ++; 
		
	 } 
	 
	 //对景点的票数进行比较
	 int max=spotArr[0].score ;
	 for(int i=1;i<4;i++)
	 {
	 	if(spotArr[i].score >max)
	 	{
	 		max=spotArr[i].score ;
		 }
	  } 
	  
	  //追溯最多票数属于的景点
	  //同样依据数组索引进行依次检查，从0开始，以3结束，因为A到D拥有优先级，所以一旦找到符合条件的景点即结束 
	  for(int i=0;i<4;i++)
	  {
	  	if(max==spotArr[i].score )
	  	{
	  		printf("最终票数最多的是景点%s,票数为%d",spotArr[i].name ,spotArr[i].score ); 
	  		break; 
		  }
	   } 
 } 
 
 

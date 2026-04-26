#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
int main()
{
	
	srand(time(NULL));
	//随机数的范围：0---32767
	//生成任意范围的随机数9---323
	// 1.把这个范围变成包头不包尾，包左不包右的323+1=324
	//2.拿尾巴-开头324-9=315
	//3.修改代码 
	
	int num = rand()%315+9;     //任意数对315取余都小于315，即0---314，再整体加9，即9---323
	int guess_num; 
	printf("猜一下我心里想的数字\n");
	scanf("%d",&guess_num); 
	while(1)
	{
		if(guess_num==num)
		 {
		 	printf("恭喜你，猜对了\n"); 
		 	break;
		 }
		else
		{
			printf("不好意思，请再猜一次:\n");
			scanf("%d",&guess_num);
	    } 
	}
	
	
	return 0;
}

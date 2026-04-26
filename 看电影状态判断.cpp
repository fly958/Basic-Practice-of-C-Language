#include<stdio.h>
int main()
{
	int mypai=3,myzw=6; 
	int film_pai,film_zw;
	printf("请输入小诗在第几排\n");
	scanf("%d",&film_pai);
	 printf("请输入小诗的座位号\n");
	 scanf("%d",&film_zw);
	 if(mypai==film_pai)
	 {
	 	if(myzw==film_zw-1||myzw==film_zw+1)
 	    {
	 	printf("开心地看电影"); 
	 }
     }
	 else
	 {
	 	printf("开心地玩游戏");
	 }
	return 0;
}

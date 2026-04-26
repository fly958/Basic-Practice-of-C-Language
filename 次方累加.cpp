#include<stdio.h>
int main()
{	 int sum=0;
     int gw,sw,bw;
    for(int i=0;i<=9;i++)
	 {
	 	gw=i%10;
	 	sw=0;
	 	bw=0;
	 	if(gw+sw+bw==15)
	 sum++;
	 }
	 for(int j=10;j<=99;j++)
	 {
	 	gw=j%10;
	 	sw=j/10;
	 	bw=0;
	 	if(gw+sw+bw==15)
	 sum++;
	 }
	 
	 for(int k=100;k<=999;k++)
	 {
	 	gw=k%10;
	 	sw=k/10%10;
	 	bw=k/100;
	 	if(gw+sw+bw==15)
	 sum++;
	 }
		printf("0到1000之间各个位上数字之和为15的一共有%d个数",sum);
		printf("%d",1/10);
	return 0;
}

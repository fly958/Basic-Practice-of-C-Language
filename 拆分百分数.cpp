#include<stdio.h>
int main()
{
	int shu,gw,sw,bw;
	printf("请输入一个百位数：\n");
	scanf("%d",&shu);
	gw = shu % 10;
	sw = shu/10% 10;
	bw = shu/100%10;
	printf("个位是%d,十位是%d,百位是%d", gw, sw, bw);

	return 0;


}

#include<stdio.h>
int main()
{
    int	money;
	printf("ÇëÊäÈëÄãë´½ðµÄ¶î¶È£º");
	scanf("%d",&money);
	if(money>1&&money<99)
	{ 
	printf("×ð¹óµÄvip1");
	 } 
	else  if(money>99&&money<499)
	{ 
	printf("×ð¹óµÄvip2");
	 } 
	 else if(money>499&&money<999)
	{ 
	printf("×ð¹óµÄvip3"); 
	 } 
	else if(money>999&&money<1999)
	{ 
	printf("×ð¹óµÄvip4"); 
	 } 
	else if(money>1999&&money<5000)
	{ 
	printf("×ð¹óµÄvip5"); 
	 } 
	 
	return 0;
}

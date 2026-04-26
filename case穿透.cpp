#include <stdio.h>
int main()
{
	int choic;
	printf("请选择服务：\n1机票查询\n2机票预订\n3机票改签\n4退出服务\n");
	scanf("%d", &choic);
	switch (choic)
	{
	case 1:
		printf("机票查询\n");
		break;
	case 2:
		printf("机票预订\n");
		break;
	case 3:
		printf("机票改签\n");
		break;
	default :
		printf("退出服务\n");
	}
	return 0;
}

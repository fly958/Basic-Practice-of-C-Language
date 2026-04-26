#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个数字，我来判断这个数字是不是2的幂次方:\n");
	scanf("%d", &n);
	while (n %2== 0)
	{
	   n = n / 2;
	}

		
	if (n==1)
		{
			printf("yes");
		}
	else
		{
			printf("no");
		}
	return 0;
}

#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("1到100的累加之和为：%d", sum);
	return 0;
}

#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("1到100之间的偶数和为：%d", sum);
	return 0;
}

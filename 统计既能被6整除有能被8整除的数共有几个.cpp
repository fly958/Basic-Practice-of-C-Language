#include <stdio.h>
int main()
{
	int num1, num2;
	int sum = 0;
	printf("请输入两个不同的数字，先大后小：\n");
	scanf("%d", &num1);
	printf("\n");
	scanf("%d", &num2);
	for (int i = num1; i <= num2; i++)
	{
		if (i % 24 == 0)
		{
			sum += 1;
		}
	}
	printf("%d到%d之间既能被6整除有能被8整除的数一共有%d个\n", num1, num2, sum);

	return 0;
}

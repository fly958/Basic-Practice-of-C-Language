#include<stdio.h>
int yingyee(int i, int j, int k)
{
	int sum = i + j + k;
	return sum;
}
int main()
{
	int score1 = yingyee(10, 20, 15);
	int score2 = yingyee(20, 30, 17);
	int score3 = yingyee(19, 17, 20);
	int score4 = yingyee(23, 21, 19);
	
	int max=score1;
	if(score2>max)
	{
		max=score2;
	}
	if(score3>max)
	{
		max=score3;
	}if(score4>max)
	{
		max=score4;
	}
	printf("四个季度中营业额最高的是%d",max);
	return 0;
}

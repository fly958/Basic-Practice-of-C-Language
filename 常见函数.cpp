#include<stdio.h>
#include<time.h>        //time.h是头文件，只有先引用，才能使用里面的函数
int main()
{
	//time()    获取当前时间
	//形参：表示获取的当前时间是否需要在其他地方进行存储
	//一般不需要：NULL
	//返回值：long long
	long long res=time(NULL);
	printf("%lld\n", res);
	return 0;
}

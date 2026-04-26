#include<stdio.h>

int main()
{
	/*指针的计算：
	* 步长：指针移动一次走了多少个字节
	* char:2
	* short:2
	* int:4
	* long:4
	* longlong:8
	* 加法：指针向后移了N步：p+1
	* 减法：指针向前移了N步：p-1
	*/
	  

	//定义变量
	int a = 10;
	int* p = &a;
	printf("%p\n", p);
    printf("%p\n", p+1);
    printf("%p\n", p-1);
	return 0;
}


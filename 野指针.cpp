#include<stdio.h>
int*mathod(); 
int main()
{
	//野指针：指针指向的空间未被分配
	int a=10;
	int*p1=&a;
	printf("%d\n",*p1);
	printf("%d\n",p1);
	
	//p2野指针
	int*p2=p1+10;
	printf("%d\n",*p2);                              //p2的值 0
	printf("%d\n",p2);                               //p2的地址
	
	//悬空指针：指针指向的空间已经分配，但是被释放了
	 int*p3= mathod();
	 printf("拖点时间\n"); 
	 printf("拖点时间\n"); 
	 printf("拖点时间\n"); 
	 printf("拖点时间\n"); 
	 printf("拖点时间\n"); 
	 printf("拖点时间\n"); 
	 
	 
	 printf("%d\n",*p3);                             //p3的值    
 	 printf("%d\n",p3);	                             //p3的地址 
 	 
	 return 0;
}
//num是有生命的，函数mathod结束时就已死亡 
int*mathod()
{
	int num=10;
	int*p3=&num;
	return p3;
 } 

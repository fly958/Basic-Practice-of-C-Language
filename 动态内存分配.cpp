#include<stdio.h>
#include<stdlib.h> 

int main()
{
	//动态内存分配
	//malloc 申请连续空间 
    //calloc   申请连续空间 并初始化
	//realloc   修改空间大小
	//free        释放空间 
	
	
	//利用malloc申请100个int类型的空间
	//返回这片空间的首地址 
	//malloc 返回的是void类型，在以cpp为文件后缀有c++的额外规则，所以只能强转（int*） 
	int*p=(int*)malloc(100*sizeof(int));
	 
	 printf("最初的内存地址为%p\n",p);
	 
	//1.赋值
	for(int i=0;i<10;i++)
	{
		//第一种赋值 
	//	*(p+i)=10*(i+1);//10 20 30 40 50 60 70 80 90 100
		
		//第二种赋值
		 p[i]=10*(i+1);
	 } 
	 
	 //2.遍历
	  
	  	for(int i=0;i<10;i++)
	{
		printf("%d  ",p[i]); 
	 } 
	 
	 
	 //3.扩容：20个int类型的整数
	 int*pp=(int*)realloc(p,sizeof(int)*20);
	  
	  printf("修改后内存地址%p\n",pp);
	   
	  	for(int i=0;i<20;i++)
	{
		printf("%d  ",p[i]); 
	 } 
	 
	 //4.释放空间 
	 free(pp);
	 
	  
	return 0;
}




/*1.ma1loc创建空间的单位是字节
2, ma11oc返回的是void类型的针，没有步长的概念，也无法获取空间中的数据，需要强转
3,mal1loc返回的仅仅是首地址，没有总大小，最好定义一一个变量记录总大小
4,malloc申请的空间不会自动消失，如果不能正确释放，会导致内存泄露
5, malloc申请的空间过多，会产生虚拟内存
6,malloc申请的空间没有初始化值，需要先赋值才能使用，free释放完空间之后，空间中数据叫做脏数据，可能被清空，可能被修改为其他值
8,calloc就是在ma11oc的基础上多一个初始化的动作
9,realloc修改之后的空间,地址值有可能发生变化，也有可能不会改变，但是原本的数据不会丢失,如果内存已满，则返回NULL 
10,realloc修改之后，无需释放原来的空间，函数底层会进行处理
**/

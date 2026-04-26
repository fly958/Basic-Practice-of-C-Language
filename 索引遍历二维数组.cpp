#include<stdio.h> 
int main()
{
	//二维数组
	//定义格式一：
	int arr[3][5]                             //3表示里面所含的一维数组的个数，5表示一维数组中的元素个数 
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555}
	 } ;
	 //遍历：利用索引进行遍历/利用指针进行遍历
	  for(int i=0;i<3;i++)
    {
	  	for(int j=0;j<5;j++)
	    {
	  	   printf("%d  ",arr[i][j]);
        }  
        printf("\n");
    } 
    
    printf("------------------------------------------------------------------------------\n");
    
    //定义格式二（里面的一维数组长度不一样的情况） 
    //1，先将一维数组定义好
	int arr1[3]={1,2,3};
	int arr2[4]={1,2,3,4};
	int arr3[5]={1,2,3,4,5};
	
	//预先计算好每一个一维数组的长度
	int len1=sizeof(arr1)/sizeof(int); 
	int len2=sizeof(arr2)/sizeof(int);
	int len3=sizeof(arr3)/sizeof(int);
	//将各个长度组成长度数组
	int arrlen[3]={len1,len2,len3}; 
	
	//2,再把一维数组放入二维数组中
	//数组的数据类型要和内部储存的元素保持一致
	//arr1:使用数组名进行计算的时候，退化为指向第一个元素的指针，此时不再表示数组的那个整体了 
	int* arr4[3]={arr1,arr2,arr3};
	
	//利用索引遍历数组
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<arrlen[i];j++)
	  {
		printf("%d  ",arr4[i][j]);
      }
	  printf("\n"); 
    } 
    
	return 0;
}


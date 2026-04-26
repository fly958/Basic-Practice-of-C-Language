#include<stdio.h>  
//定义一个遍历数组的函数   注意：形参用于接受外部数据 
void printArr(int arr[],int len)
{
		for(int i=0;i<len;i++)
    {
	    printf("%d",arr[i]);
        printf("  ");
    }
}


int main()
{
	//定义数组并得到数组长 
	int arr[5] = {0};
	int len=sizeof(arr)/sizeof(arr[0]);
	//键盘录入
	printf("请输入5个数字录入数组中：\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	//遍历数组 
	printf("您输入的数组为：\n");
	//调用函数，传入实参 
    printArr(arr,len);
//反转数组
     int i=0;
     int j=len-1;
     while(i<j)
	 {
	 	int temp=arr[i];
	 	arr[i]=arr[j];
	 	arr[j]=temp;
	 	
	 	i++;
	    j--; 
	  } 
	 //再次调用，确认反转
	  printf("反转后的数组为：\n");
	  printArr(arr,len);
	return 0;
}



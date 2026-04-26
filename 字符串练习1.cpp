#include<stdio.h>
#include<string.h>
int main()
{
	char*strArr[3]=
	{
		"mike",
		"jane",
		"jack"
	 } ;
	 for(int i=0;i<3;i++)
	 {
	 	char*name=strArr[i];
	 	printf("%s\n",strArr[i]);
	 	int len=strlen(strArr[i]); 
	 	printf("第%d个名字的长度为%d\n",i+1,len);
	 }
    
	 return 0;
 }
 

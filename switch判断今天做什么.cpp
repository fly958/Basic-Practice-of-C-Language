#include<stdio.h>
int main()
{   int day;
	printf("今天星期几？\n");
	scanf("%d",&day);
	switch(day)
	 {
	 	case 1:
	 		printf("今天跑步");
	 		break;
	 	case 2:
		    printf("今天游泳");
			break;	
		case 3:
		    printf("今天慢走");
			break;	
	    case 4:
		    printf("今天动感单车");	
		    break;
		case 5:
		    printf("今天拳击");	
		    break;
		case 6:
		    printf("今天爬山");	
			break;	
		case 7:
		    printf("今天好好吃一顿");
			break;	
		default:
			printf("输入格式不匹配");
		    break;					    
	 }
	 return 0;
}

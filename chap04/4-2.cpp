/*
   编写一段程序，像右面这样读取两个整数的值，然后计算出他们之间所有整数的和。 
*/ 
#include<stdio.h>
int main (void)
{
	int cnt,a,b,sum;
	
	puts("请输入两个整数");
	
    printf("整数A：");  scanf("%d",&a);
    printf("整数B：");  scanf("%d",&b);
		
	do{

		sum = 0;
		cnt = 0;
		
		cnt = cnt + 1;
		sum = (a+b)*cnt/2;
		
    } while(cnt<a-b);
	
	printf("整数A和整数B之间所有整数的和为%d",sum);
	
	return 0;
 } 

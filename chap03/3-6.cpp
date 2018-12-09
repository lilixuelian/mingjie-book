/*
   编写一段程序，计算出输入的三个整数的最小值并显示。 
*/

#include<stdio.h>

int main (void)
{
	int a,b,c,min;
	
	puts("请输入三个整数");
	
	printf("整数A："); scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	printf("整数C："); scanf("%d",&c);
	
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	
	printf("三个整数的最小值是%d。",min);    
	
	return 0;
}

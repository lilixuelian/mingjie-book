/*
   编写一段程序，向右面这样输入一个整数值，显示出它的绝对值。 
*/ 

#include<stdio.h>

int main (void)
{
	int a;
	
	printf("请输入一个整数："); scanf("%d",&a);
	if (a==0)
	   puts("绝对值是0");
	else if (a>0)
	   printf("绝对值是%d",a);
	else
	   printf("绝对值是%d",-a);
	
	return 0;
}

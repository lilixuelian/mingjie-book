/*
   使用if语句替换代码清单3-15程序中的条件运算符，实现同样的功能。 
*/

#include<stdio.h>

int main(void)
{
	int a,b,sub;
	
	puts("请输入两个整数。") ;
	
	printf("整数A：");  scanf("%d",&a);
	printf("整数B：");  scanf("%d",&b);
	
	sub = (a - b);
	
	if (sub == 0)
	   puts("差是0");
	else if (sub > 0)
	   printf("差是%d",sub);
	else
	   printf("差是%d",-sub);
	
	
	return 0;
}

/*
   编写一段程序，像右面这杨显示出小于输入的整数的所有2的乘方 
*/ 

#include<stdio.h>

int main (void)
{
	int i,no;
	
	printf("请输入一个正整数：");
	scanf("%d",&no);
	
	i = 2;
	while(i < no)
	{
		printf("%d ",i);
		i=2*i;  	
	}
	
	return 0;
 } 

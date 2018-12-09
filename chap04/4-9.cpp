/*
   编写一段程序，使之像右面这样交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示 
*/ 

#include<stdio.h>

int main (void)

{
	int i;
	int cnt=1;
	
	printf("请输入一个正整数：");
	scanf("%d",&i);
	
	while (cnt < i)
	{
		if (cnt % 2 == 1)
		printf("+");
		else
		printf("-");
		
		cnt++;
	}
	
	return 0;
}

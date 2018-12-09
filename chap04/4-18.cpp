/*
   编写一段程序，输入一个整数值，显示该整数值个'*'。 
*/

#include<stdio.h>

int main (void)
{
	int i;
	int j=1;
	
	printf("显示多少个*：%d",i);
	scanf("%d",&i);
	
	for(i>0;j<=i;j++)
	{
	putchar('*');
	if(j%5==0)
	printf("\n");
    }
	
	return 0;
 } 

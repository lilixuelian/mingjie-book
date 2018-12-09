/*
   编写一段程序，像右面这样显示以所输入整数为边长的正方形。  
*/  

#include<stdio.h>

int main (void)
{
	int i,j,n;
	
	puts("生成一个正方形");
	printf("正方形有几层：%d",i);
	scanf("%d",&i);
	
	for(j = 1 ; j <= i; j++)
	{
		putchar('*');
		for(n = 1;n < i; n++)
		putchar('*');
		printf("\n");
	}

	
	return 0;
}

/*
   一定要给变量赋初始值！！！ 
*/

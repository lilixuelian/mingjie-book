#include <stdio.h>

int cube(int a)
{
	return a*a*a;
}

int main (void)
{
	int i;
	
	printf("请输入一个整数：%d", i);
	scanf("%d", &i);
	
	printf("该整数的立方为：%d", cube(i));
	
	return 0;
}
 

#include <stdio.h>

int sqr(int x)
{
	return x*x;
}

int pow4(int y)
{
	return sqr(y)*sqr(y);
}

int main (void)
{
	int i;
	
	printf("请输入一个整数：%d", i);
	scanf("%d", &i);
	
	printf("该整数的四次方为：%d", pow4(i));
	
	return 0;
}
 

#include<stdio.h>

#define diff(x, y) ((x) - (y))

int main (void)
{
	
	int x, y;
	
	puts("请输入两个数：");
	
	printf("被减数x：");
	scanf("%d", &x);
	
	printf("减数y：");
	scanf("%d", &y);
	
	printf("两数之差为：%d", diff(x, y));
	
	return 0;
 } 

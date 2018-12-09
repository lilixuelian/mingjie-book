#include <stdio.h>

unsigned rrotate(unsigned x,int n){
	
	return x >> n;
}

unsigned lrotate(unsigned x,int n){
	
	return x << n;
}

int main (void)
{
	int i, j;
	
	printf("请输入整数：%d", i);
	scanf("%d", &i);
	
	printf("请输入移动位数：%d", j);
	scanf("%d", &j);
	
	printf("%u向右移动%d次后的值：%u\n", i, j, rrotate(i, j));
	printf("%u向左移动%d次后的值：%u\n", i, j, lrotate(i, j));
	
	
}

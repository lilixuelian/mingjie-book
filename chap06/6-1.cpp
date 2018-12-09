#include <stdio.h>

int min2(int a, int b)
{
	return (a < b ) ? a : b ;
}

int main (void)
{
	int n1, n2;
	
	puts("请输入两个实数：");
	
	printf("实数1：",n1);
	scanf("%d", &n1);
	printf("实数2：",n2);
	scanf("%d", &n2);
	
	printf("两个数中较小的是%d。\n", min2(n1, n2));
	
	return 0;
}

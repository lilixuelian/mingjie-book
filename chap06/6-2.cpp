#include<stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	
	(b < min) ? (min = b) : min ;
	(c < min) ? (min = c) : min ;
	
	return min;
}

int main (void)
{
	int n1, n2, n3;
	
	puts("请输入三个实数。");
	
	printf("实数1：%d", n1);
	scanf("%d", &n1);
	printf("实数2：%d", n2);
	scanf("%d", &n2);
	printf("实数3：%d", n3);
	scanf("%d", &n3);
	
	printf("三个实数中较小的是：%d。\n", min3(n1, n2, n3));
	
	return 0;
}


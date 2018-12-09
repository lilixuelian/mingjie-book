#include <stdio.h>

int sumup (int n)
{
	return (1+n)*n/2;
}

int main (void)
{
	int i;
	
	printf("请输入一个整数n：%d", i);
	scanf("%d", &i);
	
	printf("1到n之间所有整数的和为：%d",sumup(i));
	
	return 0;
}

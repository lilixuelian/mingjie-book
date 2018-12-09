#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main (void)
{
	int x, y;
	
	puts("请输入两个数：");
	
	printf("x：%d", x);
	scanf("%d", &x);
	
	printf("y：%d", y);
	scanf("%d", &y);
	
	printf("x, y中较大的数字为%d", max(x, y));
	
	return 0;
}

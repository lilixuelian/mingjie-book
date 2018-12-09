#include <stdio.h>

#define swap(type, x, y)       (x = x + y , y = x - y , x = x - y)

int main (void)
{
	int x, y;
	
	puts("请输入两个数：");
	
	printf("x:");
	scanf("%d", &x);
	
	printf("y：");
	scanf("%d", &y);
	
	swap(int, x, y);
	
	printf("x、y交换后x为%d，y为%d", x, y)
	;
	
	return 0;
}

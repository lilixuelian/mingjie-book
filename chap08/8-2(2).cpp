#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main (void)
{
	int a, b, c, d;
	
	puts("请输入四个数：");
	
	printf("a：");
	scanf("%d", &a);
	
	printf("b：");
	scanf("%d", &b);
	
	printf("c：");
	scanf("%d", &c);
	
	printf("c：");
	scanf("%d", &c);
	
	
	printf("a, b, c, d中较大的数字为%d\n", max(max(a, b), max(c, d)));
	printf("a, b, c, d中较大的数字为%d\n", max(max(max(a, b), c), d));
	
	return 0;
}

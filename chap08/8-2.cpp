#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main (void)
{
	int x, y;
	
	puts("��������������");
	
	printf("x��%d", x);
	scanf("%d", &x);
	
	printf("y��%d", y);
	scanf("%d", &y);
	
	printf("x, y�нϴ������Ϊ%d", max(x, y));
	
	return 0;
}

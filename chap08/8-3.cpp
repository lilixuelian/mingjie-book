#include <stdio.h>

#define swap(type, x, y)       (x = x + y , y = x - y , x = x - y)

int main (void)
{
	int x, y;
	
	puts("��������������");
	
	printf("x:");
	scanf("%d", &x);
	
	printf("y��");
	scanf("%d", &y);
	
	swap(int, x, y);
	
	printf("x��y������xΪ%d��yΪ%d", x, y)
	;
	
	return 0;
}

#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main (void)
{
	int a, b, c, d;
	
	puts("�������ĸ�����");
	
	printf("a��");
	scanf("%d", &a);
	
	printf("b��");
	scanf("%d", &b);
	
	printf("c��");
	scanf("%d", &c);
	
	printf("c��");
	scanf("%d", &c);
	
	
	printf("a, b, c, d�нϴ������Ϊ%d\n", max(max(a, b), max(c, d)));
	printf("a, b, c, d�нϴ������Ϊ%d\n", max(max(max(a, b), c), d));
	
	return 0;
}

#include <stdio.h>

int min2(int a, int b)
{
	return (a < b ) ? a : b ;
}

int main (void)
{
	int n1, n2;
	
	puts("����������ʵ����");
	
	printf("ʵ��1��",n1);
	scanf("%d", &n1);
	printf("ʵ��2��",n2);
	scanf("%d", &n2);
	
	printf("�������н�С����%d��\n", min2(n1, n2));
	
	return 0;
}

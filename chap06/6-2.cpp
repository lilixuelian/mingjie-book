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
	
	puts("����������ʵ����");
	
	printf("ʵ��1��%d", n1);
	scanf("%d", &n1);
	printf("ʵ��2��%d", n2);
	scanf("%d", &n2);
	printf("ʵ��3��%d", n3);
	scanf("%d", &n3);
	
	printf("����ʵ���н�С���ǣ�%d��\n", min3(n1, n2, n3));
	
	return 0;
}


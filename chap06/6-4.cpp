#include <stdio.h>

int sqr(int x)
{
	return x*x;
}

int pow4(int y)
{
	return sqr(y)*sqr(y);
}

int main (void)
{
	int i;
	
	printf("������һ��������%d", i);
	scanf("%d", &i);
	
	printf("���������Ĵη�Ϊ��%d", pow4(i));
	
	return 0;
}
 

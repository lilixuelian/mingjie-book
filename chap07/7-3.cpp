#include <stdio.h>

unsigned rrotate(unsigned x,int n){
	
	return x >> n;
}

unsigned lrotate(unsigned x,int n){
	
	return x << n;
}

int main (void)
{
	int i, j;
	
	printf("������������%d", i);
	scanf("%d", &i);
	
	printf("�������ƶ�λ����%d", j);
	scanf("%d", &j);
	
	printf("%u�����ƶ�%d�κ��ֵ��%u\n", i, j, rrotate(i, j));
	printf("%u�����ƶ�%d�κ��ֵ��%u\n", i, j, lrotate(i, j));
	
	
}

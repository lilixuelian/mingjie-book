#include <stdio.h>

int main(void)
{
	unsigned i;
	
	printf("������һ��������%d", i);
	scanf("%d", &i);	
	
	printf("��������2λ���ֵ���������2��ָ���ݺ��ֵ��%u = %u\n", i << 2, i*2*2);
	printf("��������2λ���ֵ���������2��ָ���ݺ��ֵ��%u = %u\n", i >> 2, i/2/2); 
	
	return 0;
 } 



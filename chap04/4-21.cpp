/*
   ��дһ�γ���������������ʾ������������Ϊ�߳��������Ρ�  
*/  

#include<stdio.h>

int main (void)
{
	int i,j,n;
	
	puts("����һ��������");
	printf("�������м��㣺%d",i);
	scanf("%d",&i);
	
	for(j = 1 ; j <= i; j++)
	{
		putchar('*');
		for(n = 1;n < i; n++)
		putchar('*');
		printf("\n");
	}

	
	return 0;
}

/*
   һ��Ҫ����������ʼֵ������ 
*/

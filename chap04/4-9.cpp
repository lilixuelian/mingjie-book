/*
   ��дһ�γ���ʹ֮����������������ʾ+��-���ܸ������������������ֵ�����⣬������0���µ�����ʱ����ʲôҲ����ʾ 
*/ 

#include<stdio.h>

int main (void)

{
	int i;
	int cnt=1;
	
	printf("������һ����������");
	scanf("%d",&i);
	
	while (cnt < i)
	{
		if (cnt % 2 == 1)
		printf("+");
		else
		printf("-");
		
		cnt++;
	}
	
	return 0;
}

/*
   ��дһ�γ�����������������һ������ֵ����ʾ�����ľ���ֵ�� 
*/ 

#include<stdio.h>

int main (void)
{
	int a;
	
	printf("������һ��������"); scanf("%d",&a);
	if (a==0)
	   puts("����ֵ��0");
	else if (a>0)
	   printf("����ֵ��%d",a);
	else
	   printf("����ֵ��%d",-a);
	
	return 0;
}

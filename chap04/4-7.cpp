/*
   ��дһ�γ���������������ʾ��С�����������������2�ĳ˷� 
*/ 

#include<stdio.h>

int main (void)
{
	int i,no;
	
	printf("������һ����������");
	scanf("%d",&no);
	
	i = 2;
	while(i < no)
	{
		printf("%d ",i);
		i=2*i;  	
	}
	
	return 0;
 } 

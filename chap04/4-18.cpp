/*
   ��дһ�γ�������һ������ֵ����ʾ������ֵ��'*'�� 
*/

#include<stdio.h>

int main (void)
{
	int i;
	int j=1;
	
	printf("��ʾ���ٸ�*��%d",i);
	scanf("%d",&i);
	
	for(i>0;j<=i;j++)
	{
	putchar('*');
	if(j%5==0)
	printf("\n");
    }
	
	return 0;
 } 

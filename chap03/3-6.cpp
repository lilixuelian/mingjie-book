/*
   ��дһ�γ��򣬼���������������������Сֵ����ʾ�� 
*/

#include<stdio.h>

int main (void)
{
	int a,b,c,min;
	
	puts("��������������");
	
	printf("����A��"); scanf("%d",&a);
	printf("����B��"); scanf("%d",&b);
	printf("����C��"); scanf("%d",&c);
	
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	
	printf("������������Сֵ��%d��",min);    
	
	return 0;
}

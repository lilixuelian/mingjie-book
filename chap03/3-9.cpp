/*
   ʹ����������������ϰ3-6�ĳ����е�if��䣬ʵ��ͬ���Ĺ��ܡ� 
*/

#include<stdio.h>

int main (void)
{
	int a,b,c,min;

	puts("����������������");

	printf("����1��");	scanf("%d",&a); 
	printf("����2��");	scanf("%d",&b); 
	printf("����3��");	scanf("%d",&c); 

	min = (a < b) ? a : b;
	min = (c < min) ? c : min;
	
	printf("��Сֵ��%d��",min);

	return 0;
}

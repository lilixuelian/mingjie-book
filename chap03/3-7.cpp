/*
   ��дһ�γ��򣬼����������ĸ������е����ֵ����ʾ�� 
*/
#include<stdio.h>

int main (void)
{
	int a,b,c,d,max;
	
	puts("�������ĸ�������");
	
	printf("����A��");  scanf("%d",&a);
	printf("����B��");  scanf("%d",&b);
	printf("����C��");  scanf("%d",&c);
	printf("����D��");  scanf("%d",&d);
	
	max = a ;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	
	printf("�ĸ������е����ֵΪ%d",max);
	
	return 0;
	
}

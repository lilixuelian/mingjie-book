/*
   ʹ��if����滻�����嵥3-15�����е������������ʵ��ͬ���Ĺ��ܡ� 
*/

#include<stdio.h>

int main(void)
{
	int a,b,sub;
	
	puts("����������������") ;
	
	printf("����A��");  scanf("%d",&a);
	printf("����B��");  scanf("%d",&b);
	
	sub = (a - b);
	
	if (sub == 0)
	   puts("����0");
	else if (sub > 0)
	   printf("����%d",sub);
	else
	   printf("����%d",-sub);
	
	
	return 0;
}

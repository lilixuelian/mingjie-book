/*
   ��дһ�γ���������������ȡ����������ֵ��Ȼ����������֮�����������ĺ͡� 
*/ 
#include<stdio.h>
int main (void)
{
	int cnt,a,b,sum;
	
	puts("��������������");
	
    printf("����A��");  scanf("%d",&a);
    printf("����B��");  scanf("%d",&b);
		
	do{

		sum = 0;
		cnt = 0;
		
		cnt = cnt + 1;
		sum = (a+b)*cnt/2;
		
    } while(cnt<a-b);
	
	printf("����A������B֮�����������ĺ�Ϊ%d",sum);
	
	return 0;
 } 

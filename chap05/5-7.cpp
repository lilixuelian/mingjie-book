 /*
    ��дһ�γ������ұ�������ȡ�����е����ݸ�����Ԫ��ֵ����ʾ����ʾʱ����ֵ֮���ö��źͿո�ָ���ô����Ž�����ֵ��������
	ע�����ö���ʽ�������������Ԫ�ظ��� 
 */ 

#include<stdio.h>

#define NUMBER 50

int main (void)
{
	int tensu[NUMBER];
	int i,j;
	
	printf("���ݸ�����",NUMBER);
	scanf("%d",&NUMBER);
	
	for(i = 0;i < NUMBER;i++)
	printf("%2d�ţ�\n",i);
	scanf("%2d",&i); 
	
	for(j = 0;j < NUMBER;j++)
	{
	putchar('{'); 
	printf("%d,",j);
    }
    putchar('}');
	
	
	return 0;
}

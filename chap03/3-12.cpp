/*
   �Դ����嵥3-4�еĳ�������޸ģ���ʹ��if��䣬���Ǹ���switch�����ʵ�֡� 
*/

#include<stdio.h>

int main (void)
{
	int a;
	
	printf("������һ��������");
	
	scanf("%d", &a);
	
	switch(a % 2){
	
		case 1 : puts("������������");	break;
		case 0 : puts("������ż����");	break;
    }
	
	return 0;
}

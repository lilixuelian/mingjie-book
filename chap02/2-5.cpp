/*
   ��дһ�γ���������������ȡ����������ֵ�������ǰ���Ǻ��ߵİٷ�֮��������ʵ��������
*/

#include <stdio.h>

int main(void)
{
	int num1,num2;
	
	puts("����������������");
	
	printf("����a��"); scanf("%d",&num1);
	printf("����b��"); scanf("%d",&num2);
	
	printf("a��b��%f%%",(double)num1/num2*100);
	
	return 0;
 } 
 
/*
   point��1��д�ٷ�֮����ʱ����printf��Ҫ������%%
          2��Ϊ��ʹ�ô�����һЩ�������ý϶̵ķ��Ŵ��棬����num1��Ϊa��ҳ�����һЩ 
*/ 

/*
	�Դ����嵥4-5�еĳ�������޸ģ��������ֵΪ������ʱ��ִ�л��в��� 
*/

#include <stdio.h>

int main(void)
{
	int n;

	printf("������һ����������");
	scanf("%d", &n);

	while (n >= 0) {
		printf("%d ", n);
		n--;			/* no��ֵ�ݼ� */
	}
	
	if (n >= 0)
	printf("\n");		/* ���� */

	return 0;
}

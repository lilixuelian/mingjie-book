/*
	�Դ����嵥4-6�ĳ�������޸ģ�ʹ��ݼ���1����0���������ֵС��0ʱ�������л��� 
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ����������");
	scanf("%d", &no);

	while (no >= 1)
		printf("%d ", no--);	/* no��ֵ����ʾ֮��ݼ� */
	
	if (no >= 0)
	printf("\n");				/* ���� */

	return 0;
}

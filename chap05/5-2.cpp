/*
	���ΰ� 5 �� 4 �� 3 �� 2 �� 1��ֵ�������ÿ��Ԫ�ز���ʾ��ʹ��for��䣩
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5];	/* int[5]���� */

	for (i = 0; i < 5; i++)		/* Ϊ����Ԫ�ظ�ֵ */
		v[i] = 5 - i;

	for (i = 0; i < 5; i++)		/* ��ʾԪ�ص�ֵ */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}

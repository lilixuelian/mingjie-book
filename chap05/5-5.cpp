 /*
	�������ȫ��Ԫ�ؽ��е�������
*/

#include <stdio.h>

#define NUMBER 7

int main(void)
{
	int i;
	int x[NUMBER];					/* int[7] ���� */

	for (i = 0; i < NUMBER; i++) {	/* ����Ԫ�ص�ֵ */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* ������Ԫ�ؽ��е������� */
		int temp = x[i];
		x[i]     = x[NUMBER - 1 - i];
		x[NUMBER - i] = temp;
	}

	puts("���������ˡ�");
	for (i = 0; i < NUMBER; i++)		/* ��ʾԪ�ص�ֵ */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

/*
	�������е�ȫ��Ԫ�ظ��Ƶ���һ��������
*/

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {17, 23, 36};	/* ʹ��{17��23��36��0��0} ���г�ʼ�� */
	int b[5];	

	for (i = 0; i < 5; i++)
		b[i] = a[5-i];

	puts("  a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}
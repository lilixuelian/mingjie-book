/*
	�ֱ�����ֱ�������·��������·��ĵ���ֱ�������� 
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("����ֱ�������·��ĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		
		for (j = 1; j <= i; j++)		
			putchar('*');
		putchar('\n');					
	}
	
	printf("\n");
	
		for (i = 1; i <= len; i++) {	
		for (j = 1; j <= len - i; j++)	
			putchar(' ');
		for (j = 1; j <= i; j++)		
			putchar('*');
		putchar('\n');					
	}
	
	

	return 0;
}